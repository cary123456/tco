using System.Collections;
using System.Collections.Generic;
using JetBrains.Annotations;
//using Meta.XR.BuildingBlocks.Editor;
using Unity.VisualScripting;
using UnityEngine;

public class HouseArray : MonoBehaviour
{
    public GameObject house;
    public bool houseenable =true;
    public GameObject crab;
    public bool crabenable =false;
    public Transform pos;
    public int x;
    public int z;
    public float k;
    [Range(1, 10)]    
    public int buildpertime = 1;
    public int housecount;
    public float offset;
    public List<Vector2> buildarraytemp;
    public int blockhouseX; 
    public int blockhouseZ; 
    int [,] buildarray;

    void Start() 
    {
        buildarray = new int[x+1,z+1];
        for(int i = 0; i < z; i++)
        {
            buildarray[blockhouseX,i] = 1;
        }
        for(int j = 0; j < x; j++)
        {
            buildarray[j,blockhouseZ] = 1;
        }  
       
        
    }

    void Update()
    {
        bool flag = true;

        if(Input.GetKeyDown("p") &&　flag && houseenable)
        {
            for(int i = 0; i < buildpertime; i++) 
            {
                
                flag = false;

                float houseoffset = Random.Range(-offset, offset);
                int Xpos = Random.Range(0,x);
                int Zpos = Random.Range(0,z);

                if(buildarray[Xpos,Zpos] != 1)
                {
                    Instantiate(house, pos.position + new Vector3 (Xpos*k + houseoffset, 0, Zpos*k), Quaternion.Euler(0f, 0f, 90f), pos);
                    buildarray[Xpos,Zpos] = 1;
                    buildarraytemp.Add( new Vector2(Xpos,Zpos));
                    buildarraytemp.ToArray();
                    housecount++;
                }
                else 
                {   
                    if(housecount < x*z-x-z+1)
                        i--;
                    if(housecount >= x*z-x-z+1)
                        break;
                }
            }

        }

        if(Input.GetKeyDown("o") &&　flag && crabenable)
        {
            for(int i = 0; i < buildpertime; i++) 
            {
                
                flag = false;

                float houseoffset = Random.Range(-offset, offset);
                int Xpos = Random.Range(0,x);
                int Zpos = Random.Range(0,z);

                if(buildarray[Xpos,Zpos] != 1)
                {
                    Instantiate(crab, pos.localPosition + new Vector3 (Xpos*k + houseoffset, Zpos*k, -2.7f ), Quaternion.identity, pos);
                    buildarray[Xpos,Zpos] = 1;
                    buildarraytemp.Add( new Vector2(Xpos,Zpos));
                    buildarraytemp.ToArray();
                    housecount++;
                }
                else 
                {   
                    if(housecount < x*z-x-z+1)
                        i--;
                    if(housecount >= x*z-x-z+1)
                        break;
                }
            }

        }

        if (Input.GetKeyUp(KeyCode.Escape))
        {
            if(housecount > 0)
            {
                housecount--;
                buildarray[(int)buildarraytemp[housecount].x,(int)buildarraytemp[housecount].y] = 0;
                
                buildarraytemp.RemoveAt(housecount);
                
            }
               
        }

        
    }

    public void buildfunc()
    {

    }
    void OnDrawGizmosSelected()
    {
        // Draw a semitransparent red cube at the transforms position
        Gizmos.color = new Color(1, 0, 0, 0.5f);
        Gizmos.DrawCube(pos.position + new Vector3((x-1)*k/2, 0, (z-1)*k/2) , new Vector3(x*k, 1, z*k));
    }
}
