using UnityEngine;
using System.Collections;
using Meta.WitAi.Events;

public enum VelocetyState
{
    High,
    Low
}
public class ccout : MonoBehaviour
{
    public MidiChannel channel = MidiChannel.Ch1;
    public int noteNumber = 48;
    public float velocity = 0.9f;
    public float delay = 2.0f;
    public float length = 0.1f;
    public float interval = 1.0f;
    public float value;
    public int controllerNumber = 64;
    private float timer = 0f; // 计时器
    public float vaa;
    float scale;
    public GameObject hand;
    public bool tri;
    public VelocetyState velocetyState = new VelocetyState();
    public float VelocetyThreashold;
    VelocetyData V_Data;

    public void Start()
    {
        V_Data = hand.GetComponent<VelocetyData>();
        MidiBridge.instance.Warmup();
    }
    public void Update()
    {

        if (tri)
        {
            timer += Time.deltaTime;

            // 计算当前值，使用线性插值从0到1
            value = Mathf.Clamp01(timer / 10f);

            // 应用值到你想要的地方，例如改变物体的颜色、大小等等
            // 这里仅作示例，你可以根据你的需要进行修改
            //Debug.Log("Current value: " + value);

            // 如果超过了3秒，重置计时器
            if (timer >= 10f)
            {
                timer = 10f;
            }
            //MidiBridge.instance.Warmup();
            //MidiOut.SendControlChange(channel, controllerNumber, value);
        }
        else
        {
            if (hand != null)
            {
                value = hand.GetComponent<handpartrack>().midifloat;
            }

            //MidiBridge.instance.Warmup();
            //MidiOut.SendControlChange(channel, controllerNumber, value);
        }

        if (V_Data)
        {
            if ((V_Data.Velocety > VelocetyThreashold) && (velocetyState == VelocetyState.Low))
            {
                velocetyState = VelocetyState.High;
                MidiOut.SendNoteOn(channel, controllerNumber, 43);
            }
            else if ((V_Data.Velocety < VelocetyThreashold) && (velocetyState == VelocetyState.High))
            {
                velocetyState = VelocetyState.Low;
                MidiOut.SendNoteOff(channel, controllerNumber);
            }
        }






    }

}
