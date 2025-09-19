using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class buildon : MonoBehaviour
{
    public GameObject building;
    public GameObject[] buildings;
    public GameObject[] buildingposition;
    public GameObject ancor;
    public GameObject[] crab;
    public GameObject[] head;
    public Material firstBuildingMaterial;
    public bool doMaterialAutoAppend = false;
    public bool one;

    // Start is called before the first frame update
    void Start()
    {

        ancor = GameObject.FindGameObjectWithTag("crabancor");
        buildingposition = GameObject.FindGameObjectsWithTag("buildinglo");
        head = GameObject.FindGameObjectsWithTag("headset");
    }

    // Update is called once per frame
    void Update()
    {
        crab = GameObject.FindGameObjectsWithTag("crab");
        buildings = GameObject.FindGameObjectsWithTag("building");

    }
    public void buildinghideoff()
    {
        Destroy(this.gameObject, 1);
    }

    public void buildingup()
    {

        GameObject buildings1 = Instantiate(building, new Vector3(head[0].transform.position.x, ancor.transform.position.y, head[0].transform.position.z), Quaternion.Euler(0f, 0f, 0f));
        buildings1.transform.localScale = new(0.3f, 0.3f, 0.3f);
        buildings1.GetComponent<growvalue>().up = true;


        //buildings[0].GetComponent<growvalue>().up = true;
    }
    public void crabed()
    {

        this.gameObject.tag = "crabsed";
    }
}
