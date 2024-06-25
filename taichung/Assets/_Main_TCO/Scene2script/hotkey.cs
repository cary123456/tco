using System.Collections;
using System.Collections.Generic;
using System.Net.Sockets;
using UnityEngine;
using UnityEngine.SceneManagement;
public class hotkey : MonoBehaviour
{
    public GameObject crab;
    public KeyCode crabkey;
    public GameObject crabposition;
    public GameObject crabmanager;
    public GameObject[] crabs;
    public GameObject[] crabb;
    public dynamicGeneration SummonCrabs;
    public bool crabfollow;
    public bool onetime;
    public int crabcount;
    public GameObject headset;
    public GameObject raycast;
    public GameObject VRcam;
    public GameObject maincamera;
    public GameObject fadeui;
    private int lookcount;
    public GameObject Rvfx;
    public GameObject Lvfx;
    public GameObject RLine;
    public GameObject LLine;
    public int vfxcount;
    public GameObject mainncamera;
    public GameObject[] player;
    public GameObject fish;
    public GameObject fish2;
    public GameObject fish3;
    public GameObject fishflok;
    public GameObject fishflok2;
    public GameObject fishflok3;
    public GameObject fishflok4;
    public int fishcount;
    public bool fishbool;
    public GameObject staw;
    public GameObject staw_2;
    public GameObject back;
    public GameObject bubblebackup;
    public int bubblecount;
    public GameObject bubble;
    public int lookatcount;
    bool stawflag = false;
    bool stawflag_2 = false;
    public GameObject center;
    public bool growbool;
    public float growruntime;
    public float growtime;
    public GameObject target;



    // Start is called before the first frame update
    void Start()
    {
        crabcount = -1;

    }

