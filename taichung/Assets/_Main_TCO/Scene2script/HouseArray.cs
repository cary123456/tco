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
    public KeyCode FishKey;
    public KeyCode WordKey;
    public KeyCode WordSwitch;

    public GameObject[] house;
    public bool houseenable =true;
    public GameObject[] crab;
    public bool crabenable =false;
    public GameObject[] bubble;
    public bool bubbleenable =false;
    public GameObject[] fish;
    public bool fishenable = false;
    public GameObject[] word;
    public GameObject[] word1;
    public GameObject[] word2;
    public GameObject[] word3;
    public bool wordenable = false;
    public int wordselect;
    public Transform pos;
    public Transform parenttrans;
    public Transform parentcanvas;
    public GameObject wordIO;
    public int x;
    public int z;
    public float k;
    [Range(1, 100)]    
    public int buildpertime = 1;
    public float[] housescale;
    public float[] crabscale;
    public float crabspeed;
    public float[] bubblescale;
    public float bubbleforce;
    public Transform playerbubble;
    public float fishspeed;
    public float fishlifetime;
    public float[] wordscale;
    public Vector3 wordrotate;
    public int housecount;
    public float offset;
    public List<Vector2> buildarraytemp;
    public int[] blockhouseX; 
    public int[] blockhouseZ; 
    int [,] buildarray;
    public bool bubbleflag = false;
    public bool gesturetigger = false;
    public bool flip = false;
    public bool fishflag;
    public bool houseflag;
    public bool wordflag;
    public bool bubbletimerflag;
    public bool keepbuild;
    public Vector3 bubblepos;
    public bool wordswitch;
    public nearest nearest;
    public ServerWord[] serverWord;
    public bool serverenable;


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

        if((Input.GetKeyDown(HouseKey) &&　flag && houseenable) || (keepbuild && houseflag))
        {
            keepbuild = true;
            houseflag =false;
            StartCoroutine("Housetimer");

            if(housecount >= x*z-blockhouseZ.Length*x-blockhouseX.Length*z+blockhouseX.Length*blockhouseZ.Length)
            {
                keepbuild =false;
            }
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
                    GameObject houses = Instantiate(house[rand], pos.position + new Vector3 (Xpos*k + houseoffset, 0, Zpos*k), Quaternion.identity, parenttrans);
                    buildarray[Xpos,Zpos] = 1;
                    houses.transform.Rotate(wordrotate);
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
            }

        }

        
        if(Input.GetKeyDown(FishKey))
            keepbuild = !keepbuild;
        if((Input.GetKeyDown(FishKey) &&　flag && fishenable && fishflag) || gesturetigger || (fishflag && keepbuild))
        {
            fishflag = false;
            StartCoroutine("Fishtimer");
            
            for(int i = 0; i < buildpertime; i++) 
            {
                flag = false;
                gesturetigger = false;

                float houseoffset = Random.Range(-offset, offset);
                int Xpos = Random.Range(0,x);
                int Zpos = Random.Range(0,z);
                int rand = Random.Range(0,fish.Length);
                //int speed = Random.Range(1,3);

                float fishspeedtemp = fishspeed;



                if (buildarray[Xpos,Zpos] != 1)
                {
                    GameObject fishman = Instantiate(fish[rand], pos.position + new Vector3 (Xpos*k + houseoffset, 0, Zpos*k), Quaternion.identity, pos);
                    if (flip)
                    {
                        fishman.transform.Rotate(0, 180, 0);
                        fishspeedtemp = -fishspeed;
                    }
                    //buildarray[Xpos,Zpos] = 0;
                    //housecount++;
                    fishman.GetComponent<Rigidbody>().velocity = new Vector3(0, 0, fishspeedtemp);
                    Destroy(fishman, fishlifetime);
                    
                }
                else 
                {   
                    if(housecount < blockhouseZ.Length*x+blockhouseX.Length*z-blockhouseX.Length*blockhouseZ.Length)
                        i--;
                    if(housecount >= blockhouseZ.Length*x+blockhouseX.Length*z-blockhouseX.Length*blockhouseZ.Length)
                        break;
                }
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
                int s = Random.Range(0, crabscale.Length);
                float speed = flip? crabspeed : -crabspeed;
                

                if (buildarray[Xpos,Zpos] != 1)
                {
                    GameObject crabs = Instantiate(crab[rand], pos.localPosition + new Vector3 (Xpos*k + houseoffset, -2.7f, Zpos*k ), Quaternion.identity, pos);
                    crabs.transform.localScale = new Vector3(crabscale[s], crabscale[s], crabscale[s]);
                    crabs.transform.Rotate(0, 0, 180);
                    crabs.GetComponent<Rigidbody>().velocity = new Vector3(speed, 0, 0);

                    //buildarray[Xpos,Zpos] = 1;
                    buildarraytemp.Add( new Vector2(Xpos,Zpos));
                    buildarraytemp.ToArray();
                    //housecount++;
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
        if(Input.GetKeyDown(WordSwitch))
        {
            wordswitch = !wordswitch;
            Debug.Log("on");

        }
        if(Input.GetKeyDown(BubbleKey) &&　flag && bubbleenable || (bubbleflag && bubbletimerflag))
        {
            bubbletimerflag = false;
            StartCoroutine("Bubbletimer");

            for(int i = 0; i < buildpertime; i++) 
            {

                flag = false;

                float houseoffset = Random.Range(-offset, offset);
                int Xpos = Random.Range(0,x);
                int Zpos = Random.Range(0,z);
                int rand = Random.Range(0,bubble.Length);
                int s = Random.Range(0,bubblescale.Length);

                if(!bubbleflag)
                {
                    bubblepos = pos.localPosition + new Vector3 (Xpos*k + houseoffset, 0f, Zpos*k );
                    Debug.Log("A");
                }


                if(buildarray[Xpos,Zpos] != 1)
                {
                    bubbleflag = false;
                    GameObject bubbles =Instantiate(bubble[rand], bubblepos, Quaternion.identity, pos);
                    bubbles.GetComponent<Rigidbody>().AddForce((playerbubble.position - bubbles.transform.position) * bubbleforce);
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
        if(Input.GetKey(WordKey) &&　flag && wordenable)
        {
            // for(int i = 0; i < buildpertime; i++) 
            // {
                
            //     flag = false;

            //     float houseoffset = Random.Range(-offset, offset);
            //     int Xpos = Random.Range(0,x);
            //     int Zpos = Random.Range(0,z);
            //     int rand = Random.Range(0, word.Length);
            //     int s = Random.Range(0, wordscale.Length);


            //     if (buildarray[Xpos,Zpos] != 1)
            //     {
            //         GameObject wordtemp = Instantiate(word[rand], pos.position + new Vector3 (Xpos*k,0+ houseoffset ,Zpos*k ), Quaternion.identity, parentcanvas);
            //         wordtemp.transform.Rotate(wordrotate);
            //         wordtemp.transform.localScale = new Vector3(wordscale[s], wordscale[s], wordscale[s]);
            //         buildarray[Xpos,Zpos] = 1;
            //         buildarraytemp.Add( new Vector2(Xpos,Zpos));
            //         buildarraytemp.ToArray();
            //         housecount++;
            //     }
            //     else 
            //     {   
            //         if(housecount < x*z-blockhouseZ.Length*x-blockhouseX.Length*z+blockhouseX.Length*blockhouseZ.Length)
            //             i--;
            //         if(housecount >= x*z-blockhouseZ.Length*x-blockhouseX.Length*z+blockhouseX.Length*blockhouseZ.Length)
            //             break;
            //     }
                
            // }
            int rand = Random.Range(0,word.Length);
            if(wordswitch)
                rand = Random.Range(7,13);
            
            float houseoffset = Random.Range(0, offset*50);
            

            if(housecount > 0)
            {
                wordIO.SetActive(true);
                housecount--;
                buildarray[(int)buildarraytemp[0].x,(int)buildarraytemp[0].y] = 0;
                GameObject wordtemp = Instantiate(word[rand], pos.position + new Vector3 ((int)buildarraytemp[0].x*k, 0+ houseoffset ,(int)buildarraytemp[0].y*k ), Quaternion.identity, parentcanvas);
                wordtemp.transform.Rotate(wordrotate);
                
                buildarraytemp.RemoveAt(0);

                if (GameObject.FindWithTag("building") != null)
                {
                    Destroy(GameObject.FindWithTag("building"));
                }
                
                if (GameObject.FindWithTag("buildinglo") != null)
                {
                    Destroy(GameObject.FindWithTag("buildinglo"));
                }

            }
            else if(housecount == 0)
            {

                if (GameObject.FindWithTag("building") != null)
                {
                    Destroy(GameObject.FindWithTag("building"));
                }
                
                if (GameObject.FindWithTag("buildinglo") != null)
                {
                    Destroy(GameObject.FindWithTag("buildinglo"));
                }

            }
        }

        if (Input.GetKey(KeyCode.Escape))
        {
            if(housecount > 0)
            {
                wordIO.SetActive(true);
                housecount--;
                buildarray[(int)buildarraytemp[0].x,(int)buildarraytemp[0].y] = 0;
                
                buildarraytemp.RemoveAt(0);

            }
               
        }
        if((serverWord.Length > 0) && (serverWord[0] != null) && (serverWord[1] != null))
        {

            if(serverWord[0].receivedNum > 0  && serverenable )
            {
                if(nearest.closestbuilding && housecount > 0 && wordflag)
                {

                    wordflag = false;
                    StartCoroutine("Wordtimer");

                    
                    if(serverWord[0].receivedNum == 1)
                    {
                        
                        for(int i = 0; i < word1.Length ; i ++)
                        {
                            float houseoffset = Random.Range(0, offset*30);
                            int id = nearest.closestbuildinglo.transform.GetSiblingIndex();
                            buildarray[(int)buildarraytemp[id].x,(int)buildarraytemp[id].y] = 0;
                            buildarraytemp.RemoveAt(id);
                            if(nearest.closestbuildinglo.tag == "building" || nearest.closestbuildinglo.tag == "buildinglo")
                                Destroy(nearest.closestbuildinglo);
                            housecount--;
                            GameObject wordtemp = Instantiate(word1[i],new Vector3( nearest.closestbuildinglo.transform.position.x, nearest.closestbuildinglo.transform.position.y + houseoffset ,nearest.closestbuildinglo.transform.position.z) , Quaternion.identity, parentcanvas);
                            wordtemp.transform.Rotate(wordrotate);
                        } 
                    }
                    if(serverWord[0].receivedNum == 2)
                    {
                        
                        for(int i = 0; i < word2.Length ; i ++)
                        {
                            float houseoffset = Random.Range(0, offset*30);
                            int id = nearest.closestbuildinglo.transform.GetSiblingIndex();
                            buildarray[(int)buildarraytemp[id].x,(int)buildarraytemp[id].y] = 0;
                            buildarraytemp.RemoveAt(id);
                            if(nearest.closestbuildinglo.tag == "building" || nearest.closestbuildinglo.tag == "buildinglo")
                                Destroy(nearest.closestbuildinglo);
                            housecount--;
                            GameObject wordtemp = Instantiate(word2[i],new Vector3( nearest.closestbuildinglo.transform.position.x, nearest.closestbuildinglo.transform.position.y + houseoffset ,nearest.closestbuildinglo.transform.position.z) , Quaternion.identity, parentcanvas);
                            wordtemp.transform.Rotate(wordrotate);
                        } 
                    }
                    if(serverWord[0].receivedNum == 3)
                    {
                        
                        for(int i = 0; i < word3.Length ; i ++)
                        {
                            float houseoffset = Random.Range(0, offset*30);
                            int id = nearest.closestbuildinglo.transform.GetSiblingIndex();
                            buildarray[(int)buildarraytemp[id].x,(int)buildarraytemp[id].y] = 0;
                            buildarraytemp.RemoveAt(id);
                            if(nearest.closestbuildinglo.tag == "building" || nearest.closestbuildinglo.tag == "buildinglo")
                                Destroy(nearest.closestbuildinglo);
                            housecount--;
                            GameObject wordtemp = Instantiate(word3[i],new Vector3( nearest.closestbuildinglo.transform.position.x, nearest.closestbuildinglo.transform.position.y + houseoffset ,nearest.closestbuildinglo.transform.position.z) , Quaternion.identity, parentcanvas);
                            wordtemp.transform.Rotate(wordrotate);
                        } 
                    }
                    /*
                    if(nearest.closestbuildinglo.tag == "building" || nearest.closestbuildinglo.tag == "buildinglo")
                        Destroy(nearest.closestbuildinglo);
                    housecount--;
                    GameObject wordtemp = Instantiate(word[serverWord[0].receivedNum - 1],new Vector3( nearest.closestbuildinglo.transform.position.x, nearest.closestbuildinglo.transform.position.y + houseoffset ,nearest.closestbuildinglo.transform.position.z) , Quaternion.identity, parentcanvas);
                    wordtemp.transform.Rotate(wordrotate);
                    */
                }
                
                else if(nearest.closestbuilding && housecount == 0 && wordflag)
                {

                    wordflag = false;
                    StartCoroutine("Wordtimer");

                    if(serverWord[0].receivedNum == 1)
                    {
                        
                        for(int i = 0; i < word1.Length ; i ++)
                        {
                            float houseoffset = Random.Range(0, offset*30);
                            if(nearest.closestbuildinglo.tag == "building" || nearest.closestbuildinglo.tag == "buildinglo")
                                Destroy(nearest.closestbuildinglo);
                            //GameObject wordtemp = Instantiate(word1[i],new Vector3( nearest.closestbuildinglo.transform.position.x, nearest.closestbuildinglo.transform.position.y + houseoffset ,nearest.closestbuildinglo.transform.position.z) , Quaternion.identity, parentcanvas);
                            //wordtemp.transform.Rotate(wordrotate);
                        } 
                    }
                    if(serverWord[0].receivedNum == 2)
                    {
                        
                        for(int i = 0; i < word2.Length ; i ++)
                        {
                            float houseoffset = Random.Range(0, offset*30);
                            if(nearest.closestbuildinglo.tag == "building" || nearest.closestbuildinglo.tag == "buildinglo")
                                Destroy(nearest.closestbuildinglo);
                            
                            //GameObject wordtemp = Instantiate(word2[i],new Vector3( nearest.closestbuildinglo.transform.position.x, nearest.closestbuildinglo.transform.position.y + houseoffset ,nearest.closestbuildinglo.transform.position.z) , Quaternion.identity, parentcanvas);
                            //wordtemp.transform.Rotate(wordrotate);
                        } 
                    }
                    if(serverWord[0].receivedNum == 3)
                    {
                        
                        for(int i = 0; i < word3.Length ; i ++)
                        {
                            float houseoffset = Random.Range(0, offset*30);
                            if(nearest.closestbuildinglo.tag == "building" || nearest.closestbuildinglo.tag == "buildinglo")
                                Destroy(nearest.closestbuildinglo);
                            
                            //GameObject wordtemp = Instantiate(word3[i],new Vector3( nearest.closestbuildinglo.transform.position.x, nearest.closestbuildinglo.transform.position.y + houseoffset ,nearest.closestbuildinglo.transform.position.z) , Quaternion.identity, parentcanvas);
                            //wordtemp.transform.Rotate(wordrotate);
                        } 
                    }

                }
                
            }
            if(serverWord[1].receivedNum > 0  && serverenable )
            {
                if(nearest.closestbuilding && housecount > 0 && wordflag)
                {

                    wordflag = false;
                    StartCoroutine("Wordtimer");

                    if(serverWord[1].receivedNum == 1)
                    {
                        
                        for(int i = 0; i < word1.Length ; i ++)
                        {
                            float houseoffset = Random.Range(0, offset*30);
                            int id = nearest.closestbuildinglo.transform.GetSiblingIndex();
                            buildarray[(int)buildarraytemp[id].x,(int)buildarraytemp[id].y] = 0;
                            buildarraytemp.RemoveAt(id);
                            if(nearest.closestbuildinglo.tag == "building" || nearest.closestbuildinglo.tag == "buildinglo")
                                Destroy(nearest.closestbuildinglo);
                            housecount--;
                            GameObject wordtemp = Instantiate(word1[i],new Vector3( nearest.closestbuildinglo.transform.position.x, nearest.closestbuildinglo.transform.position.y + houseoffset ,nearest.closestbuildinglo.transform.position.z) , Quaternion.identity, parentcanvas);
                            wordtemp.transform.Rotate(wordrotate);
                        } 
                    }
                    if(serverWord[1].receivedNum == 2)
                    {
                        
                        for(int i = 0; i < word2.Length ; i ++)
                        {
                            float houseoffset = Random.Range(0, offset*30);
                            int id = nearest.closestbuildinglo.transform.GetSiblingIndex();
                            buildarray[(int)buildarraytemp[id].x,(int)buildarraytemp[id].y] = 0;
                            buildarraytemp.RemoveAt(id);
                            if(nearest.closestbuildinglo.tag == "building" || nearest.closestbuildinglo.tag == "buildinglo")
                                Destroy(nearest.closestbuildinglo);
                            housecount--;
                            GameObject wordtemp = Instantiate(word2[i],new Vector3( nearest.closestbuildinglo.transform.position.x, nearest.closestbuildinglo.transform.position.y + houseoffset ,nearest.closestbuildinglo.transform.position.z) , Quaternion.identity, parentcanvas);
                            wordtemp.transform.Rotate(wordrotate);
                        } 
                    }
                    if(serverWord[1].receivedNum == 3)
                    {
                        
                        for(int i = 0; i < word3.Length ; i ++)
                        {
                            float houseoffset = Random.Range(0, offset*30);
                            int id = nearest.closestbuildinglo.transform.GetSiblingIndex();
                            buildarray[(int)buildarraytemp[id].x,(int)buildarraytemp[id].y] = 0;
                            buildarraytemp.RemoveAt(id);
                            if(nearest.closestbuildinglo.tag == "building" || nearest.closestbuildinglo.tag == "buildinglo")
                                Destroy(nearest.closestbuildinglo);
                            housecount--;
                            GameObject wordtemp = Instantiate(word3[i],new Vector3( nearest.closestbuildinglo.transform.position.x, nearest.closestbuildinglo.transform.position.y + houseoffset ,nearest.closestbuildinglo.transform.position.z) , Quaternion.identity, parentcanvas);
                            wordtemp.transform.Rotate(wordrotate);
                        } 
                    }

                }
                
                else if(nearest.closestbuilding && housecount == 0 && wordflag)
                {

                    wordflag = false;
                    StartCoroutine("Wordtimer");

                    if(serverWord[1].receivedNum == 1)
                    {
                        
                        for(int i = 0; i < word1.Length ; i ++)
                        {
                            float houseoffset = Random.Range(0, offset*30);
                            if(nearest.closestbuildinglo.tag == "building" || nearest.closestbuildinglo.tag == "buildinglo")
                                Destroy(nearest.closestbuildinglo);
                            //GameObject wordtemp = Instantiate(word1[i],new Vector3( nearest.closestbuildinglo.transform.position.x, nearest.closestbuildinglo.transform.position.y + houseoffset ,nearest.closestbuildinglo.transform.position.z) , Quaternion.identity, parentcanvas);
                            //wordtemp.transform.Rotate(wordrotate);
                        } 
                    }
                    if(serverWord[1].receivedNum == 2)
                    {
                        
                        for(int i = 0; i < word2.Length ; i ++)
                        {
                            float houseoffset = Random.Range(0, offset*30);
                            if(nearest.closestbuildinglo.tag == "building" || nearest.closestbuildinglo.tag == "buildinglo")
                                Destroy(nearest.closestbuildinglo);
                            //GameObject wordtemp = Instantiate(word2[i],new Vector3( nearest.closestbuildinglo.transform.position.x, nearest.closestbuildinglo.transform.position.y + houseoffset ,nearest.closestbuildinglo.transform.position.z) , Quaternion.identity, parentcanvas);
                            //wordtemp.transform.Rotate(wordrotate);
                        } 
                    }
                    if(serverWord[1].receivedNum == 3)
                    {
                        
                        for(int i = 0; i < word3.Length ; i ++)
                        {
                            float houseoffset = Random.Range(0, offset*30);
                            if(nearest.closestbuildinglo.tag == "building" || nearest.closestbuildinglo.tag == "buildinglo")
                                Destroy(nearest.closestbuildinglo);
                            //GameObject wordtemp = Instantiate(word3[i],new Vector3( nearest.closestbuildinglo.transform.position.x, nearest.closestbuildinglo.transform.position.y + houseoffset ,nearest.closestbuildinglo.transform.position.z) , Quaternion.identity, parentcanvas);
                            //wordtemp.transform.Rotate(wordrotate);
                        } 
                    }

                }
            }
        }

    }


    IEnumerator Fishtimer()
    {
        yield return new WaitForSeconds(0.7f);
        fishflag = true;
    }
    IEnumerator Housetimer()
    {
        yield return new WaitForSeconds(0.5f);
        houseflag = true;
    }
    IEnumerator Bubbletimer()
    {
        yield return new WaitForSeconds(0.3f);
        bubbletimerflag = true;
    }
    IEnumerator Wordtimer()
    {
        yield return new WaitForSeconds(0.1f);
        wordflag = true;
    }

    void OnDrawGizmosSelected()
    {
        // Draw a semitransparent red cube at the transforms position
        Gizmos.color = new Color(1, 0, 0, 0.5f);
        Gizmos.DrawCube(pos.position + new Vector3((x-1)*k/2, 0, (z-1)*k/2) , new Vector3(x*k, 1, z*k));
    }
}