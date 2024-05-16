using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using UnityEngine;
using System.IO;
public class Server : MonoBehaviour
{
    private const int port = 8888;
    private UdpClient server;
    
    void Start()
    {
        server = new UdpClient(port);
        Debug.Log("Server is listening on port " + port);
        
        // Start listening for incoming data
        server.BeginReceive(new AsyncCallback(ReceiveData), null);
    }
    
    private void ReceiveData(IAsyncResult result)
    {
        IPEndPoint clientEndPoint = new IPEndPoint(IPAddress.Any, port);
        byte[] receivedBytes = server.EndReceive(result, ref clientEndPoint);
        string receivedData = Encoding.ASCII.GetString(receivedBytes);
        Debug.Log("Received data from client: " + receivedData);
        
        // Continue listening for more data
        server.BeginReceive(new AsyncCallback(ReceiveData), null);
    }
}