using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class midtri : MonoBehaviour
{
    public GameObject gesture;
    public GameObject[] players;
    public float colddowntime;
    public float runtime;
    public bool allowtrigger;
    public bool onetimetrigger;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        players = GameObject.FindGameObjectsWithTag("Player");
        if (allowtrigger)
        {
            if (runtime >= colddowntime)
            {
                if (onetimetrigger == false)
                {
                    if (players.Length > 1)
                    {

                        players[1].GetComponent<valuerecueve>().housevalue = true;
                        onetimetrigger = true;
                    }
                }
                runtime = colddowntime;
            }
            runtime += Time.deltaTime;
        }
        

    }
    void OnTriggerEnter(Collider other)
    {
        if (other.tag == "midfinger" && gesture.GetComponent<GestureDetector>().gesturesnumber == 1 && gesture.GetComponent<LGestureDetector>().gesturesnumber == 1)
        {
            allowtrigger = true;
            this.gameObject.transform.GetChild(0).gameObject.GetComponent<MeshRenderer>().material.color = new Color(0f, 1f, 0f, 0.34f);
            other.gameObject.transform.GetChild(0).gameObject.GetComponent<MeshRenderer>().material.color = new Color(0f, 1f, 0f, 0.34f);
        }


    }
    void OnTriggerExit(Collider other)
    {
        if (other.tag == "midfinger")
        {
            runtime = 0;
            onetimetrigger = false;
            allowtrigger = false;
            if (players.Length > 1)
            {
                this.gameObject.transform.GetChild(0).gameObject.GetComponent<MeshRenderer>().material.color = new Color(1f, 0f, 0f, 0.34f);
                other.gameObject.transform.GetChild(0).gameObject.GetComponent<MeshRenderer>().material.color = new Color(1f, 0f, 0f, 0.34f);
                players[1].GetComponent<valuerecueve>().housevalue = false;
                
            }
        }
        


    }
}
