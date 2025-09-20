using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using Unity.Mathematics;
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;
public class hotkey : MonoBehaviour
{
    [Header("Uncategorized / 尚未分類")]
    public GameObject crab;
    public KeyCode crabkey;
    public GameObject crabposition;
    public GameObject crabmanager;
    public GameObject[] crabs;
    public GameObject[] crabb;
    public dynamicGeneration SummonCrabs;
    public bool crabfollow;
    public bool onetime;
    public int crabcount;
    public GameObject headset;
    public GameObject raycast;
    public GameObject VRcam;
    public GameObject maincamera;
    public GameObject[] fadeui;
    private int lookcount;
    public GameObject Rvfx;
    public GameObject Lvfx;
    public GameObject RLine;
    public GameObject LLine;
    public int vfxcount;
    public GameObject mainncamera;
    public GameObject[] player;
    public GameObject fish;
    public GameObject fish2;
    public GameObject fish3;
    public GameObject fishflok;
    public GameObject fishflok2;
    public GameObject fishflok3;
    public GameObject fishflok4;
    public int fishcount;
    public bool fishbool;
    public GameObject staw;
    public GameObject staw_2;
    public GameObject back;
    public GameObject bubblebackup;
    public int bubblecount;
    public GameObject bubble;
    public int lookatcount;
    bool stawflag = false;
    bool stawflag_2 = false;
    public GameObject center;
    public bool growbool;
    public float growruntime;
    public float growtime;
    public GameObject target;
    public GameObject Sea;
    public Material SkyBox;
    public float SeaUpSpeed;
    public KeyCode SeaUpKey;
    public KeyCode SeaDownKey;
    public float smooth;
    public float SkyBoxSmooth;
    public GameObject lightObject;
    Vector3 vec;

    [Space]
    [Header("New Input System Supported / 新輸入系統支援" +
        "\n命名方式：I_表示此變數儲存輸入" +
        "\n大寫開頭是魏後來定義的名稱")]
    public InputAction I_crab;
    public InputAction I_DelCrab;
    public InputAction I_staw;
    public InputAction I_staw_2;
    public InputAction I_bubble;
    public InputAction I_FadeUI_In;
    public InputAction I_FadeUI_Out;
    public InputAction I_vfx;
    public InputAction I_grow;
    public InputAction I_around;
    public InputAction I_fish;
    public InputAction I_Reset;
    public InputAction I_LoadCh4;
    [Tooltip("控制海平面上下的滑桿")]
    public InputAction I_SeaSlider;
    [Tooltip("開啟滑桿控制海平面絕對位置\n" +
        "ex. 若滑桿最低=海平面設定最低值; 滑桿中間=海平面中間")]
    public bool SliderAbsolutePosition = false; // 是否使用絕對位置控制海平面
    [Tooltip("海平面最低位置，海平面在畫面中間的參考值:2")]
    public float SeaMinY = 0f;
    [Tooltip("海平面最高位置，海平面在畫面外的參考值:20")]
    public float SeaMaxY = 10f;     // 海面の最上位置
    [Tooltip("海平面緩速")]
    public float SeaLerpSpeed = 2f;
    [Tooltip("監控用，顯示海平面要移動到的目標Y軸")]
    [SerializeField] float targetSeaY = 0f;  // 目標Y座標
    [Tooltip("監控用，顯示目前海平面的Y軸座標，可用於微調海平面最大小值")]
    [SerializeField] float currentSeaY = 0f; // 當前Y座標
    [SerializeField] float skyboxMultiplier = 0.4f; // SkyBoxのBlendPower乘數
    float SeaSliderReading;
    [Space]
    public InputAction I_SeaUp;
    //.isPressed
    public InputAction I_SeaDown;
    int SeaIsPressed = 0; // 0 = 未按下, 1 = 往上, -1 = 往下
    [Space]
    [Tooltip("針對9/11新增的建築物的動畫進行觸發" +
        "\n按下該按鍵後將對所有有掛BuildingAnimationControl.cs場景上的建築物播放動畫")]
    [SerializeField] InputAction I_NewBuildingGrow;
    [SerializeField] BuildingAnimationControl[] buildingAnimationControls;
    [Tooltip("清除建築物，預設為Del")]
    [SerializeField] InputAction I_ClearBuilding;
    [Tooltip("建築物生成之腳本，刪除場上建築物時使用")]
    [SerializeField] HouseArray houseArray;
    public InputAction I_Light;

