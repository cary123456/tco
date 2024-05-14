using System.Collections;
using System.Collections.Generic;
using System.Linq;
using Unity.VisualScripting;
using UnityEngine;
using UnityEngine.VFX;


public class dynamicGeneration : MonoBehaviour
{
    public GameObject headset;  
    public GameObject CrabPrefab;   //Put crab's prefab
    public VisualEffect CrabVFX;
    public List<GameObject> crabb = new List<GameObject>();
    public GameObject[] crabs;
    [Range(1, 10)]
    public int SummonCrabsCount;
    public Vector3[] SummonPosOffset;     //Each summoned crads' position offset, Array length must be more than "SummonCrabsCount"
    public float[] crabsFallSpeed;
    public float[] CrabScale = {1f, 2f, 3f};
    public float[] particleRed = {50f, 500f, 2000f};
    public HouseArray bubble;
    public int counter =0;
    public int prethreshold;
    public int threshold;
    public bool iswall = false;
    public Transform playerbubble;
    public float rebound;

    public GameObject[] SummonCrab()
    {
        for (int i =0; i<SummonCrabsCount; i++)
            {
                GameObject crabs = Instantiate(CrabPrefab, headset.transform.position + SummonPosOffset[i], Quaternion.Euler(new Vector3(0, 180, 180)));     //Summon crabs + Position offset

                int rand = Random.Range(1, 10);
                crabs.transform.localScale = new Vector3(CrabScale[rand%3], CrabScale[rand%3], CrabScale[rand%3]);  //Random Sacale in three variables
                crabs.GetComponent<Rigidbody>().AddForce(0, crabsFallSpeed[rand], 0);   //Random crab's drop speed in "crabsFallSpeed"
                CrabVFX.SetFloat(Shader.PropertyToID("amount(ora)"),particleRed[rand%3]);    //Random red particle in three variables

                crabb.Add(crabs);
            }

        GameObject[] crabc = crabb.ToArray();
        return crabc;   //Return summoned crab GameObject array

    }

    void OnCollisionExit(Collision other)
    {
        // if (other.gameObject.tag == "ball" && !iswall)
        // {
        //     int thresholdtemp = threshold;
        //     counter++;

        //     if (bubble.buildpertime < 10)
        //         thresholdtemp = prethreshold;


        //     if(counter % thresholdtemp == 0)
        //     {
        //         bubble.bubbleflag = true;
        //         bubble.bubbles.transform.position = other.transform.position;
        //         bubble.buildpertime = 1;
        //     }
        //     else if(bubble.housecount >= bubble.x * bubble.z )
        //     {
        //         counter = 0;
        //         bubble.buildpertime = 1;
        //     }
            
        // }
        
    }

    void OnCollisionEnter(Collision other)
    {
         if (other.gameObject.tag == "ball" && !iswall)
        {
            int thresholdtemp = threshold;
            counter++;

            if (bubble.buildpertime < 10)
                thresholdtemp = prethreshold;


            if(counter % thresholdtemp == 0)
            {
                bubble.bubblepos = other.transform.position;
                bubble.bubbleflag = true;
                Debug.Log(other.transform.position);
                bubble.buildpertime = 1;
            }
            else if(bubble.housecount >= bubble.x * bubble.z )
            {
                counter = 0;
                bubble.buildpertime = 1;
            }
            
        }

        if (other.gameObject.tag == "ball" && iswall)
        {
            other.rigidbody.GetComponent<Rigidbody>().AddForce((playerbubble.position - other.transform.position) * rebound);
        }
    }

}
