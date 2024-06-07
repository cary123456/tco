using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class crabmove : MonoBehaviour
{
    public bool move;
    public GameObject[] crabs;
    public GameObject[] buildings;
    public float runtime;
    public float timemove;
    public GameObject midfinger;

    public bool one;
    public GameObject VRheadset;
    public int crabcount;

    public bool onrtime;
   
    public Vector3 headsetposition;
    // Start is called before the first frame update
    void Start()
    {
        midfinger = GameObject.Find("midfingerL");
        crabcount = -1;
        VRheadset = GameObject.FindGameObjectWithTag("headset");
    }

    // Update is called once per frame
    void Update()
    {
       


        if (move)
        {
            /*
            for (int i = 0; i < crabs.Length; i++)
            {
                crabs[i].GetComponent<Animator>().enabled = true;
                crabs[i].GetComponent<Animator>().SetBool("becomehouse", true);
                midfinger.GetComponent<midtri>().allowtrigger = true;
            }
            */
           
            this.GetComponent<Animator>().enabled = true;
            this.GetComponent<Animator>().SetBool("C2B", true);
            if (one)
            {
                headsetposition = new Vector3(VRheadset.transform.position.x, 0, VRheadset.transform.position.z);
                one = false;
            }
            
            if (runtime >= timemove)
                
            {
                
                this.transform.position = Vector3.MoveTowards(this.transform.position, headsetposition, 0.03f);
                /*
                for (int i = 0; i < crabs.Length; i++)
                {
                    crabs[i].transform.position = Vector3.MoveTowards(crabs[i].transform.position,VRheadset.transform.position, 0.05f);
                }
                
                */                     
                
            }
            runtime += Time.deltaTime;
        }
        else
        {
            runtime = 0;
            one = true;
        }
 

    }

    
}
