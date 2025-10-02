using System;
using System.Collections;
using System.Collections.Generic;
using UnityEditor;
using UnityEngine;
using UnityEngine.SceneManagement;
using Minis;
using UnityEngine.InputSystem;

public class SystemObserve : MonoBehaviour
{
    [Header("Operation Output / 運行資訊輸出")]
    [SerializeField] OperationInfo_SO OperationInfo;

    [Header("Configuration / 設定")]
    [Tooltip("毫米波的資料更新週期，預設10秒")]
    [SerializeField] float mmWaveUpdateInterval = 10f;
    float mmWaveUpdateTimer = 0f;
#if UNITY_EDITOR
    [Header("Reference / 來源")]
    [SerializeField] public SceneAsset Chapter2;
    [SerializeField] public SceneAsset Chapter4;
#endif

    [Header("Auto Ref / 自動來源安裝")]
    [SerializeField] UDPBroadcastReceiver UDPBroadcastReceiver_CS;
    [SerializeField] mmWaveManual mmWaveManual_CS;
    [SerializeField] hotkey hotkey_CS;
    private string old_mmWaveInfo = "";

    private void OnEnable()
    {
        OperationInfo.inOperation = true;
#if UNITY_EDITOR
        OperationInfo.currentScene = UnityEngine.SceneManagement.SceneManager.GetActiveScene().name;
        operationalInformationPrintFormat("場景", "進入", OperationInfo.currentScene);
#endif

        UDPBroadcastReceiver_CS = FindObjectOfType<UDPBroadcastReceiver>();
        mmWaveManual_CS = FindObjectOfType<mmWaveManual>();
        hotkey_CS = FindObjectOfType<hotkey>();

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
        if (mmWaveManual_CS)
        {
            OperationInfo.mmWaveInfo = "可手動控制毫米波";

            operationalInformationPrintFormat("毫米波手動控制", "C#", "mmWaveManual.cs腳本已抓取");
        }
        else if (!mmWaveManual_CS)
        {
            OperationInfo.mmWaveDebugSuggest += "\n無法抓取mmWaveManual.cs腳本，請確認場景中有此腳本存在";
            OperationInfo.mmWaveInfo = "無法支援手動控制毫米波";
            operationalInformationPrintFormat("毫米波手動控制", "C#", "無法抓取mmWaveManual.cs腳本，請確認場景中有此腳本存在");
        }
        if (hotkey_CS)
        {
#if UNITY_EDITOR
            if (OperationInfo.currentScene == Chapter4.name)
            {
                operationalInformationPrintFormat("物件生成控制", "場景非必要", "目前位於的場景不需要用到生成管控功能");
            }
#endif
            operationalInformationPrintFormat("物件生成控制", "C#", "hotkey.cs腳本已抓取");

        }
        else if (!hotkey_CS)
        {
            operationalInformationPrintFormat("物件生成控制", "C#", "無法抓取hotkey.cs腳本，請確認場景中有此腳本存在");
            OperationInfo.ObjectsControlInfo = "hotkey.cs不存在，無法控制物件生成允許";
        }

    }

    private void Update()
    {
        mmWaveProcedure();
#if UNITY_EDITOR
        ObjectSuperviceProcedeure();
#endif
    }

    private void OnDisable()
    {
#if UNITY_EDITOR
        operationalInformationPrintFormat("場景", "離開", OperationInfo.currentScene);
#endif
        OperationInfo.currentScene = string.Empty;
        OperationInfo.inOperation = false;
        OperationInfo.mmWaveInfo = string.Empty;
        OperationInfo.mmWaveScriptActive = false;
        OperationInfo.mmWaveSettedPorts = string.Empty;
        OperationInfo.mmWaveDebugSuggest = string.Empty;
        OperationInfo.ObjectsControlInfo = string.Empty;
        OperationInfo.EnablingBuildingInstantiate = false;
        OperationInfo.EnablingCrabInstantiate = false;
        OperationInfo.EnablingFishmanInstantiate = false;
    }

