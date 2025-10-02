using Klak.Osc;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

/// <summary>
/// 此腳本用於手動控制毫米波相關功能
/// </summary>
public class mmWaveManual : MonoBehaviour
{
    [Header("Info / 說明")]
    [TextArea(1, 2)] public string info = "此腳本用於手動控制毫米波相關功能。主要由滑鼠控制毫米波泡泡以及旋鈕控制膨脹";
    [Space]
    [Space]

    [Header("General / 一般設定")]
    [Tooltip("用於切換鼠標鎖定狀態的輸入動作")]
    [SerializeField] InputAction I_LockMouse;
    [Tooltip("用於記錄目前鼠標是否被鎖定，可手動開啟")]
    [SerializeField] public bool isMouseLock = false;
    [SerializeField] InputAction I_manualImpact;
    [SerializeField] public bool manualControlImpact = false;
    [Space]
    [Tooltip("預設用途：以MIDI的旋鈕控制泡泡的膨脹尖刺")]
    [SerializeField] InputAction I_ImpactPitch;
    [Tooltip("膨脹大小，僅供監控")]
    [Range(0, 8)] public float impactPitch = 0f;
    [Tooltip("MIDI輸入會有非整數的情形，調整此閥值可以強制在MIDI輸入為此閥值以下時將MIDI輸入視為0\n " +
        "Ex: 期望在滑動到最底時數值為0，實際監測卻為0.00675等非整數\n" +
        "預設值: 0")]
    [SerializeField] float pitch_NoiseScale_MinThreshold = 0f;
    [Tooltip("MIDI輸入會有非整數的情形，調整此閥值可以強制在MIDI輸入為此閥值以上時將MIDI輸入視為1 \n " +
        "Ex: 期望在滑動到最頂時數值為1，實際監測卻為0.9954等非整數\n" +
        "預設值: 1")]
    [SerializeField] float pitch_NoiseScale_MaxThreshold = 1f;
    [Space]
    [Space]

    [Header("Configuration / 細部設定")]
    [Tooltip("是否需要讓泡泡延遲跟蹤滑鼠")]
    [SerializeField] bool doLerp = true;
    [SerializeField] float lerpSpeed = 5f;
    [Space]
    [SerializeField] public bool doMouseScrollAffectImpact = true;
    [Tooltip("膨脹的手動控制預設為MIDI旋鈕，以防旋鈕無法使用，若以滑鼠滾輪調整，此選項不勾可使滑鼠滾輪之速度影響膨脹大小")]
    [SerializeField] bool doAbsoluteImpactPitch = true;
    [Tooltip("針對絕對控制的滑鼠滾輪解析度，影響膨脹大小的變化速度")]
    [SerializeField] float scrollResolution_ABS = 0.1f;
    [Space]
    [Tooltip("針對相對控制的滑鼠滾輪解析度，影響膨脹大小的變化速度")]
    [SerializeField] float scrollResolution_DMP = 4f;
    [Tooltip("針對相對控制的滑鼠滾輪進行阻尼，使膨脹大小變化更平滑")]
    [SerializeField] float scrollDamping = 5f;

    [Space]
    [Space]
    [Header("Reference / 來源")]
    [Tooltip("欲控制之泡泡物件")]
    [SerializeField] GameObject mmWaveBubble;
    [TextArea(1, 2)] public string mmWaveBubbleInfo = "inside為泡泡的膨脹效果之主體，其中mmWaveInside_Auto由OscInput.cs自動控制並且會自動生成Instance，為防止衝突，手動將切換為另一個Inside操控";
    [SerializeField] GameObject mmWaveInside_Auto;
    [SerializeField] GameObject mmWaveInside_Manual;
    [SerializeField] Material mmWaveInside_Manual_Material;
    [Space]
    [Tooltip("毫米波控制泡泡的腳本，若此腳本(mmWaveManual.cs)開啟手動控制模式則會關閉部分UDPBroadcastReceiver.cs內的功能")]
    [SerializeField] UDPBroadcastReceiver UDPBroadcastReceiver_CS;
    [Space]
    [Space]

    [Header("Debug / 除錯用")]
     public Vector3 rawMousePos;
    [SerializeField] Vector3 worldPos;
     public Vector3 targetPos;
     public Vector3 currentPos;
    [Space]
     public Vector2 scrollData; // 滑鼠滾輪數據
     public float proceedScrollData;
    float dampedScrollData;
     public float _scrollAmount = 0f;
    [Space]
    [Tooltip("MIDI的輸入監控，未調整之原生輸入值")]
     public float Midi_Slider_Input_Inspect;
    [Tooltip("MIDI的輸入監控，經最大最小閥值鎖定調整之值")]
     public float midi_Pitch_Fixed;

