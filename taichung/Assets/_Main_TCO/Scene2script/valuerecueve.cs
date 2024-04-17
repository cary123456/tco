using Unity.Netcode;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine.VFX;

public class valuerecueve : NetworkBehaviour
{
    [SerializeField]
    private NetworkVariable<bool> seeornot = new NetworkVariable<bool>();
    [SerializeField]
    private NetworkVariable<bool> housetri = new NetworkVariable<bool>();
    [SerializeField]
    private NetworkVariable<bool> fishmantri = new NetworkVariable<bool>();
    [SerializeField]
    private NetworkVariable<int> handRvalue = new NetworkVariable<int>();
    [SerializeField]
    private NetworkVariable<int> handLvalue = new NetworkVariable<int>();
    [SerializeField]
    private NetworkVariable<float> handRx = new NetworkVariable<float>();
    [SerializeField]
    private NetworkVariable<float> handRy = new NetworkVariable<float>();
    [SerializeField]
    private NetworkVariable<float> handRz = new NetworkVariable<float>();
    [SerializeField]
    private NetworkVariable<float> handLx = new NetworkVariable<float>();
    [SerializeField]
    private NetworkVariable<float> handLy = new NetworkVariable<float>();
    [SerializeField]
    private NetworkVariable<float> handLz = new NetworkVariable<float>();
    [SerializeField]
    private NetworkVariable<float> headx = new NetworkVariable<float>();
    [SerializeField]
    private NetworkVariable<float> heady = new NetworkVariable<float>();
    [SerializeField]
    private NetworkVariable<float> headz = new NetworkVariable<float>();

    [SerializeField]
    private NetworkVariable<float> handRrox = new NetworkVariable<float>();
    [SerializeField]
    private NetworkVariable<float> handRroy = new NetworkVariable<float>();
    [SerializeField]
    private NetworkVariable<float> handRroz = new NetworkVariable<float>();
    [SerializeField]
    private NetworkVariable<float> handLrox = new NetworkVariable<float>();
    [SerializeField]
    private NetworkVariable<float> handLroy = new NetworkVariable<float>();
    [SerializeField]
    private NetworkVariable<float> handLroz = new NetworkVariable<float>();


    //public GameObject[] center;
    public List<GameObject> center = new List<GameObject>();
    //public GameObject center;
    public GameObject[] centerarray;
    public bool onetime;
    public bool onetime2;


    public bool boolvalue;
    public bool housevalue;
    public bool fishmanvalue;
    public int intvalue;
    public int intLvalue;
    public int ranvalue;
    public float handRxvalue;
    public float handRyvalue;
    public float handRzvalue;
    public float handLxvalue;
    public float handLyvalue;
    public float handLzvalue;
    public float headxvalue;
    public float headyvalue;
    public float headzvalue;
    public float handRroxvalue;
    public float handRroyvalue;
    public float handRrozvalue;
    public float handLroxvalue;
    public float handLroyvalue;
    public float handLrozvalue;

    public bool netbool;
    public bool nethousebool;
    public bool netfishmanbool;
    public float nethandRx;
    public float nethandRy;
    public float nethandRz;
    public float nethandLx;
    public float nethandLy;
    public float nethandLz;
    public float netheadx;
    public float netheady;
    public float netheadz;
    public float nethandRrox;
    public float nethandRroy;
    public float nethandRroz;
    public float nethandLrox;
    public float nethandLroy;
    public float nethandLroz;
    public int netint;
    public int netLint;


    public bool oldinput;
    public bool oldhouseinput;
    public bool oldfishmaninput;
    public int oldintinput;
    public int oldintLinput;
    public float oldhandRx;
    public float oldhandRy;
    public float oldhandRz;
    public float oldhandLx;
    public float oldhandLy;
    public float oldhandLz;
    public float oldheadx;
    public float oldheady;
    public float oldheadz;
    public float oldhandRrox;
    public float oldhandRroy;
    public float oldhandRroz;
    public float oldhandLrox;
    public float oldhandLroy;
    public float oldhandLroz;

    public GameObject building;
    public GameObject lefthand;
    public GameObject righthand;
    public GameObject crab;
    public List<GameObject> crabs = new List<GameObject>();
    public int crabsamount;
    public bool onetimetrigger;
    public GameObject crabman;
    public GameObject crabb;

    
    public float runtime;
    public float litime;

