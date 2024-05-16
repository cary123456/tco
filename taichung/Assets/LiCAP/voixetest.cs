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
        if(bubble != null)
        {
            rend = bubble.GetComponent<Renderer>();
            //rend.material.shader = Shader.Find("Inside");
            rend.material.SetFloat("_NoiseScale", _pickup*5 );
        }
        
    }
}
