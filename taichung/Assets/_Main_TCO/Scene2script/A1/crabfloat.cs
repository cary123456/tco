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
    public float speed ;
    float timeCount = 0.0f;
    public bool small;

    void Start()
    {
        rb = GetComponent<Rigidbody>();
        
        ApplyRandomTorque();

        ancor = GameObject.FindGameObjectWithTag("crabancor");
    }

     void Update()
    {
        ApplyRandomForce();
        //this.gameObject.transform.rotation = Quaternion.Euler(0, 180, this.gameObject.transform.rotation.z);
        if (small)
        {
            if (this.gameObject.transform.position.y <= ancor.transform.position.y)
            {
                Destroy(this.gameObject,5);
                this.gameObject.transform.position = new Vector3(this.gameObject.transform.position.x, ancor.transform.position.y, this.gameObject.transform.position.z);

            }
        }
        else
        {
            if (this.gameObject.transform.position.y <= ancor.transform.position.y)
            {
                this.gameObject.GetComponent<Animator>().SetBool("C2P", true);
                this.gameObject.transform.rotation = Quaternion.Lerp(this.transform.rotation, Quaternion.Euler(0, 0, 0), timeCount * speed);
                this.gameObject.transform.GetChild(1).gameObject.SetActive(false);
                timeCount = timeCount + Time.deltaTime;
                this.gameObject.transform.position = new Vector3(this.gameObject.transform.position.x, ancor.transform.position.y, this.gameObject.transform.position.z);

            }
        }

       
        
    }

    void ApplyRandomForce()
    {
        rb.AddForce(Vector3.down * m_Thrust);
    }

    void ApplyRandomTorque()
    {
        Vector3 torque = Random.insideUnitSphere * maxTorque;
        rb.AddTorque(torque, ForceMode.Impulse);
    }

}