    public bool countone;
    public GameObject[] mid;
    public GameObject cam;
    public GameObject ui;
    public GameObject headset;
    public GameObject Rray;
    public GameObject Lray;
    public bool buildR;
    public bool buildL;
    public GameObject uiman;
    
    // Start is called before the first frame update
    void Start()
    {

        //center = GameObject.Find("center");
        cam = GameObject.FindGameObjectWithTag("fishmanager");
        crabman = GameObject.FindGameObjectWithTag("crabman");
        building = GameObject.FindGameObjectWithTag("build");
        mid = GameObject.FindGameObjectsWithTag("midfinger");
        headset = GameObject.FindGameObjectWithTag("headset");
        ui = GameObject.FindGameObjectWithTag("start");
        lefthand = GameObject.FindGameObjectWithTag("hand");
        righthand = GameObject.FindGameObjectWithTag("Rhand");
       
        Rray = GameObject.FindGameObjectWithTag("Rray");
        Lray = GameObject.FindGameObjectWithTag("Lray");
        uiman = GameObject.FindGameObjectWithTag("uiman");
    }

    // Update is called once per frame
    void Update()
    {
        
        if(handRvalue.Value == 6)
        {
            ui.GetComponent<Animator>().enabled = true;
        }

        
        if (IsServer)
        {
            UpdateServer();
        }
        if (IsClient && IsOwner)
        {
            ClientInput();
        }

        if(righthand.GetComponent<handposition>().player.Length > 1)
        {
            if (this.gameObject == righthand.GetComponent<handposition>().player[1])
            {
                righthand.transform.position = new Vector3(handRx.Value, handRy.Value, handRz.Value);
            }
        }
        if (lefthand.GetComponent<handposition>().player.Length > 1)
        {
            if (this.gameObject == lefthand.GetComponent<handposition>().player[1])
            {
                lefthand.transform.position = new Vector3(handLx.Value, handLy.Value, handLz.Value);
            }
        }
        if (headset.GetComponent<handposition>().player.Length > 1)
        {
            if (this.gameObject == headset.GetComponent<handposition>().player[1])
            {
                headset.transform.position = new Vector3(headx.Value, heady.Value, headz.Value);
            }
        }
        if (righthand.GetComponent<handposition>().player.Length > 1)
        {
            if (this.gameObject == righthand.GetComponent<handposition>().player[1])
            {
                righthand.transform.rotation = Quaternion.Euler(handRrox.Value, handRroy.Value, handRroz.Value);

            }
        }
        if (lefthand.GetComponent<handposition>().player.Length > 1)
        {
            if (this.gameObject == lefthand.GetComponent<handposition>().player[1])
            {
                lefthand.transform.rotation = Quaternion.Euler(handLrox.Value, handLroy.Value, handLroz.Value);
            }
        }

        if (seeornot.Value)
        {
            if (!onetimetrigger)
            {
                GameObject crabs =  Instantiate(crab, righthand.transform.position, Quaternion.Euler(new Vector3(0, 180, 180)));
                crabb = crab;
                if(uiman.GetComponent<UIManager>().VR == true)
                {
                    crabs.GetComponent<VisualEffect>().enabled = false;
                    crabs.transform.GetChild(0).gameObject.SetActive(true);
                }
                onetimetrigger = true;
            }
            crabb.transform.position = Vector3.Lerp(crabb.transform.position,new Vector3(righthand.transform.position.x, righthand.transform.position.y, righthand.transform.position.z), 0.05f);
        }
        else
        {
            onetimetrigger = false;
            crabb = null;
        }

        if (housetri.Value)
        {
            if (!onetime)
            {
                if (headset.GetComponent<nearest>().closestEnemy.GetComponent<crabmove>() != null || headset.GetComponent<nearest>().closestEnemy != null)
                {
                    headset.GetComponent<nearest>().closestEnemy.GetComponent<crabmove>().move = true;

                }
                onetime = true;
            }
                     
        }
        else
        {
            onetime = false;
        }

        if(handRvalue.Value == 3)
        {
            
            if (buildR)
            {
                if(Rray.GetComponent<raycast>().build != null)
                {
                    Rray.GetComponent<raycast>().build.GetComponent<growvalue>().grow = true;
                }
                
                buildR = false;
            }
            
        }
        if (handRvalue.Value == 4)
        {
            buildR = true;
        }
        if (handLvalue.Value == 3)
        {        
            if (buildL)
            {
                if(Lray.GetComponent<raycast>().build != null)
                {
                    Lray.GetComponent<raycast>().build.GetComponent<growvalue>().grow = true;
                }
                
                buildL = false;
            }

        }
        if (handLvalue.Value == 4)
        {
            buildL = true;
        }


    }
    private void UpdateServer()
    {
        netbool = seeornot.Value;
        nethousebool = housetri.Value;
        netfishmanbool = fishmantri.Value;
        netint = handRvalue.Value;
        nethandRx = handRx.Value;
        nethandRy = handRy.Value;
        nethandRz = handRz.Value;
        nethandLx = handLx.Value;
        nethandLy = handLy.Value;
        nethandLz = handLz.Value;
        netheadx = headx.Value;
        netheady = heady.Value;
        netheadz = headz.Value;
        nethandRrox = handRrox.Value;
        nethandRroy = handRroy.Value;
        nethandRroz = handRroz.Value;
        nethandLrox = handLrox.Value;
        nethandLroy = handLroy.Value;
        nethandLroz = handLroz.Value;


    }