    private void OnEnable()
    {
        I_crab.Enable();
        I_DelCrab.Enable();
        I_staw.Enable();
        I_staw_2.Enable();
        I_bubble.Enable();
        I_FadeUI_In.Enable();
        I_FadeUI_Out.Enable();
        I_vfx.Enable();
        I_grow.Enable();
        I_around.Enable();
        I_fish.Enable();
        I_Reset.Enable();
        I_LoadCh4.Enable();
        I_SeaUp.Enable();
        I_SeaDown.Enable();
        I_SeaSlider.Enable();
        I_NewBuildingGrow.Enable();
        I_ClearBuilding.Enable();
        I_Light.Enable();
        I_crab.performed += OnCrabPressed;
        I_crab.canceled += OnCrabReleased;
        I_DelCrab.performed += OnDelCrabPressed;
        I_staw.performed += OnStawPressed;
        I_staw_2.performed += OnStaw2Pressed;
        I_bubble.performed += OnBubblePressed;
        I_FadeUI_In.performed += OnFadeUIInPressed;
        I_FadeUI_Out.performed += OnFadeUIOutPressed;
        I_vfx.performed += OnVfxPressed;
        I_grow.performed += OnGrowPressed;
        I_around.performed += OnAroundPressed;
        I_around.canceled += OnAroundReleased;
        I_fish.performed += OnFishPressed;
        I_Reset.performed += OnResetPressed;
        I_LoadCh4.performed += OnLoadCh4Pressed;
        I_SeaUp.performed += OnSeaPressed;
        I_SeaDown.performed += OnSeaPressed;
        I_SeaUp.canceled += OnSeaReleased;
        I_SeaDown.canceled += OnSeaReleased;
        I_SeaSlider.performed += OnSeaPressed;
        I_NewBuildingGrow.performed += OnInputStarted;
        I_ClearBuilding.performed += OnInputStarted;
        I_Light.performed += OnLightPressed;
    }

    private void OnDisable()
    {
        I_crab.Disable();
        I_DelCrab.Disable();
        I_staw.Disable();
        I_staw_2.Disable();
        I_bubble.Disable();
        I_FadeUI_In.Disable();
        I_FadeUI_Out.Disable();
        I_vfx.Disable();
        I_grow.Disable();
        I_around.Disable();
        I_fish.Disable();
        I_Reset.Disable();
        I_LoadCh4.Disable();
        I_SeaUp.Disable();
        I_SeaDown.Disable();
        I_SeaSlider.Disable();
        I_NewBuildingGrow.Disable();
        I_ClearBuilding.Disable();
        I_crab.performed -= OnCrabPressed;
        I_crab.canceled -= OnCrabReleased;
        I_DelCrab.performed -= OnDelCrabPressed;
        I_staw.performed -= OnStawPressed;
        I_staw_2.performed -= OnStaw2Pressed;
        I_bubble.performed -= OnBubblePressed;
        I_FadeUI_In.performed -= OnFadeUIInPressed;
        I_FadeUI_Out.performed -= OnFadeUIOutPressed;
        I_vfx.performed -= OnVfxPressed;
        I_grow.performed -= OnGrowPressed;
        I_around.performed -= OnAroundPressed;
        I_around.canceled -= OnAroundReleased;
        I_fish.performed -= OnFishPressed;
        I_Reset.performed -= OnResetPressed;
        I_LoadCh4.performed -= OnLoadCh4Pressed;
        I_SeaUp.performed -= OnSeaPressed;
        I_SeaDown.performed -= OnSeaPressed;
        I_SeaUp.canceled -= OnSeaReleased;
        I_SeaDown.canceled -= OnSeaReleased;
        I_SeaSlider.performed -= OnSeaPressed;
        I_NewBuildingGrow.performed -= OnInputStarted;
        I_ClearBuilding.performed -= OnInputStarted;
    }


