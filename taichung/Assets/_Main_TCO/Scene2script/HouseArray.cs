using System.Collections;
using System.Collections.Generic;
using JetBrains.Annotations;
//using Meta.XR.BuildingBlocks.Editor;
using Unity.VisualScripting;
using UnityEngine;

public class HouseArray : MonoBehaviour
{
    public KeyCode HouseKey;
    public KeyCode CrabKey;
    public KeyCode BubbleKey;
    public GameObject[] house;
    public bool houseenable =true;
    public GameObject[] crab;
    public bool crabenable =false;
    public GameObject[] bubble;
    public bool bubbleenable =false;
    public Transform pos;
    public int x;
    public int z;
    public float k;
    [Range(1, 100)]    
    public int buildpertime = 1;
    public float[] housescale;
    public float[] crabscale;
    public float[] bubblescale;
    public int housecount;
    public float offset;
    public List<Vector2> buildarraytemp;
    public int[] blockhouseX; 
    public int[] blockhouseZ; 
    int [,] buildarray;

    void Start() 
    {
        buildarray = new int[x+1,z+1];
        for (int _ =0; _ < blockhouseX.Length; _++)
        {
            for(int i = 0; i < z; i++)
            {
                buildarray[blockhouseX[_],i] = 1;
            }
        }

        for (int _ =0; _ < blockhouseZ.Length; _++)
        {    
            for(int j = 0; j < x; j++)
            {
                buildarray[j,blockhouseZ[_]] = 1;
            }  
        }
       
        
    }

    void Update()
    {
        bool flag = true;

        if(Input.GetKeyDown(HouseKey) &&　flag && houseenable)
        {
            for(int i = 0; i < buildpertime; i++) 
            {
                
                flag = false;

                float houseoffset = Random.Range(-offset, offset);
                int Xpos = Random.Range(0,x);
                int Zpos = Random.Range(0,z);
                int rand = Random.Range(0,house.Length);
                int h = Random.Range(0,housescale.Length);

                house[rand].transform.localScale = new Vector3(housescale[h], housescale[h], housescale[h]);

                if(buildarray[Xpos,Zpos] != 1)
                {
                    Instantiate(house[rand], pos.position + new Vector3 (Xpos*k + houseoffset, 0, Zpos*k), Quaternion.identity, pos);
                    buildarray[Xpos,Zpos] = 1;
                    buildarraytemp.Add( new Vector2(Xpos,Zpos));
                    buildarraytemp.ToArray();
                    housecount++;
                }
                else 
                {   
                    if(housecount < x*z-blockhouseZ.Length*x-blockhouseX.Length*z+blockhouseX.Length*blockhouseZ.Length)
                        i--;
                    if(housecount >= x*z-blockhouseZ.Length*x-blockhouseX.Length*z+blockhouseX.Length*blockhouseZ.Length)
                        break;
                }
                Debug.Log( x*z-blockhouseZ.Length*x-blockhouseX.Length*z+blockhouseX.Length*blockhouseZ.Length);
            }

        }

        if(Input.GetKeyDown(CrabKey) &&　flag && crabenable)
        {
            for(int i = 0; i < buildpertime; i++) 
            {
                
                flag = false;

                float houseoffset = Random.Range(-offset, offset);
                int Xpos = Random.Range(0,x);
                int Zpos = Random.Range(0,z);
                int rand = Random.Range(0,crab.Length);

                if(buildarray[Xpos,Zpos] != 1)
                {
                    Instantiate(crab[rand], pos.localPosition + new Vector3 (Xpos*k + houseoffset, Zpos*k, -2.7f ), Quaternion.identity, pos);
                    buildarray[Xpos,Zpos] = 1;
                    buildarraytemp.Add( new Vector2(Xpos,Zpos));
                    buildarraytemp.ToArray();
                    housecount++;
                }
                else 
                {   
                    if(housecount < x*z)
                        i--;
                    if(housecount >= x*z)
                        break;
                }
            }

        }

        if(Input.GetKeyDown(BubbleKey) &&　flag && bubbleenable)
        {
            for(int i = 0; i < buildpertime; i++) 
            {
                
                flag = false;

                float houseoffset = Random.Range(-offset, offset);
                int Xpos = Random.Range(0,x);
                int Zpos = Random.Range(0,z);
                int rand = Random.Range(0,bubble.Length);
                int s = Random.Range(0,bubblescale.Length);

                if(buildarray[Xpos,Zpos] != 1)
                {
                    GameObject bubbles =Instantiate(bubble[rand], pos.localPosition + new Vector3 (Xpos*k + houseoffset, 0f, Zpos*k ), Quaternion.identity, pos);
                    bubbles.GetComponent<Rigidbody>().AddForce(new Vector3(0, rand+1, 0));
                    bubbles.transform.localScale = new Vector3(bubblescale[s], bubblescale[s], bubblescale[s]);
                    buildarray[Xpos,Zpos] = 1;
                    buildarraytemp.Add( new Vector2(Xpos,Zpos));
                    buildarraytemp.ToArray();
                    housecount++;
                }
                else 
                {   
                    if(housecount < x*z)
                        i--;
                    if(housecount >= x*z)
                        break;
                }
            }

        }

        if (Input.GetKey(KeyCode.Escape))
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