    private int i = 0;// 用於切換鼠標鎖定狀態的計數器

    private void OnEnable()
    {
        I_LockMouse.Enable();
        I_ImpactPitch.Enable();
        I_manualImpact.Enable();
        I_ImpactPitch.performed += OnInputPerformed;
        I_LockMouse.started += OnInputStarted;
        I_manualImpact.started += OnInputStarted;
    }

    private void OnDisable()
    {
        I_LockMouse.Disable();
        I_ImpactPitch.Disable();
        I_manualImpact.Disable();
        I_ImpactPitch.performed -= OnInputPerformed;
        I_LockMouse.started -= OnInputStarted;
        I_manualImpact.started -= OnInputStarted;
    }

    void Update()
    {

        if (!isMouseLock)
        {
            Cursor.lockState = CursorLockMode.None;
            
            mmWaveInside_Auto.GetComponent<MeshRenderer>().enabled = true;
            mmWaveInside_Manual.SetActive(false);
        }
        else if (isMouseLock)
        {
            Cursor.visible = false;
            Cursor.lockState = CursorLockMode.Confined;
            mmWaveInside_Auto.GetComponent<MeshRenderer>().enabled = false;
            if (manualControlImpact)
            {
                mmWaveInside_Manual.SetActive(true);
                UDPBroadcastReceiver_CS.externalControl = true;
            }
            else if (!manualControlImpact)
            {
                mmWaveInside_Auto.GetComponent<MeshRenderer>().enabled = true;
                mmWaveInside_Manual.SetActive(false);
            }

                // 取得滑鼠位置
                rawMousePos = Input.mousePosition;
            // 將滑鼠位置轉換為世界座標
            worldPos = Camera.main.ScreenToWorldPoint(new Vector3(rawMousePos.x, rawMousePos.y, 10));
            // 設定目標位置
            targetPos = new Vector2(worldPos.x, worldPos.z);
            if (doLerp)
            {
                currentPos = Vector2.Lerp(currentPos, targetPos, Time.deltaTime * lerpSpeed);
            }
            else
            {
                currentPos = targetPos;
            }
            // 移動泡泡到目標位置
            mmWaveBubble.transform.position = new Vector3(currentPos.x, 0f, currentPos.y);

            if (doMouseScrollAffectImpact)
            {
                scrollData = Input.mouseScrollDelta;
                if (doAbsoluteImpactPitch)
                {
                    _scrollAmount += scrollData.y * scrollResolution_ABS;
                    _scrollAmount = Mathf.Clamp(_scrollAmount, 0f, 8f);
                    impactPitch = _scrollAmount;
                    mmWaveInside_Manual_Material.SetFloat("_NoiseScale", _scrollAmount);
                }
                else if (!doAbsoluteImpactPitch)
                {
                    proceedScrollData = Mathf.Abs(scrollData.y) * scrollResolution_DMP;
                    proceedScrollData = Mathf.Clamp(proceedScrollData, -8f, 8f);
                    dampedScrollData = Mathf.Lerp(dampedScrollData, proceedScrollData, Time.deltaTime * scrollDamping);
                    impactPitch = dampedScrollData;
                    mmWaveInside_Manual_Material.SetFloat("_NoiseScale", dampedScrollData);
                }
            }
        }
    }

    void OnInputStarted(InputAction.CallbackContext ctx)
    {
        if (ctx.action == I_LockMouse)
        {
            isMouseLock = !isMouseLock;
        }

        if (ctx.action == I_manualImpact)
        {
            manualControlImpact = !manualControlImpact;
        }
    }

    void OnInputPerformed(InputAction.CallbackContext ctx)
    {
        if (manualControlImpact)
        {
            if (ctx.action == I_ImpactPitch)
            {
                Midi_Slider_Input_Inspect = ctx.ReadValue<float>();

                // MIDI值會有不達標的情形，此部分將MIDI輸入值經閥值判斷後鎖定在0或1
                if (Midi_Slider_Input_Inspect <= pitch_NoiseScale_MinThreshold)
                    midi_Pitch_Fixed = 0f;
                else if (Midi_Slider_Input_Inspect > pitch_NoiseScale_MinThreshold && Midi_Slider_Input_Inspect < pitch_NoiseScale_MaxThreshold)
                    midi_Pitch_Fixed = Midi_Slider_Input_Inspect;
                else if (Midi_Slider_Input_Inspect >= pitch_NoiseScale_MaxThreshold)
                    midi_Pitch_Fixed = 1f;

                var pitch_mapped = Remapping(midi_Pitch_Fixed, 0f, 1f, 0f, 8f);

                impactPitch = pitch_mapped;

                mmWaveInside_Manual_Material.SetFloat("_NoiseScale", impactPitch);
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
