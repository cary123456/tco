using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.VFX;
public class voixetest : MonoBehaviour
{
    float _pickup = 0;
    public GameObject[] particleeffect;
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
        
    }

    // Update is called once per frame
    void Update()
    {
        foreach (GameObject p in particleeffect)
        {
            if (p.activeInHierarchy && p.gameObject.transform.GetComponent<ParticleSystem>())
            {
                p.gameObject.transform.localScale = Vector3.Lerp(new Vector3(1,1,1),new Vector3(this.gameObject.transform.localScale.x, this.gameObject.transform.localScale.y, _pickup * 20f), 0.1f );

            }
            if (p.activeInHierarchy && p.gameObject.transform.GetComponent<VisualEffect>())
            {
                p.gameObject.transform.GetComponent<VisualEffect>().SetFloat("size",Mathf.Lerp(0.5f, _pickup * 5f, 0.5f)); 

            }



        }
        //tt.text = _pickup.ToString();
    }
}
