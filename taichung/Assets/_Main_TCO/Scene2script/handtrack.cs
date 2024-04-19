using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class handtrack : MonoBehaviour
{
    public GameObject thumbR;
    public bool follow;
    // Start is called before the first frame update
    void Start()
    {
        thumbR = GameObject.FindGameObjectWithTag("Rhand");
    }

    // Update is called once per frame
    void Update()
    {
        if (follow)
        {
            this.transform.position = Vector3.Lerp(this.transform.position, thumbR.transform.position, 0.05f);
        }
        
    }
}
