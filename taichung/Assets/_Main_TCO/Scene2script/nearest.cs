using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class nearest : MonoBehaviour
{
    
    public GameObject[] allEnemies;
    public GameObject closestEnemy;

    public GameObject[] allbuildings;
    public GameObject closestbuilding;

    public GameObject[] allbuildinglos;
    public GameObject closestbuildinglo;
    public GameObject maincamera;
    // Start is called before the first frame update
    void Start()
    {
        
    }




    // Update is called once per frame
    void Update()
    {
        allEnemies = GameObject.FindGameObjectsWithTag("crab");
        allbuildings = GameObject.FindGameObjectsWithTag("building");
        allbuildinglos = GameObject.FindGameObjectsWithTag("buildinglo");
        closestEnemy = ClosestEnemy();
        closestbuilding = Closestbuilding();
        closestbuildinglo = Closestbuildinglo();
        //print(closestEnemy.name);
    }


    GameObject ClosestEnemy()
    {

        GameObject closestHere = gameObject;
        float leastDistance = Mathf.Infinity;

        foreach (var enemy in allEnemies)
        {

            float distanceHere = Vector3.Distance(new Vector3(transform.position.x,0, transform.position.z) , new Vector3(enemy.transform.position.x,0, enemy.transform.position.z));
            if (distanceHere <=  leastDistance)
            {
                leastDistance = distanceHere;
                closestHere = enemy;
            }


        }
        return closestHere;
    }
    GameObject Closestbuilding()
    {

        GameObject closestHer = gameObject;
        float leastDistance = Mathf.Infinity;

        foreach (var enemy in allbuildings)
        {

            float distanceHer = Vector3.Distance(new Vector3(transform.position.x, 0, transform.position.z), new Vector3(enemy.transform.position.x, 0, enemy.transform.position.z));
            if (distanceHer <= leastDistance)
            {
                leastDistance = distanceHer;
                closestHer = enemy;
            }


        }
        return closestHer;
    }

    GameObject Closestbuildinglo()
    {

        GameObject closestHer = gameObject;
        float leastDistance = Mathf.Infinity;

        foreach (var enemy in allbuildinglos)
        {

            float distanceHer = Vector3.Distance(new Vector3(maincamera.transform.position.x, 0, maincamera.transform.position.z), new Vector3(enemy.transform.position.x, 0, enemy.transform.position.z));
            if (distanceHer <= leastDistance)
            {
                leastDistance = distanceHer;
                closestHer = enemy;
            }


        }
        return closestHer;
    }

}
