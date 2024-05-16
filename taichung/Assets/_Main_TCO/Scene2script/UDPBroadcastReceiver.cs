using System;
using System.Collections;
using System.Collections.Generic;
using System.Net;
using System.Net.Sockets;
using System.Text;
using System.Linq;
using System.Threading;
using System.Threading.Tasks;
using UnityEngine;
using UnityEngine.UI;
public class UDPBroadcastReceiver : MonoBehaviour
{
    public int udpPort; // specify mmwave sensor broadcasting port
    UdpClient listener;
    IPEndPoint groupEP;
    byte[] buffer = new byte[2048];
    public GameObject[] humanModel;
    public float[] humanModelLastUpdateTime = new float[6];

    // default color

    public Text x;
    public Text y;
    public Text posx;
    public Text posy;
    public Text posxtext;
    public Text posytext;
    public bool disable;

    public GameObject mmwave;

    public float a;
    public float b;
    public float scalex;
    public float scaley;
    public Text scalextext;
    public Text scaleytext;
    public float rotationAngle = 45f;
    public Vector3 rotatedPoint;
    public float lerp;
    Color defaultColor = new Color(0.4f, 0.4f, 0.4f);

    // Start is called before the first frame update
    void Start()
    {
        listener = new UdpClient(udpPort);
        listener.Client.SendTimeout = 1000;
        listener.Client.ReceiveTimeout = 1000;
        IPEndPoint groupEP = new IPEndPoint(IPAddress.Any, udpPort);

        a = mmwave.transform.position.x;
        b = mmwave.transform.position.z;
        if(posxtext!= null)
        {
            posxtext.text = a.ToString();
        }
        if(posytext!= null)
        {
            posytext.text = b.ToString();
        }
        
        
    }

    // Update is called once per frame
    void Update()
    {
        
        a = mmwave.transform.position.x;
        b = mmwave.transform.position.z;
        if(posxtext!= null)
        {
            posxtext.text = a.ToString();
        }
        if(posytext!= null)
        {
            posytext.text = b.ToString();
        }
        if(scalextext!= null)
        {
            scalextext.text = scalex.ToString();
        }
        if(scaleytext!= null)
        {
           scaleytext.text = scaley.ToString();
        }
        
        

        

        if (listener.Available > 0 )
        {
            byte[] bytes = listener.Receive(ref groupEP);
            string data = Encoding.ASCII.GetString(bytes, 0, bytes.Length).Trim();

            try
            {
                for (int i = 0; i < humanModel.Length; i++)
                {
                    //humanModel[i].SetActive(false);
                }

                if (data == "0")
                {
                    Debug.Log("Nothing detected, clean up.");
                    for (int i = 0; i < humanModel.Length; i++)
                    {
                        if(disable == true)
                        {
                            //humanModel[i].GetComponent<diss>().trigger = false;
                        }
                        else
                        {
                            //humanModel[i].SetActive(false);
                        }
                        
                    }
                }
                else
                {
                    string[] objectList = data.Split(';');
                    objectList = objectList.Where(x => !string.IsNullOrEmpty(x)).ToArray();

                    Debug.Log($"object Number: {objectList.Length}");
                    for (int i = 0; i < objectList.Length; i++)
                    {
                        string[] subString = objectList[i].Split(':');
                        int id = Int32.Parse(subString[0]);
                        string[] physicString = subString[1].Split(',');
                        float px = float.Parse(physicString[0]),
                              py = float.Parse(physicString[1]),
                              vx = float.Parse(physicString[2]),
                              vy = float.Parse(physicString[3]),
                              ax = float.Parse(physicString[4]),
                              ay = float.Parse(physicString[5]);
                        //Debug.Log(id.ToString() + "@ " + string.Join("  ", physicString));
                        
                        // Update object position
                        Vector3 newPos = humanModel[id].transform.position;                        
                        

                        
                        float angleInRadians = rotationAngle * Mathf.Deg2Rad;
                        newPos.x =  -px*scalex;
                        newPos.z =  py * scaley;
                        rotatedPoint.x = newPos.x * Mathf.Cos(angleInRadians) - newPos.z * Mathf.Sin(angleInRadians);
                        rotatedPoint.z = newPos.x * Mathf.Sin(angleInRadians) + newPos.z * Mathf.Cos(angleInRadians);
                        newPos.x = a + rotatedPoint.x;
                        newPos.z = b + rotatedPoint.z;
                        
                        humanModel[id].transform.position = Vector3.Lerp(humanModel[id].transform.position, newPos, lerp);
                        // Update object direction based on velocity
                        double vd = -Mathf.Atan2(-vx, vy) * Mathf.Rad2Deg;
                        humanModel[id].transform.rotation =  Quaternion.Euler(0, -(float)vd, 0);
                        humanModel[id].SetActive(true);
                        //humanModel[id].GetComponent<diss>().trigger = true;
                        // obj updated, reset timer.
                        humanModelLastUpdateTime[id] = 0.0f;
                    }
                }
            }
            catch (SocketException e)
            {
                Debug.Log(e.Message);
            }
        }
    }

    public void scalecheck()
    {
        scalex = float.Parse(x.text);
        scaley = float.Parse(y.text);
    } 
    public void positioncheck()
    {
        this.transform.position = new Vector3(float.Parse(posx.text),this.transform.position.y,float.Parse(posy.text));
    } 
}