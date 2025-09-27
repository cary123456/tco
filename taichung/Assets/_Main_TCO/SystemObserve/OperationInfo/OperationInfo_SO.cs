using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(menuName ="OperationInfo")]
public class OperationInfo_SO : ScriptableObject
{
    [Header("Total Operation Info / 整體運行")]
    [Tooltip("系統運行，若運行中未被勾取則可能為SystemObserve.cs沒有被放置在場景上")]
    [ReadOnly][SerializeField] public bool inOperation = false;
    [Tooltip("對於目前場景進行提示，按鍵操作以及下一步可以如何操作等")]
    [ReadOnly][TextArea(1,3)] public string TotalSuggest = "";
    [ReadOnly][SerializeField] public string currentScene = "";
    [TextArea(1, 3)] public string operationInformation = "";

    [Header("mmWave / 毫米波運行")]
    [Tooltip("毫米波連線的腳本是否存在並且成功抓取")]
    [ReadOnly][SerializeField] public bool mmWaveScriptActive = false;
    [ReadOnly][SerializeField] public bool mmWaveMouseControl = false;
    [ReadOnly][SerializeField] public string mmWaveSettedPorts = "";
    [ReadOnly][SerializeField] public string mmWaveInfo = "";
    [TextArea(1,3)] public string mmWaveDebugSuggest = "";

    [Header("MIDI Communicate / MIDI傳輸運行")]
    [SerializeField] public string MIDIDebugSuggest = "";

    [Header("MIDI Device / MIDI控制裝置運行狀況")]
    [SerializeField] public string MIDIDeviceDebugSuggest = "";

    [Header("Objects Supervice / 物件控制狀況")]
    [Tooltip("物件控制的狀況，包含現在是否有腳本可控制物件開關")]
    [SerializeField] public string ObjectsControlInfo = "";
    [Tooltip("是否允許建築物生成")]
    [SerializeField] public bool EnablingBuildingInstantiate;
    [Tooltip("是否允許螃蟹生成")]
    [SerializeField] public bool EnablingCrabInstantiate;
    [Tooltip("是否允許漁人生成")]
    [SerializeField] public bool EnablingFishmanInstantiate;
}
