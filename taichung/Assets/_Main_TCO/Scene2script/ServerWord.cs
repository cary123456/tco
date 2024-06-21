using System;
using System.Collections;
using System.Net;
using System.Net.Sockets;
using UnityEngine;

public class ServerWord : MonoBehaviour
{
    public int port;
    private TcpListener server;
    private TcpClient client;
    private NetworkStream stream;
    public int receivedNum;


    void Start()
    {
         CloseConnection();
        StartCoroutine(StartServerCoroutine());
    }

    IEnumerator StartServerCoroutine()
    {
        server = new TcpListener(IPAddress.Any, port);
        server.Start();
        Debug.Log("Server started...");

        yield return StartCoroutine(AcceptClient());
    }

    IEnumerator AcceptClient()
    {
        while (!server.Pending())
        {
            yield return null;
        }

        client = server.AcceptTcpClient();
        Debug.Log("Client connected...");
        stream = client.GetStream();
        StartCoroutine(HandleConnection());
    }

    IEnumerator HandleConnection()
    {
        byte[] buffer = new byte[4];
        while (client.Connected)
        {
            if (client.Available > 0)
            {
                int bytesRead = stream.Read(buffer, 0, buffer.Length);
                if (bytesRead > 0)
                {
                    int receivedInt = BitConverter.ToInt32(buffer, 0);
                    receivedNum = receivedInt;
                    Debug.Log("Received: " + receivedInt);
                }
            }
            yield return null;
        }
        CloseConnection();
    }

    private void CloseConnection()
    {
        if (stream != null) stream.Close();
        if (client != null) client.Close();
        if (server != null) server.Stop();
        Debug.Log("Connection closed.");
    }
}
