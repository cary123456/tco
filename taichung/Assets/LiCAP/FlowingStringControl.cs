using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.VFX;

public class FlowingStringControl : MonoBehaviour
{
    //VisualEffect vfxPack;

    [SerializeField]
    int _chID = 0;
    public int chID
    {
        get { return _chID; }
        set { _chID = value; }
    }

    [SerializeField]
    float _chOn0 = 0;
    public float chOn0
    {
        get { return _chOn0; }
        set { _chOn0 = value; }
    }

    [SerializeField]
    float _chOn1 = 0;
    public float chOn1
    {
        get { return _chOn1; }
        set { _chOn1 = value; }
    }

    [SerializeField]
    float _chOn2 = 0;
    public float chOn2
    {
        get { return _chOn2; }
        set { _chOn2 = value; }
    }

    [SerializeField]
    float _chOn3 = 0;
    public float chOn3
    {
        get { return _chOn3; }
        set { _chOn3 = value; }
    }


    // Start is called before the first frame update
    void Start()
    {
         //DontDestroyOnLoad(this.gameObject);
        //vfxPack = GetComponent<VisualEffect>();
    }

    // Update is called once per frame
    void Update()
    {
    
    }
}
