using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class crabfloat : MonoBehaviour
{
    // 最大推力和旋轉力
    public float m_Thrust ;
    public float maxTorque;

    public GameObject ancor;

    private Rigidbody rb;


    void Start()
    {
        rb = GetComponent<Rigidbody>();
        ApplyRandomForce();
        ApplyRandomTorque();

        ancor = GameObject.FindGameObjectWithTag("crabancor");
    }

     void Update()
    {
        //ApplyRandomForce();
        if(this.gameObject.transform.position.y <= ancor.transform.position.y)
        {
            this.gameObject.transform.position = new Vector3(this.gameObject.transform.position.x, ancor.transform.position.y, this.gameObject.transform.position.z);
        }
    }

    void ApplyRandomForce()
    {
        rb.AddForce(transform.up * m_Thrust);
    }

    void ApplyRandomTorque()
    {
        Vector3 torque = Random.insideUnitSphere * maxTorque;
        rb.AddTorque(torque, ForceMode.Impulse);
    }

}