    // Start is called before the first frame update
    void Start()
    {
        crabcount = -1;
    }

    // Update is called once per frame
    void Update()
    {
        crabs = GameObject.FindGameObjectsWithTag("crab");
        player = GameObject.FindGameObjectsWithTag("Player");

        // crabfollow 控制已由 InputAction 處理
        if (crabfollow)
        {
            if (!onetime)
            {
                onetime = true;
                GameObject[] crabs = SummonCrabs.SummonCrab();
                crabb = crabs;
            }
        }
        else
        {
            onetime = false;
            crabfollow = false;
            SummonCrabs.crabb.Clear();
        }



        // Alpha3 控制已由 InputAction 處理

        // Alpha5, Alpha6, Alpha7 控制已由 InputAction 處理
        if (bubblecount == 1)
        {
            if (bubblebackup != null && bubble != null)
            {
                bubblebackup.GetComponent<UDPBroadcastReceiver>().enabled = false;
                Vector3 pos = Camera.main.WorldToScreenPoint(bubble.transform.position);
                //讓滑鼠的螢幕坐标的Z軸等于目前物體的螢幕坐标的Z軸，也就是相隔的距離
                Vector3 m_MousePos = new Vector3(Input.mousePosition.x, Input.mousePosition.y, pos.z);
                //将正确的滑鼠螢幕坐标換成世界坐标交給物體
                bubble.transform.position = Vector3.Lerp(bubble.transform.position, Camera.main.ScreenToWorldPoint(m_MousePos), 0.02f);

            }

        }
        if (bubblecount == 0)
        {
            if (bubblebackup != null)
            {
                bubblebackup.GetComponent<UDPBroadcastReceiver>().enabled = true;
                //首先擷取到目前物體的螢幕坐标

            }

        }


        // Space, N 控制已由 InputAction 處理


        // V 控制已由 InputAction 處理
        if (vfxcount == 0)
        {
            if (Rvfx != null)
            {
                Rvfx.GetComponent<Animator>().SetBool("off", false);
                Rvfx.GetComponent<Animator>().SetBool("on", true);

            }
            if (RLine != null)
            {
                RLine.SetActive(false);
            }
            if (LLine != null)
            {
                LLine.SetActive(false);
            }
            if (Lvfx != null)
            {
                Lvfx.GetComponent<Animator>().SetBool("off", false);
                Lvfx.GetComponent<Animator>().SetBool("on", true);

            }
        }
        if (vfxcount == 1)
        {
            if (Rvfx != null)
            {
                Rvfx.GetComponent<Animator>().SetBool("off", true);
                Rvfx.GetComponent<Animator>().SetBool("on", false);
            }

            if (Lvfx != null)
            {
                Lvfx.GetComponent<Animator>().SetBool("off", true);
                Lvfx.GetComponent<Animator>().SetBool("on", false);
            }
            if (RLine != null)
            {
                RLine.SetActive(true);
            }
            if (LLine != null)
            {
                LLine.SetActive(true);
            }

        }

        // Z 控制已由 InputAction 處理
        if (growbool)
        {
            if (growruntime >= growtime)
            {
                if (headset.GetComponent<nearest>().closestbuilding.GetComponent<growvalue>() != null && headset.GetComponent<nearest>().closestbuilding != null)
                {

                    headset.GetComponent<nearest>().closestbuilding.GetComponent<growvalue>().grow = true;
                    growruntime = 0;
                }
            }
            growruntime += Time.deltaTime;
        }
        if (headset != null)
        {
            if (headset.GetComponent<nearest>().allbuildings.Length == 0)
            {
                growbool = false;
            }
        }

        // L 控制已由 InputAction 處理
        // F 控制已由 InputAction 處理
        if (fishcount == 1)
        {
            fish.SetActive(true);
        }
        if (fishcount == 2)
        {
            fish2.SetActive(true);
        }
        if (fishcount == 3)
        {
            fish3.SetActive(true);
        }
        if (fishcount >= 4)
        {
            fish.GetComponent<Animator>().SetBool("out", true);
            fish2.GetComponent<Animator>().SetBool("out", true);
            fish3.GetComponent<Animator>().SetBool("out", true);

        }
        if (SeaIsPressed != 0)
        {
            SeaMove(SeaIsPressed);
        }

        if (SliderAbsolutePosition)
        {
            
            SeaMoveBySlider(SeaSliderReading);
        }


    }

