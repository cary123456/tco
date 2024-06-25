using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.VFX;
public class voixetest : MonoBehaviour
{
    public float _pickup = 0;
    
    public Renderer rend;
    public GameObject bubble;
    public bool auto;
    public float volume;
    public float AdjustSpeed = 1;
    public float RamdonNoise;
    public float Pickup
    {
        get { return _pickup; }
        set
        {
            _pickup = value;


        }
    }
    //public Text tt;
    // Start is called before the first frame update
    void Start()
    {
        //rend = bubble.GetComponent<Renderer>();
        //rend.material.shader = Shader.Find("Inside");
    }

    // Update is called once per frame
    void Update()
    {
        bubble = GameObject.FindGameObjectWithTag("inside");
        if(Input.GetKeyDown(KeyCode.Alpha8))
            auto = !auto;
        if(auto)
        {
            if(bubble != null)
            {
                rend = bubble.GetComponent<Renderer>();
                        //rend.material.shader = Shader.Find("Inside");
                rend.material.SetFloat("_NoiseScale", _pickup*8 );
            }
        }
        else
        {
            float rand = Random.Range(-RamdonNoise,RamdonNoise);
            if(Input.GetKey(KeyCode.UpArrow))
            {
                volume += AdjustSpeed;
                volume = Mathf.Clamp(volume, 0f, 2.5f) + rand;
            }
            if(Input.GetKey(KeyCode.DownArrow))
            {
                volume -= AdjustSpeed;
                volume = Mathf.Clamp(volume, 0f, 2.5f);
                volume = Mathf.Clamp(volume, 0f, 2.5f) + rand;
            }
            rend.material.SetFloat("_NoiseScale", volume);
        }
        
        
    }
}