    // Update is called once per frame
    void Update()
    {
        crabs = GameObject.FindGameObjectsWithTag("crab");
        player = GameObject.FindGameObjectsWithTag("Player");

        if (Input.GetKeyDown(crabkey))
        {
            crabfollow = true;
            //Instantiate(crab,headset.transform.position , Quaternion.Euler(new Vector3(0, 0, 0)));
            //Instantiate(crab, new Vector3(crabposition.transform.position.x + Random.Range(-4.5f, 4.5f), crabposition.transform.position.y , crabposition.transform.position.z + Random.Range(-2.5f, 2.5f)), Quaternion.Euler(new Vector3(0, 0, 0)));


        }
        if (Input.GetKeyUp(crabkey))
        {
            crabfollow = false;
             //Instantiate(crab,headset.transform.position , Quaternion.Euler(new Vector3(0, 0, 0)));
            //Instantiate(crab, new Vector3(crabposition.transform.position.x + Random.Range(-4.5f, 4.5f), crabposition.transform.position.y , crabposition.transform.position.z + Random.Range(-2.5f, 2.5f)), Quaternion.Euler(new Vector3(0, 0, 0)));


        }
        if (crabfollow)
        {
            if (!onetime)
            {
                onetime = true;
                GameObject[] crabs = SummonCrabs.SummonCrab();
                crabb = crabs;
            }
            // for (int i = 0; i < crabb.Length; i++)
            // {
            //     //crabb[i].transform.position = Vector3.Lerp(crabb[i].transform.position, headset.transform.position, 0.05f);     //Every summoned crabs can follow
            // }
        }
        else
        {
            onetime = false;
            crabfollow = false;
            SummonCrabs.crabb.Clear();
        }



        if (Input.GetKeyDown(KeyCode.Alpha3))
        {
            if (GameObject.FindWithTag("crab") != null)
            {
                Destroy(GameObject.FindWithTag("crab"));
            }
            
        }

        if (Input.GetKeyDown(KeyCode.Alpha5))
        {
            if(staw != null)
            {
                stawflag = !stawflag;
                staw.GetComponent<Animator>().SetBool("up",stawflag);  
                //staw.GetComponent<Animator>().SetBool("down",false);              
            }
        }
        if (Input.GetKeyDown(KeyCode.Alpha6))
        {
            if(staw != null)
            {
                stawflag_2 = !stawflag_2;
                staw_2.GetComponent<Animator>().SetBool("up",stawflag_2); 
                //staw.GetComponent<Animator>().SetBool("down",true);              
            }
        }
        if (Input.GetKeyDown(KeyCode.Alpha7))
        {
            bubblecount += 1;
            if(bubblecount > 1)
            {
                bubblecount = 0;
            }
        }
        if(bubblecount == 1)
        {
            if(bubblebackup != null && bubble !=null)
            {
                bubblebackup.GetComponent<UDPBroadcastReceiver>().enabled = false;
                Vector3 pos = Camera.main.WorldToScreenPoint(bubble.transform.position);
                //讓滑鼠的螢幕坐标的Z軸等于目前物體的螢幕坐标的Z軸，也就是相隔的距離
                Vector3 m_MousePos = new Vector3(Input.mousePosition.x, Input.mousePosition.y, pos.z);
                //将正确的滑鼠螢幕坐标換成世界坐标交給物體
                bubble.transform.position =  Vector3.Lerp(bubble.transform.position, Camera.main.ScreenToWorldPoint(m_MousePos), 0.02f); 

            }
           
        }
        if(bubblecount == 0)
        {
            if(bubblebackup != null )
            {
                bubblebackup.GetComponent<UDPBroadcastReceiver>().enabled = true;
                 //首先擷取到目前物體的螢幕坐标

            }
            
        }
        if (Input.GetKeyDown(KeyCode.Space))
        {
            
            fadeui.GetComponent<Animator>().enabled = true;
            fadeui.GetComponent<Animator>().SetBool("fadein", true);
            fadeui.GetComponent<Animator>().SetBool("fadeout", false);
            
        }
        if (Input.GetKeyDown(KeyCode.N))
        {
            
            fadeui.GetComponent<Animator>().SetBool("fadeout",true);
            fadeui.GetComponent<Animator>().SetBool("fadein", false);        
        }


        if (Input.GetKeyDown(KeyCode.V))
        {
            vfxcount += 1;
            if(vfxcount > 1)
            {
                vfxcount = 0;
            }
        }
        if(vfxcount == 0)
        {
            if (Rvfx != null)
            {
                Rvfx.GetComponent<Animator>().SetBool("off", false);
                Rvfx.GetComponent<Animator>().SetBool("on", true);

            }
            if(RLine != null)
            {
                RLine.SetActive(false);
            }
            if(LLine != null)
            {
                LLine.SetActive(false);
            }
            if (Lvfx != null)
            {
                Lvfx.GetComponent<Animator>().SetBool("off", false);
                Lvfx.GetComponent<Animator>().SetBool("on", true);
                
            }
        }
        if (vfxcount == 1)
        {
            if(Rvfx != null)
            {
                Rvfx.GetComponent<Animator>().SetBool("off", true);
                Rvfx.GetComponent<Animator>().SetBool("on", false);
            }
            
            if(Lvfx != null)
            {
                Lvfx.GetComponent<Animator>().SetBool("off",true);
                Lvfx.GetComponent<Animator>().SetBool("on", false);
            }
             if(RLine != null)
            {
                RLine.SetActive(true);
            }
            if(LLine != null)
            {
                LLine.SetActive(true);
            }
            
        }

        if (Input.GetKeyDown(KeyCode.Z))
        {
            growbool = true;
        }
        if(growbool)
        {
            if(growruntime >= growtime)
            {
                if (headset.GetComponent<nearest>().closestbuilding.GetComponent<growvalue>() != null && headset.GetComponent<nearest>().closestbuilding != null)
                {
                
                    headset.GetComponent<nearest>().closestbuilding.GetComponent<growvalue>().grow = true;
                    growruntime = 0;
                }
            }
            growruntime += Time.deltaTime;
        }
        if(headset != null)
        {
            if(headset.GetComponent<nearest>().allbuildings.Length == 0)
            {
                growbool = false;
            }
        }
        
        if (Input.GetKeyDown(KeyCode.L))
        {
            target.GetComponent<Animator>().enabled = true;
            target.GetComponent<Animator>().SetBool("around",true);
        }
        if (Input.GetKeyUp(KeyCode.L))
        {
            target.GetComponent<Animator>().SetBool("around",false);
        }
        if (Input.GetKeyDown(KeyCode.F))
        {
            if(fishbool == false)
            {
                fishcount += 1;
                fishbool = true;
            }
            fishbool = false;
            
        }
        if(fishcount == 1)
        {
            fish.SetActive(true);
        }
        if(fishcount == 2)
        {
            fish2.SetActive(true);
        }
        if (fishcount == 3)
        {
            fish3.SetActive(true);
        }
        if (fishcount >= 4)
        {
            fish.GetComponent<Animator>().SetBool("out", true);
            fish2.GetComponent<Animator>().SetBool("out", true);
            fish3.GetComponent<Animator>().SetBool("out", true);

        }
        
        if (Input.GetKey(KeyCode.Escape))
        {
            if(player.Length > 0)
            {
                player[0].GetComponent<valuerecueve>().ballvalue = false;
            }
            if(player.Length > 0)
            {
                player[0].GetComponent<valuerecueve>().destoryvalue = true;
            }
            if (GameObject.FindWithTag("crab") != null)
            {
                Destroy(GameObject.FindWithTag("crab"));
            }
            if (GameObject.FindWithTag("crabs") != null)
            {
                Destroy(GameObject.FindWithTag("crabs"));
            }
            if (GameObject.FindWithTag("crabsed") != null)
            {
                Destroy(GameObject.FindWithTag("crabsed"));
            }
            if (GameObject.FindWithTag("building") != null)
            {
                Destroy(GameObject.FindWithTag("building"));
            }
            if (GameObject.FindWithTag("ball") != null)
            {
                Destroy(GameObject.FindWithTag("ball"));
            }
            if (GameObject.FindWithTag("buildinglo") != null)
            {
                Destroy(GameObject.FindWithTag("buildinglo"));
            }
            if (GameObject.FindWithTag("word") != null)
            {
                Destroy(GameObject.FindWithTag("word"));
            }
            if(fish != null)
            {
                fish.SetActive(false);
            }
            
 
            
        }
        if (Input.GetKeyUp(KeyCode.F1))
        {
            SceneManager.LoadScene("chapter4");
        }
        if (Input.GetKeyUp(KeyCode.Escape))
        {
            if (player.Length > 0)
            {
                player[0].GetComponent<valuerecueve>().destoryvalue = false;
            }
        }

    }
}
