using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fishmantrigger : MonoBehaviour
{
    public GameObject gesture;
    public GameObject[] players;
    public bool allowtrigger;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        players = GameObject.FindGameObjectsWithTag("Player");
    }
    void OnTriggerEnter(Collider other)
    {
        if (allowtrigger)
        {
            if (other.tag == "thumb" && gesture.GetComponent<GestureDetector>().gesturesnumber == 5 && gesture.GetComponent<LGestureDetector>().gesturesnumber == 5)
            {
                if (players.Length > 1)
                {

                    players[1].GetComponent<valuerecueve>().fishmanvalue = true;

                }

            }
        }
        if (other.tag == "fishtrigger" )
        {
            if (players.Length > 1)
            {
                players[1].GetComponent<valuerecueve>().fishvalue += 1;
                
                other.gameObject.transform.GetChild(0).gameObject.GetComponent<MeshRenderer>().material.color = new Color(0f, 1f, 0f, 0.34f);
            }
            
            
        }

    }

}
