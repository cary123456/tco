using Unity.Netcode;
using Unity.Netcode.Components;
using UnityEngine;

[RequireComponent(typeof(NetworkTransform))]
[RequireComponent(typeof(NetworkObject))]

public class roo : MonoBehaviour
{
    public NetworkVariable<Vector3> networkPositionDirection = new NetworkVariable<Vector3>();
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        this.transform.position = networkPositionDirection.Value;
    }
}
