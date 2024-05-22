using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class spin2 : MonoBehaviour
{
    public KeyCode objmoveKey;
    public KeyCode increaseRadius;
    public KeyCode decreaseRadius;

    public string objectTag = "Crab";
    public Transform targetPoint;
    public float moveTime = 2f;
    public float targetRadius = 1f;

    public bool isMoving = false;
    private Transform[] moveableTransforms;
    public bool end = false;
    public GameObject[] moveableObjects;
    public GameObject[] players;
    void Start()
    {
        
    }

    void Update()
    {
        players = GameObject.FindGameObjectsWithTag("Player");
        if (Input.GetKeyDown(objmoveKey))
        {
            moveableObjects = GameObject.FindGameObjectsWithTag(objectTag);
            moveableTransforms = new Transform[moveableObjects.Length];

            for (int i = 0; i < moveableObjects.Length; i++)
            {
                if (moveableObjects.Length > 0)
                {
                    moveableTransforms[i] = moveableObjects[i].transform;
                }

            }

            StartMoving();

        }
     
        
        if (Input.GetKeyDown(increaseRadius))
        {
            targetRadius += 0.5f;
        }
        else if (Input.GetKeyDown(decreaseRadius))
        {
            targetRadius -= 0.5f;
            if (targetRadius < 0f)
                targetRadius = 0f;
        }

        if (end)
        {
            Debug.Log("do something.");
            if(players.Length > 0)
            {
                players[0].GetComponent<valuerecueve>().ballvalue = true;
            }
          
            foreach (var crabs in moveableObjects)
            {
                if(crabs!= null)
                {
                    crabs.GetComponent<crabfloat>().enabled = false;
                    crabs.GetComponent<Animator>().SetBool("C2S", true);
                }
                

            }
            end = false;
        }
    }

    void StartMoving()
    {
        isMoving = true;
        StartCoroutine(MoveObjects());
        
    }

    IEnumerator MoveObjects()
    {
        while (isMoving)
        {
            float startTime = Time.time;
            Vector3[] startPositions = new Vector3[moveableTransforms.Length];

            for (int i = 0; i < moveableTransforms.Length; i++)
            {
                startPositions[i] = moveableTransforms[i].position;
            }

            while (Time.time - startTime < moveTime)
            {
                float t = (Time.time - startTime) / moveTime;

                for (int i = 0; i < moveableTransforms.Length; i++)
                {
                    if(moveableTransforms.Length > 0)
                    {
                        Vector3 targetPosition = targetPoint.position + (moveableTransforms[i].position - targetPoint.position).normalized * targetRadius;
                        moveableTransforms[i].position = Vector3.Lerp(startPositions[i], targetPosition, t);
                    }
                    
                }

                yield return null;
            }

            for (int i = 0; i < moveableTransforms.Length; i++)
            {
                Vector3 targetPosition = targetPoint.position + (moveableTransforms[i].position - targetPoint.position).normalized * targetRadius;
                moveableTransforms[i].position = targetPosition;
            }

            end = true;
            
            yield return null;
        }
        
    }
}
