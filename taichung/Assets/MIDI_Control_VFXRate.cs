using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.InputSystem;
using UnityEngine.VFX;

/// <summary>
/// 這個腳本用於控制VFX的Rate和Radius參數。<br/>
/// Author: misosir00177 北科大互動系魏直彦 <br/>
/// First Created: 2025.07.18
/// </summary>
public class MIDI_Control_VFXRate : MonoBehaviour
{
    [Header("這個腳本用於控制VFX的Rate和Radius參數")]
    [Header("Value Setting and VFX Source / 參數大小設定與VFX來源設定")]
    [SerializeField] VisualEffect vfxSource = null;
    [Tooltip("Rate參數名稱，預設為\"Rate\"")]
    [SerializeField] string vfxRateParamName = "Rate";
    [Tooltip("Radius參數名稱，預設為\"MaxRadius\"")]
    [SerializeField] string vfxRadiusParamName = "MaxRadius";
    [Tooltip("Rate的最小值，預設為0")]
    [SerializeField] private int rateMin = 0;
    [Tooltip("Rate的最大值，預設為5000")]
    [SerializeField] private int rateMax = 5000;
    [Tooltip("Radius的最小值，預設為0.2")]
    [SerializeField] private float radiusMin = 0.2f;
    [Tooltip("Radius的最大值，預設為0.5")]
    [SerializeField] private float radiusMax = 0.5f;
    [Space]

    [Header("MIDI Source / MIDI輸入設定")]
    [Tooltip("調動指定滑軌(Slider)以同時線性調整Rate以及Radius")]
    [SerializeField] InputAction I_Slider_VFXCtrl = null;
    [Tooltip("MIDI輸入會有非整數的情形，調整此閥值可以強制在MIDI輸入為此閥值以下時將MIDI輸入視為0\n " +
        "Ex: 期望在滑動到最底時數值為0，實際監測卻為0.00675等非整數\n" +
        "預設值: 0")]
    [SerializeField] float Slider_VFXCtrl_MinThreshold = 0f;
    [Tooltip("MIDI輸入會有非整數的情形，調整此閥值可以強制在MIDI輸入為此閥值以上時將MIDI輸入視為1 \n " +
        "Ex: 期望在滑動到最頂時數值為1，實際監測卻為0.9954等非整數\n" +
        "預設值: 1")]
    [SerializeField] float Slider_VFXCtrl_MaxThreshold = 1f;
    [Space]

    [Header("Dev Options and Inspect / 開發者設定與監控")]
    [SerializeField] bool isDebug = false;
    [Tooltip("Rate的數值監控")]
    [SerializeField] float RateInspect;
    [Tooltip("Radius的數值監控")]
    [SerializeField] float RadiusInspect;
    [Tooltip("MIDI的輸入監控，未調整之原生輸入值")]
    [SerializeField] float Midi_Slider_Input_Inspect;
    [Tooltip("MIDI的輸入監控，經最大最小閥值鎖定調整之值")]
    [SerializeField] float Midi_Slider_Fixed;
    string debugFileInfo = "<color=#ff9700>[C# MIDI_Control_VFXRate]</color>";


    private void OnEnable()
    {
        I_Slider_VFXCtrl.performed += On_MIDI_Started;
        I_Slider_VFXCtrl.Enable();
    }

    private void OnDisable()
    {
        I_Slider_VFXCtrl.performed -= On_MIDI_Started;
        I_Slider_VFXCtrl.Disable();
    }
    // Start is called before the first frame update
    void Start()
    {
        if (isDebug)
        {
            Debug.Log(debugFileInfo + " at " + gameObject.name + "\nScript started.");
        }
    }

    private void Update()
    {
        RateInspect = vfxSource.GetFloat(vfxRateParamName);
        RadiusInspect = vfxSource.GetFloat(vfxRadiusParamName);
    }

    /// <summary>
    /// 當MIDI輸入持續時觸發，這裡用於調整VFX的Rate和Radius參數。
    /// </summary>
    /// <param name="ctx"></param>
    void On_MIDI_Started(InputAction.CallbackContext ctx)
    {
        // 若為控制VFX的滑軌輸入，則調整VFX的Rate和Radius參數
        if (ctx.action == I_Slider_VFXCtrl)
        {
            Midi_Slider_Input_Inspect = ctx.ReadValue<float>();

            // MIDI值會有不達標的情形，此部分將MIDI輸入值經閥值判斷後鎖定在0或1
            if (Midi_Slider_Input_Inspect <= Slider_VFXCtrl_MinThreshold)
                Midi_Slider_Fixed = 0f;
            else if (Midi_Slider_Input_Inspect > Slider_VFXCtrl_MinThreshold && Midi_Slider_Input_Inspect < Slider_VFXCtrl_MaxThreshold)
                Midi_Slider_Fixed = Midi_Slider_Input_Inspect;
            else if (Midi_Slider_Input_Inspect >= Slider_VFXCtrl_MaxThreshold)
                Midi_Slider_Fixed = 1f;

            //將 MIDI 輸入值從 0 到 1 的範圍映射到 Rate 和 Radius 的範圍
            var rate_mapped = Remapping(Midi_Slider_Fixed, 0f, 1f, rateMin, rateMax);
            var radius_mapped = Remapping(Midi_Slider_Fixed, 0f, 1f, radiusMin, radiusMax);

            // 設置 VFX 的 Rate 和 Radius 參數
            vfxSource.SetFloat(vfxRateParamName, rate_mapped);
            vfxSource.SetFloat(vfxRadiusParamName, radius_mapped);

            //Dev Inspect
            if (isDebug)
            {
                Debug.Log(debugFileInfo + " Value inspecting...\n" +
                    "MIDI raw input: " + ctx.ReadValue<float>() + "\n" +
                    "Mapped Rate/Radius: " + rate_mapped + " / " + radius_mapped);
            }
        }
    }

    /// <summary>
    /// 將一個值從一個範圍映射到另一個範圍
    /// </summary>
    /// <param name="value">原生範圍的輸入值，變動值</param>
    /// <param name="from1">原生範圍的最小值，固定值</param>
    /// <param name="to1">原生範圍的最大值，固定值</param>
    /// <param name="from2">對應映射範圍的最小值，固定值</param>
    /// <param name="to2">對應映射範圍的最大值，固定值</param>
    /// <returns>返回映射計算結果</returns>
    public float Remapping(float value, float from1, float to1, float from2, float to2)
    {
        return (value - from1) / (to1 - from1) * (to2 - from2) + from2;
    }
}
