using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.VFX;

public class Rate_Control_Hotkey : MonoBehaviour
{
    public VisualEffect HandTrail_vfx;
    private string Rate = "Rate";
    private string MaxRadius = "MaxRadius";
    private int toggle;
    void Start()
    {
        
    }


    void Update()
    {
        if (Input.GetKeyDown(KeyCode.H))
        {
        
            switch(toggle)
            {
            case -1:
                HandTrail_vfx.SetFloat(Rate, 5000);
                //5000(MAX) ~ 0(min), Slider0
                HandTrail_vfx.SetFloat(MaxRadius, 0.5f);
                //0.2(min) ~ 0.5(MAX), Slider0 (same as above)
                //要求：一個MIDI滑軌控制兩個參數，Rate及MaxRadius，皆線性，最大最小值如上述
                
                break;
            case 0:
                HandTrail_vfx.SetFloat(Rate, 2000);
                break;
            case 1:
                HandTrail_vfx.SetFloat(Rate, 1000);
                break;
            case 2:
                HandTrail_vfx.SetFloat(Rate, 200);
                HandTrail_vfx.SetFloat(MaxRadius, 0.2f);
                break;
            case 3:
                HandTrail_vfx.SetFloat(Rate, 0);
                break;
            default:
                break;
            }
            if(toggle>=3){
                toggle=-1;
            }
            else{
                toggle+=1;
            }
            
        }
    }
}
