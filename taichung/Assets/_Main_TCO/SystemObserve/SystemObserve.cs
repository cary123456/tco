using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SystemObserve : MonoBehaviour
{
    [Header("Operation Output / 運行資訊輸出")]
    [SerializeField] OperationInfo_SO OperationInfo;
    
    [Header("Reference / 來源")]
    [SerializeField] UDPBroadcastReceiver UDPBroadcastReceiver_CS;
    private string old_mmWaveInfo = "";

    private void OnEnable()
    {
        OperationInfo.inOperation = true;

        OperationInfo.currentScene = UnityEngine.SceneManagement.SceneManager.GetActiveScene().name;
        operationalInformationPrintFormat("場景", "進入", OperationInfo.currentScene);

        UDPBroadcastReceiver_CS = FindObjectOfType<UDPBroadcastReceiver>();
        if (UDPBroadcastReceiver_CS)
        {
            operationalInformationPrintFormat("毫米波", "C#", "UDPBroadcastReceiver.cs腳本已抓取");
            OperationInfo.mmWaveScriptActive = true;
            OperationInfo.mmWaveDebugSuggest = "";
            OperationInfo.mmWaveSettedPorts = UDPBroadcastReceiver_CS.udpPort.ToString();
        }   
        else if (!UDPBroadcastReceiver_CS)
        {
            OperationInfo.mmWaveScriptActive = false;
            OperationInfo.mmWaveDebugSuggest = "無法抓取UDPBroadcastReceiver.cs腳本，請確認場景中有此腳本存在";
            OperationInfo.mmWaveSettedPorts = "";
            operationalInformationPrintFormat("毫米波", "C#", "無法抓取UDPBroadcastReceiver.cs腳本，請確認場景中有此腳本存在");
        }
    }

    private void Update()
    {
        if (UDPBroadcastReceiver_CS)
        {
            if (old_mmWaveInfo != UDPBroadcastReceiver_CS.mmWaveInfo)
            {
                old_mmWaveInfo = UDPBroadcastReceiver_CS.mmWaveInfo;
                if (UDPBroadcastReceiver_CS.mmWaveConnected)
                    operationalInformationPrintFormat("毫米波", "資料", UDPBroadcastReceiver_CS.mmWaveInfo);
                else
                {
                    operationalInformationPrintFormat("毫米波", "錯誤", UDPBroadcastReceiver_CS.mmWaveInfo);
                    OperationInfo.mmWaveDebugSuggest = UDPBroadcastReceiver_CS.mmWaveInfo;
                }
            }
        }
    }

    private void OnDisable()
    { 
        operationalInformationPrintFormat("場景", "離開", OperationInfo.currentScene);
        OperationInfo.currentScene = string.Empty;
        OperationInfo.inOperation = false;
        OperationInfo.mmWaveInfo = string.Empty;
        OperationInfo.mmWaveScriptActive = false;
        OperationInfo.mmWaveSettedPorts = string.Empty;
        OperationInfo.mmWaveDebugSuggest = string.Empty;
        OperationInfo.operationInformation = string.Empty;
        OperationInfo.ObjectsControlInfo = string.Empty;
        OperationInfo.EnablingBuildingInstantiate = false;
        OperationInfo.EnablingCrabInstantiate = false;
        OperationInfo.EnablingFishmanInstantiate = false;
    }

    void operationalInformationPrintFormat(string infoType, string infoStatus, string description)
    {
        if (OperationInfo.operationInformation == "")
            OperationInfo.operationInformation = DateTime.Now.ToString("HH:mm:ss.fff") + " [" + infoType + "]" + infoStatus + " " + description;
        else
            OperationInfo.operationInformation = "→ " + DateTime.Now.ToString("HH:mm:ss.fff") + " [" + infoType + "]" + infoStatus + " " + description + "\n" + OperationInfo.operationInformation;

    }
}
