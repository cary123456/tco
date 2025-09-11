using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.InputSystem;

/// <summary>
/// 這個腳本用於控制建築物的動畫效果。主要是蘇柏文112AC2039的五個資料夾下的建築物的動畫控制。
/// Coded by: 魏直彦 Issac / @misosir00177, 2025/9/11
/// </summary>
public class BuildingAnimationControl : MonoBehaviour
{
    [Header("Ref / 來源")]
    [Tooltip("動畫控制器的來源，會在物件啟用(Enable)的時候自動抓取")]
    [SerializeField] Animator BuildingAnimator = null;

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
            BuildingAnimator.SetBool("istrigger", true);
            stateInfo = "動畫觸發";
        }
        else
        {
            Debug.LogWarning("BuildingAnimator沒有被指定");
        }
    }
}
