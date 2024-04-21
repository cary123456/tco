using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class crabgen : MonoBehaviour
{
    public GameObject gesture;
    public GameObject[] players;
    public float holdruntime;
    public float holdtime;
    public float colddownruntime;
    public float colddowntime;
    public bool trigger;
    public bool onetimetrigger;
    public bool allow;
    // Start is called before the first frame update
    void Start()
    {
        //gesture = GameObject.Find("Gesture Detection");

    }

    // Update is called once per frame
    void Update()
    {
        players = GameObject.FindGameObjectsWithTag("Player");

        if(colddownruntime >= colddowntime)
        {
            colddownruntime = colddowntime;
            allow = true;
        }
        colddownruntime += Time.deltaTime;
        if (trigger)
        {
            if (holdruntime >= holdtime)
            {
                if (onetimetrigger == false)
                {
                    players[1].GetComponent<valuerecueve>().boolvalue = true;
                    Debug.Log("crab");
                    onetimetrigger = true;
                }
                holdruntime = holdtime;
            }
            holdruntime += Time.deltaTime;
        }

    }
    void OnTriggerEnter(Collider other)
    {
       
        if (other.tag == "thumb" && (gesture.GetComponent<GestureDetector>().gesturesnumber == 2 || gesture.GetComponent<LGestureDetector>().gesturesnumber == 2))
        {

            if (allow)
            {
                trigger = true;
                this.gameObject.transform.GetChild(0).gameObject.GetComponent<MeshRenderer>().material.color = new Color(0f, 1f, 0f, 0.34f);
                other.gameObject.transform.GetChild(0).gameObject.GetComponent<MeshRenderer>().material.color = new Color(0f, 1f, 0f, 0.34f);
            }

        }

    }

    void OnTriggerStay(Collider other)
    {

        if (other.tag == "thumb")
        {
            colddownruntime = 0;
        }
    }
    void OnTriggerExit(Collider other)
    {
        
        if (other.tag == "thumb")
        {
            colddownruntime = 0;

            if (players.Length > 1)
            {
                this.gameObject.transform.GetChild(0).gameObject.GetComponent<MeshRenderer>().material.color = new Color(1f, 0f, 0f, 0.34f);
                other.gameObject.transform.GetChild(0).gameObject.GetComponent<MeshRenderer>().material.color = new Color(1f, 0f, 0f, 0.34f);
                holdruntime = 0;
                players[1].GetComponent<valuerecueve>().boolvalue = false;
                onetimetrigger = false;
                trigger = false;
                allow = false;

            }
        }
    }
    
}
