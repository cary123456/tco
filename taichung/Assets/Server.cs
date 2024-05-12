using System;
using System.Net;
using System.Net.Sockets;
using System.Text;
using UnityEngine;

public class Server : MonoBehaviour
{
    private TcpListener listener;
    private TcpClient client;

    private void Start()
    {
        StartServer();
    }

    private void StartServer()
    {
        listener = new TcpListener(IPAddress.Any, 8888); // 監聽所有IP的8888埠
        listener.Start();

        Debug.Log("Server is listening...");

        AcceptClient();
    }

    private async void AcceptClient()
    {
        client = await listener.AcceptTcpClientAsync();
        Debug.Log("Client connected.");

        ReceiveMessage();
    }

    private async void ReceiveMessage()
    {
        NetworkStream stream = client.GetStream();

        byte[] buffer = new byte[1024];
        int byteCount;

        while ((byteCount = await stream.ReadAsync(buffer, 0, buffer.Length)) > 0)
        {
            string message = Encoding.UTF8.GetString(buffer, 0, byteCount);
            Debug.Log("Received message: " + message);
        }
    }

    private void OnDestroy()
    {
        if (client != null)
            client.Close();

        if (listener != null)
            listener.Stop();
    }
}