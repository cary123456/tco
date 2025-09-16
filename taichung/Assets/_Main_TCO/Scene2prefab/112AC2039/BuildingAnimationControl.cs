using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.InputSystem.Utilities;

/// <summary>
/// 這個腳本用於控制建築物的動畫效果。主要是蘇柏文112AC2039的五個資料夾下的建築物的動畫控制。
/// 
/// 9/16 新增功能：抓取Material的HDR顏色，並可由此腳本控制其Intensity數值
/// Coded by: 魏直彦 Issac / @misosir00177, 2025/9/11
/// </summary>
public class BuildingAnimationControl : MonoBehaviour
{
    [Header("Color Setting / 顏色調整")]
    [Tooltip("目標顏色，用於調Intensity來達到建築物發光程度的控制")]
    [ColorUsage(true,true)] public Color[] randomIntensity;
    int randomResult;
    
    private Color currentColor;
    [Header("Ref / 來源")]
    [Tooltip("動畫控制器的來源，會在物件啟用(Enable)的時候自動抓取")]
    [SerializeField] Animator BuildingAnimator = null;
    [Tooltip("")]
    [SerializeField] Material targetMaterial = null;
    //[Header("Script Config / 腳本設定")]
    //[Tooltip("實時更新顏色資料(在Update內及時更新指定顏色)")]
    //[SerializeField] bool colorRealtimeUpdate = true;

    [Header("Debug / 除錯監控用")]
    [Tooltip("顯示目前的腳本控制的進度")]
    [SerializeField] string stateInfo = "none";

    private void OnEnable()
    {
        BuildingAnimator = GetComponent<Animator>();
        if (BuildingAnimator != null)
            stateInfo = "Animator已指定 " + BuildingAnimator.name;
        else
            stateInfo = "Animator沒有被指定";

        targetMaterial = GetComponent<Renderer>().material;
        randomResult = Random.Range(0, randomIntensity.Length);
        targetMaterial.color = randomIntensity[randomResult];
    }

    private void Update()
    {
        
    }

    /// <summary>
    /// 公開函式，用於觸發建築物的動畫效果。
    /// 預設呼叫方法是由hotkey.cs裡偵測按鍵觸發後呼叫此函式
    /// </summary>
    public void PlayBuildingAnimation()
    {
        if (BuildingAnimator != null)
        {
            BuildingAnimator.SetBool("isTrigger",true);
            //BuildingAnimator.SetBool("istrigger", true);
            stateInfo = "動畫觸發";
        }
        else
        {
            Debug.LogWarning("BuildingAnimator沒有被指定");
        }
    }
}