    public void SeaMove(int Direct)
    {
        float value = SkyBox.GetFloat("_BlendPower");

        if ((vec.y * Direct) < 0)
        {
            vec = Vector3.zero;
        }

        value = Mathf.Lerp(value, Direct * 0.4f, 1 / SkyBoxSmooth);
        value = Mathf.Clamp(value, 0.06f, 1);
        SkyBox.SetFloat("_BlendPower", value);
        vec = Vector3.Lerp(vec, Vector3.up * Time.deltaTime * SeaUpSpeed * Direct, 1 / smooth);
        Sea.transform.Translate(vec);
    }
      

    public void SeaMoveBySlider(float sliderValue)
    {
        // スライダー値を海面Y座標にマッピング
        targetSeaY = Mathf.Lerp(SeaMinY, SeaMaxY, sliderValue);

        // 現在の海面位置
        Vector3 currentPos = Sea.transform.position;

        // 目標位置へ滑らかに移動（加減速）
        float newY = Mathf.Lerp(currentPos.y, targetSeaY, Time.deltaTime * SeaLerpSpeed);
        Sea.transform.position = new Vector3(currentPos.x, newY, currentPos.z);

        // SkyBoxのBlendPowerもスライダー値に応じて調整
        float blendValue = Mathf.Lerp(0.06f, 1f, sliderValue * skyboxMultiplier);
        SkyBox.SetFloat("_BlendPower", blendValue);
    }

    void OnCrabPressed(InputAction.CallbackContext ctx)
    {
        crabfollow = true;
    }

    void OnCrabReleased(InputAction.CallbackContext ctx)
    {
        crabfollow = false;
    }
    void OnDelCrabPressed(InputAction.CallbackContext ctx)
    {
        if (GameObject.FindWithTag("crab") != null)
        {
            Destroy(GameObject.FindWithTag("crab"));
        }
    }

    void OnStawPressed(InputAction.CallbackContext ctx)
    {
        if (staw != null)
        {
            stawflag = !stawflag;
            staw.GetComponent<Animator>().SetBool("up", stawflag);
        }
    }

    void OnStaw2Pressed(InputAction.CallbackContext ctx)
    {
        if (staw != null)
        {
            stawflag_2 = !stawflag_2;
            staw_2.GetComponent<Animator>().SetBool("up", stawflag_2);
        }
    }

    void OnBubblePressed(InputAction.CallbackContext ctx)
    {
        bubblecount += 1;
        if (bubblecount > 1)
        {
            bubblecount = 0;
        }
    }

    void OnFadeUIInPressed(InputAction.CallbackContext ctx)
    {
        int i;
        if (fadeui[0].GetComponent<Animator>().GetBool("fadein") == false)
            i = 0;
        else
            i = 1;
        fadeui[i].GetComponent<Animator>().enabled = true;
        fadeui[i].GetComponent<Animator>().SetBool("fadein", true);
        fadeui[i].GetComponent<Animator>().SetBool("fadeout", false);
    }

    void OnFadeUIOutPressed(InputAction.CallbackContext ctx)
    {
        fadeui[0].GetComponent<Animator>().SetBool("fadeout", true);
        fadeui[0].GetComponent<Animator>().SetBool("fadein", false);
        fadeui[1].GetComponent<Animator>().SetBool("fadeout", true);
        fadeui[1].GetComponent<Animator>().SetBool("fadein", false);
    }

    void OnVfxPressed(InputAction.CallbackContext ctx)
    {
        vfxcount += 1;
        if (vfxcount > 1)
        {
            vfxcount = 0;
        }
    }

    void OnGrowPressed(InputAction.CallbackContext ctx)
    {
        growbool = true;
    }

    void OnAroundPressed(InputAction.CallbackContext ctx)
    {
        target.GetComponent<Animator>().enabled = true;
        target.GetComponent<Animator>().SetBool("around", true);
    }

