using System.Collections;
using System.Collections.Generic;
using JetBrains.Annotations;
using UnityEngine;

public class HouseArray : MonoBehaviour
{
    public GameObject house;
    public Transform pos;
    public int x;
    public int z;
    public float k;
    public bool again = false;
    public int housecount;
    public float offset;
    int [,] buildarray;

    void Start() 
    {
        buildarray = new int[x+1,z+1];
       
        
    }

    void Update()
    {
        bool flag = true;

        if((Input.GetKeyDown("p") &&　flag) || again)
        {
            flag =false;
            again = false;

            float houseoffset = Random.Range(-offset, offset);
            int Xpos = Random.Range(0,x);
            int Zpos = Random.Range(0,z);

            if(buildarray[Xpos,Zpos] != 1)
            {
                Instantiate(house, pos.position + new Vector3 (Xpos*k + houseoffset, -2.7f, Zpos*k), Quaternion.identity, pos);
                buildarray[Xpos,Zpos] = 1;
                housecount++;
            }
            else 
            {
                again = true;
                if(housecount >= x*z)
                    again = false;
            }

        }

        
    }
    void OnDrawGizmosSelected()
    {
        // Draw a semitransparent red cube at the transforms position
        Gizmos.color = new Color(1, 0, 0, 0.5f);
        Gizmos.DrawCube(pos.position + new Vector3((x-1)*k/2, 0, (z-1)*k/2) , new Vector3(x*k, 1, z*k));
    }
}