    void mmWaveProcedure()
    {
        //先判定是否是手動控制中
        if (mmWaveManual_CS)
        {
            if (mmWaveManual_CS.isMouseLock)
            {
                OperationInfo.mmWaveInfo = "毫米波手動控制中，滑鼠位置：" + mmWaveManual_CS.currentPos.ToString("F2") + " 手控膨脹：" + mmWaveManual_CS.manualControlImpact + " 滑鼠控制膨脹：" + mmWaveManual_CS.doMouseScrollAffectImpact + " 膨脹數值：" + mmWaveManual_CS.impactPitch.ToString();
            }
            if (!mmWaveManual_CS.isMouseLock)
            {
                OperationInfo.mmWaveInfo = "已關閉毫米波手動控制";
            }
        }
        if (UDPBroadcastReceiver_CS)
        {
            mmWaveUpdateTimer += Time.deltaTime;
            if (mmWaveUpdateTimer >= mmWaveUpdateInterval)
            {
                mmWaveUpdateTimer = 0f;
                old_mmWaveInfo = UDPBroadcastReceiver_CS.mmWaveInfo;
                if (UDPBroadcastReceiver_CS.mmWaveConnected)
                {
                    operationalInformationPrintFormat("毫米波", "定期更新", UDPBroadcastReceiver_CS.mmWaveInfo, UDPBroadcastReceiver_CS.name);
                    OperationInfo.mmWaveInfo = OperationInfo.mmWaveInfo + "\n" + UDPBroadcastReceiver_CS.mmWaveInfo;
                }
                else if (UDPBroadcastReceiver_CS.mmWaveInfo == "")
                {
                    operationalInformationPrintFormat("毫米波", "錯誤", "UDPBroadcastReciever.cs腳本錯誤偵測異常，可能是：\n毫米波尚未連接");
                    OperationInfo.mmWaveDebugSuggest = "UDPBroadcastReciever.cs腳本錯誤偵測異常，可能是：\n毫米波尚未連接";
                    OperationInfo.mmWaveInfo = "請檢察連線和Port";
                }
                else
                {
                    operationalInformationPrintFormat("毫米波", "錯誤", UDPBroadcastReceiver_CS.mmWaveInfo, UDPBroadcastReceiver_CS.name);
                    OperationInfo.mmWaveDebugSuggest = UDPBroadcastReceiver_CS.mmWaveInfo;
                    OperationInfo.mmWaveInfo = "請檢察連線和Port";

                }

            }
            if (old_mmWaveInfo != UDPBroadcastReceiver_CS.mmWaveInfo)
            {
                old_mmWaveInfo = UDPBroadcastReceiver_CS.mmWaveInfo;
                if (UDPBroadcastReceiver_CS.mmWaveConnected)
                {
                    OperationInfo.mmWaveInfo = OperationInfo.mmWaveInfo + "\n" + UDPBroadcastReceiver_CS.mmWaveInfo;
                    operationalInformationPrintFormat("毫米波", "資料", UDPBroadcastReceiver_CS.mmWaveInfo, UDPBroadcastReceiver_CS.name);
                }
                else
                {
                    operationalInformationPrintFormat("毫米波", "錯誤", UDPBroadcastReceiver_CS.mmWaveInfo, UDPBroadcastReceiver_CS.name);
                    OperationInfo.mmWaveDebugSuggest = OperationInfo.mmWaveInfo + "\n" + UDPBroadcastReceiver_CS.mmWaveInfo;
                    OperationInfo.mmWaveInfo = "請檢察連線和Port";
                }
            }
        }
#if UNITY_EDITOR
        else if (!UDPBroadcastReceiver_CS && (OperationInfo.currentScene == Chapter4.name))
        {
            OperationInfo.mmWaveScriptActive = false;
            OperationInfo.mmWaveDebugSuggest = "無法抓取UDPBroadcastReceiver.cs腳本，請確認場景中有此腳本存在";
            OperationInfo.mmWaveSettedPorts = "";
            operationalInformationPrintFormat("毫米波", "C#", "無法抓取UDPBroadcastReceiver.cs腳本，請確認場景中有此腳本存在");
        }
#endif
    }

    void ObjectSuperviceProcedeure()
    {
        if (hotkey_CS)
        {
            OperationInfo.ObjectsControlInfo = "生成管控中，建築物生成：" + (hotkey_CS.EnablingBuildingInstantiate ? hotkey_CS.BuildingCount : "X") + "，螃蟹生成：" + (hotkey_CS.EnablingCrabInstantiate ? hotkey_CS.CrabCount : "X") + "，漁人生成：" + (hotkey_CS.EnablingFishmanInstantiate ? hotkey_CS.FishmanCount : "X");
            OperationInfo.EnablingBuildingInstantiate = hotkey_CS.EnablingBuildingInstantiate;
            OperationInfo.EnablingCrabInstantiate = hotkey_CS.EnablingCrabInstantiate;
            OperationInfo.EnablingFishmanInstantiate = hotkey_CS.EnablingFishmanInstantiate;

        }
    }


    void operationalInformationPrintFormat(string infoType, string infoStatus, string description, string fileLocation = "")
    {
        if (OperationInfo.operationInformation == "")
        {
            OperationInfo.operationInformation = DateTime.Now.ToString("HH:mm:ss.fff") + " [" + infoType + "]" + infoStatus + " " + description;
            if (fileLocation != "")
                OperationInfo.operationInformation += "(@" + fileLocation + ")";
        }
        else
        {
            if (fileLocation != "")
                OperationInfo.operationInformation = "→ " + DateTime.Now.ToString("HH:mm:ss.fff") + " [" + infoType + "]" + infoStatus + " " + description + "(@" + fileLocation + ")" + "\n" + OperationInfo.operationInformation;

            else if (fileLocation == "")
                OperationInfo.operationInformation = "→ " + DateTime.Now.ToString("HH:mm:ss.fff") + " [" + infoType + "]" + infoStatus + " " + description + "\n" + OperationInfo.operationInformation;
        }

    }
}
