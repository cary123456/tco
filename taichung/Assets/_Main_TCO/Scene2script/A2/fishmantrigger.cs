using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fishmantrigger : MonoBehaviour
{
    public GameObject gesture;
    public GameObject[] players;
    public float holdtime;
    public float holdruntime;
    public bool allowtrigger;
    public float colddownruntime;
    public float colddowntime;
    public bool onetimetrigger;
    public bool allow;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        players = GameObject.FindGameObjectsWithTag("Player");
        if (colddownruntime >= colddowntime)
        {
            colddownruntime = colddowntime;
            allow = true;
        }
        colddownruntime += Time.deltaTime;
        if (allowtrigger)
        {
            if (holdruntime >= holdtime)
            {
                if (onetimetrigger == false)
                {
                    players[1].GetComponent<valuerecueve>().fishmanvalue = false;
                    onetimetrigger = true;
                }
                holdruntime = holdtime;
            }
            holdruntime += Time.deltaTime;
        }
    }
    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "thumb" && (gesture.GetComponent<GestureDetector>().gesturesnumber == 3 || gesture.GetComponent<LGestureDetector>().gesturesnumber == 3))
        {
            if (allow)
            {
                allowtrigger = true;
                if (players.Length > 1)
                {

                    players[1].GetComponent<valuerecueve>().fishmanvalue = true;
                    
                }
                this.gameObject.transform.GetChild(0).gameObject.GetComponent<MeshRenderer>().material.color = new Color(0f, 1f, 0f, 0.34f);
                other.gameObject.transform.GetChild(0).gameObject.GetComponent<MeshRenderer>().material.color = new Color(0f, 1f, 0f, 0.34f);
            }

        }


    }
    void OnTriggerExit(Collider other)
    {
        if (other.tag == "thumb")
        {
            colddownruntime = 0;
            holdruntime = 0;
            onetimetrigger = false;
            allowtrigger = false;
            if (players.Length > 1)
            {
                this.gameObject.transform.GetChild(0).gameObject.GetComponent<MeshRenderer>().material.color = new Color(1f, 0f, 0f, 0.34f);
                other.gameObject.transform.GetChild(0).gameObject.GetComponent<MeshRenderer>().material.color = new Color(1f, 0f, 0f, 0.34f);
                
                allow = false;
            }
        }



    }

}