    void OnAroundReleased(InputAction.CallbackContext ctx)
    {
        target.GetComponent<Animator>().SetBool("around", false);
    }

    void OnFishPressed(InputAction.CallbackContext ctx)
    {
        if (fishbool == false)
        {
            fishcount += 1;
            fishbool = true;
        }
        fishbool = false;
    }

    void OnResetPressed(InputAction.CallbackContext ctx)
    {
        if (player.Length > 0)
        {
            player[0].GetComponent<valuerecueve>().ballvalue = false;
        }
        if (player.Length > 0)
        {
            player[0].GetComponent<valuerecueve>().destoryvalue = true;
        }
        if (GameObject.FindWithTag("crab") != null)
        {
            Destroy(GameObject.FindWithTag("crab"));
        }
        if (GameObject.FindWithTag("crabs") != null)
        {
            Destroy(GameObject.FindWithTag("crabs"));
        }
        if (GameObject.FindWithTag("crabsed") != null)
        {
            Destroy(GameObject.FindWithTag("crabsed"));
        }
        if (GameObject.FindWithTag("building") != null)
        {
            Destroy(GameObject.FindWithTag("building"));
        }
        if (GameObject.FindWithTag("ball") != null)
        {
            Destroy(GameObject.FindWithTag("ball"));
        }
        if (GameObject.FindWithTag("buildinglo") != null)
        {
            Destroy(GameObject.FindWithTag("buildinglo"));
        }
        if (GameObject.FindWithTag("word") != null)
        {
            Destroy(GameObject.FindWithTag("word"));
        }
        if (fish != null)
        {
            fish.SetActive(false);
        }
    }

    void OnLoadCh4Pressed(InputAction.CallbackContext ctx)
    {
        SceneManager.LoadScene("chapter4");
    }

    void OnSeaPressed(InputAction.CallbackContext ctx)
    {
        if (ctx.action == I_SeaUp)
            SeaIsPressed = 1; // 往上
        else if (ctx.action == I_SeaDown)
            SeaIsPressed = -10; // 往下
        else if (ctx.action == I_SeaSlider)
        {
            SeaSliderReading = ctx.ReadValue<float>();
            //SeaIsPressed = (int)Remapping(sliderReading, 0f, 1f, -10f, 1f);
        }
    }

    void OnSeaReleased(InputAction.CallbackContext ctx)
    {
        SeaIsPressed = 0; // 停止移動
    }




