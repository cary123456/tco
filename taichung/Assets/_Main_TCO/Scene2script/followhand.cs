using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class followhand : MonoBehaviour
{
    // Start is called before the first frame update
    public Transform hand;
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        this.transform.position = hand.position;
        this.transform.rotation = hand.rotation;
    }
}
