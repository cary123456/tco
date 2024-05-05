using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class midtri : MonoBehaviour
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
                    if (players.Length > 1)
                    {

                        players[1].GetComponent<valuerecueve>().housevalue = true;
                        onetimetrigger = true;
                    }
                }
                holdruntime = holdtime;
            }
            holdruntime += Time.deltaTime;
        }
        

    }
    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "midfinger" )
        {
            if (allow)
            {
                allowtrigger = true;
                this.gameObject.transform.GetChild(0).gameObject.GetComponent<MeshRenderer>().material.color = new Color(0f, 1f, 0f, 0.34f);
                other.gameObject.transform.GetChild(0).gameObject.GetComponent<MeshRenderer>().material.color = new Color(0f, 1f, 0f, 0.34f);
            }
            
        }


    }
    void OnTriggerStay(Collider other)
    {

        if (other.tag == "midfinger")
        {
            colddownruntime = 0;
        }
    }
    void OnTriggerExit(Collider other)
    {
        if (other.tag == "midfinger" || (gesture.GetComponent<GestureDetector>().gesturesnumber == 0 || gesture.GetComponent<LGestureDetector>().gesturesnumber == 0))
        {
            colddownruntime = 0;
            holdruntime = 0;
            onetimetrigger = false;
            allowtrigger = false;
            if (players.Length > 1)
            {
                this.gameObject.transform.GetChild(0).gameObject.GetComponent<MeshRenderer>().material.color = new Color(1f, 0f, 0f, 0.34f);
                other.gameObject.transform.GetChild(0).gameObject.GetComponent<MeshRenderer>().material.color = new Color(1f, 0f, 0f, 0.34f);
                players[1].GetComponent<valuerecueve>().housevalue = false;
                allow = false;
            }
        }
        


    }
}
