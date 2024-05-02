using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class followlerp : MonoBehaviour
{
    public GameObject target;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        if (target.activeSelf == false)
        {
            this.gameObject.GetComponent<MeshRenderer>().enabled = false;
            this.gameObject.transform.GetChild(0).GetComponent<MeshRenderer>().enabled = false;
            Debug.Log("true");
        }
        else
        {
            this.gameObject.GetComponent<MeshRenderer>().enabled = true;
            this.transform.position = Vector3.Lerp(this.transform.position, target.transform.position, 0.05f);

        }
       
        
        
    }
}
