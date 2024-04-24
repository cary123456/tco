using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class handpartrack : MonoBehaviour
{
    public GameObject Rhand;
    public GameObject Lhand;
    public bool R;
    // Start is called before the first frame update
    void Start()
    {
        Rhand = GameObject.FindGameObjectWithTag("Rhand");
        Lhand = GameObject.FindGameObjectWithTag("hand");
    }

    // Update is called once per frame
    void Update()
    {
        if (R)
        {
            this.transform.position = Vector3.Lerp(this.transform.position, Rhand.transform.position, 0.05f);
        }
        else
        {
            this.transform.position = Vector3.Lerp(this.transform.position, Lhand.transform.position, 0.05f);
        }

    }
}