    public void ClientInput()
    {
        if (oldinput != boolvalue || oldhouseinput != housevalue || oldfishmaninput != fishmanvalue || oldintinput != intvalue || oldintLinput != intLvalue || oldhandRx != handRxvalue || oldhandRy != handRyvalue || oldhandRz != handRzvalue 
            || oldhandLx != handLxvalue || oldhandLy != handLyvalue || oldhandLz != handLzvalue || oldheadx != headxvalue || oldheady != headyvalue || oldheadz != headzvalue || oldhandRrox != handRroxvalue || oldhandRroy != handRroyvalue || oldhandRroz != handRrozvalue ||
           oldhandLrox != handLroxvalue || oldhandLroy != handLroyvalue || oldhandLroz != handLrozvalue )
        {
            oldinput = boolvalue;
            oldhouseinput = housevalue;
            oldfishmaninput = fishmanvalue;
            oldintinput = intvalue;
            oldintLinput = intLvalue;
            oldhandRx = handRxvalue;
            oldhandRy = handRyvalue;
            oldhandRz = handRzvalue;
            oldhandLx = handLxvalue;
            oldhandLy = handLyvalue;
            oldhandLz = handLzvalue;
            oldheadx = headxvalue;
            oldheady = headyvalue;
            oldheadz = headzvalue;
            oldhandRrox = handRroxvalue;
            oldhandRroy = handRroyvalue;
            oldhandRroz = handRrozvalue;
            oldhandLrox = handLroxvalue;
            oldhandLroy = handLroyvalue;
            oldhandLroz = handLrozvalue;
            UpdateClientPositionAndRotationServerRpc(boolvalue , housevalue, fishmanvalue ,intvalue , intLvalue, handRxvalue, handRyvalue, handRzvalue, handLxvalue, handLyvalue, handLzvalue, headxvalue, headyvalue, headzvalue,
                handRroxvalue, handRroyvalue, handRrozvalue, handLroxvalue, handLroyvalue, handLrozvalue);

        }
    }
    [ServerRpc]
    public void UpdateClientPositionAndRotationServerRpc(bool value,bool houseval , bool fishval ,int invalue,int intLvalue, float hrx,float hry,float hrz, float hlx, float hly, float hlz, float hdx, float hdy, float hdz, float hrrox, float hrroy, float hrroz, float hlrox, float hlroy, float hlroz)
    {
        seeornot.Value = value;
        housetri.Value = houseval;
        fishmantri.Value = fishval;
        handRvalue.Value = invalue;
        handLvalue.Value = intLvalue;
        handRx.Value = hrx;
        handRy.Value = hry;
        handRz.Value = hrz;
        handLx.Value = hlx;
        handLy.Value = hly;
        handLz.Value = hlz;
        headx.Value = hdx;
        heady.Value = hdy;
        headz.Value = hdz;
        handRrox.Value = hrrox;
        handRroy.Value = hrroy;
        handRroz.Value = hrroz;
        handLrox.Value = hlrox;
        handLroy.Value = hlroy;
        handLroz.Value = hlroz;

    }

}