    /// <summary>
    /// 處理輸入開始的事件，根據不同的輸入動作進行相應的操作。
    /// </summary>
    /// <param name="ctx">新的輸入系統的輸入值</param>
    void OnInputStarted(InputAction.CallbackContext ctx)
    {
        if (ctx.action == I_crab)
            crabfollow = true;
        else if (ctx.action == I_DelCrab)
        {
            if (GameObject.FindWithTag("crab") != null)
            {
                Destroy(GameObject.FindWithTag("crab"));
            }
        }
        else if (ctx.action == I_staw)
        {
            if (staw != null)
            {
                stawflag = !stawflag;
                staw.GetComponent<Animator>().SetBool("up", stawflag);
            }
        }
        else if (ctx.action == I_staw_2)
        {
            if (staw != null)
            {
                stawflag_2 = !stawflag_2;
                staw_2.GetComponent<Animator>().SetBool("up", stawflag_2);
            }
        }
        else if (ctx.action == I_bubble)
        {
            bubblecount += 1;
            if (bubblecount > 1)
            {
                bubblecount = 0;
            }
        }
        else if (ctx.action == I_FadeUI_In)
        {
            int i;
            if (fadeui[0].GetComponent<Animator>().GetBool("fadein") == false)
                i = 0;
            else
                i = 1;
            fadeui[i].GetComponent<Animator>().enabled = true;
            fadeui[i].GetComponent<Animator>().SetBool("fadein", true);
            fadeui[i].GetComponent<Animator>().SetBool("fadeout", false);
        }
        else if (ctx.action == I_FadeUI_Out)
        {
            fadeui[0].GetComponent<Animator>().SetBool("fadeout", true);
            fadeui[0].GetComponent<Animator>().SetBool("fadein", false);
            fadeui[1].GetComponent<Animator>().SetBool("fadeout", true);
            fadeui[1].GetComponent<Animator>().SetBool("fadein", false);
        }
        else if (ctx.action == I_vfx)
        {
            vfxcount += 1;
            if (vfxcount > 1)
            {
                vfxcount = 0;
            }
        }
        else if (ctx.action == I_grow)
        {
            growbool = true;
        }
        else if (ctx.action == I_around)
        {
            target.GetComponent<Animator>().enabled = true;
            target.GetComponent<Animator>().SetBool("around", true);
        }
        else if (ctx.action == I_fish)
        {
            if (fishbool == false)
            {
                fishcount += 1;
                fishbool = true;
            }
            fishbool = false;
        }
        else if (ctx.action == I_Reset)
        {
            ESC_Reset();
        }
        else if (ctx.action == I_LoadCh4)
        {
            SceneManager.LoadScene("chapter4");
        }
        else if (ctx.action == I_SeaUp)
        {
            SeaIsPressed = 1; // 往上
        }
        else if (ctx.action == I_SeaDown)
        {
            SeaIsPressed = -1; // 往下
        }
        // else if (ctx.action == I_NewBuildingGrow)
        // { 
        //     // 找到所有的 BuildingAnimationControl 組件並觸發動畫
        //     buildingAnimationControls = FindObjectsOfType<BuildingAnimationControl>();
        //     foreach (var building in buildingAnimationControls)
        //     {
        //         building.PlayBuildingAnimation();
        //     }
        // }
        else if(ctx.action == I_ClearBuilding)
        {
            DeletTagedObjects("building");
            DeletTagedObjects("buildinglo");
            DeletTagedObjects("crabs");
            lightObject.SetActive(false);
            houseArray.emptyBuildArray();
        }
    }

    void OnInputReleased(InputAction.CallbackContext ctx)
    {
        if (ctx.action == I_crab)
            crabfollow = false;
        else if (ctx.action == I_around)
        {
            target.GetComponent<Animator>().SetBool("around", false);
        }
        else if (ctx.action == I_grow)
        {
            growbool = false;
        }
        else if (ctx.action == I_SeaUp || ctx.action == I_SeaDown)
        {
            SeaIsPressed = 0; // 停止移動
        }
    }

    /// <summary>
    /// 重設函式，會清除所有玩家的值，並銷毀場景中的特定物件。
    /// </summary>
    private void ESC_Reset()
    {
        if (player.Length > 0)
        {
            player[0].GetComponent<valuerecueve>().ballvalue = false;
        }
        if (player.Length > 0)
        {
            player[0].GetComponent<valuerecueve>().destoryvalue = true;
        }
        if (GameObject.FindWithTag("crab") != null)
        {
            Destroy(GameObject.FindWithTag("crab"));
        }
        if (GameObject.FindWithTag("crabs") != null)
        {
            Destroy(GameObject.FindWithTag("crabs"));
        }
        if (GameObject.FindWithTag("crabsed") != null)
        {
            Destroy(GameObject.FindWithTag("crabsed"));
        }
        if (GameObject.FindWithTag("building") != null)
        {
            Destroy(GameObject.FindWithTag("building"));
        }
        if (GameObject.FindWithTag("ball") != null)
        {
            Destroy(GameObject.FindWithTag("ball"));
        }
        if (GameObject.FindWithTag("buildinglo") != null)
        {
            Destroy(GameObject.FindWithTag("buildinglo"));
        }
        if (GameObject.FindWithTag("word") != null)
        {
            Destroy(GameObject.FindWithTag("word"));
        }
        if (fish != null)
        {
            fish.SetActive(false);
        }
    }
    public void DeletTagedObjects(string tagName)
    {
        GameObject[] allObjects = GameObject.FindGameObjectsWithTag(tagName);
        foreach (var obj in allObjects)
        {
            Destroy(obj);
        }
    }
    public void OnLightPressed(InputAction.CallbackContext ctx)
    {
        lightObject.SetActive(!lightObject.activeSelf);
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
