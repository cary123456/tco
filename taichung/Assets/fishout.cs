using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class fishout : MonoBehaviour
{
    public GameObject hotkey;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
    public void visable()
    {
        this.gameObject.SetActive(false);
        this.gameObject.GetComponent<Animator>().SetBool("out", false);
        hotkey.GetComponent<hotkey>().fishcount = 0;
    }
}
