using UnityEngine;
using Unity.Netcode;
using Oculus.Interaction;

public class PokeToOrigin : NetworkBehaviour
{
    [SerializeField] private PokeInteractable _pokeInteractable;
    [SerializeField] private Transform[] _spawnPoints;
    [SerializeField] private GameObject _objectToEnable;

    private int _nextSpawnIndex = 0;

    private void Start()
    {
        _pokeInteractable.WhenSelectingInteractorAdded.Action += OnPoked;

        // Ensure the object starts disabled if assigned
        if (_objectToEnable != null)
            _objectToEnable.SetActive(false);
    }

    private void OnDestroy()
    {
        _pokeInteractable.WhenSelectingInteractorAdded.Action -= OnPoked;
    }

    private void OnPoked(PokeInteractor interactor)
    {
        Debug.Log("POKED! Assigning spawn points...");

        if (_spawnPoints == null || _spawnPoints.Length == 0)
        {
            Debug.LogWarning("No spawn points assigned!");
            return;
        }

        if (IsServer)
            AssignSpawnPointsServerSide();
        else
            RequestSpawnServerRpc();
    }

    private void AssignSpawnPointsServerSide()
    {
        var clients = NetworkManager.Singleton.ConnectedClientsIds;
        int i = 0;
        foreach (ulong clientId in clients)
        {
            Vector3 spawnPos = _spawnPoints[i % _spawnPoints.Length].position;
            TeleportClientRpc(spawnPos, new ClientRpcParams
            {
                Send = new ClientRpcSendParams
                {
                    TargetClientIds = new ulong[] { clientId }
                }
            });
            i++;
        }

        // Enable the object on all clients via RPC
        EnableObjectClientRpc();
    }

    [ServerRpc(RequireOwnership = false)]
    private void RequestSpawnServerRpc()
    {
        AssignSpawnPointsServerSide();
    }

    [ClientRpc]
    private void TeleportClientRpc(Vector3 position, ClientRpcParams clientRpcParams = default)
    {
        GameObject cameraRig = GameObject.Find("[BuildingBlock] Camera Rig");
        if (cameraRig != null)
        {
            cameraRig.transform.position = position;
            Debug.Log("Teleported to: " + position);
        }
        else
        {
            Debug.LogWarning("Camera Rig not found!");
        }

        GameObject[] players = GameObject.FindGameObjectsWithTag("Player");
        foreach (GameObject player in players)
        {
            NetworkObject netObj = player.GetComponent<NetworkObject>();
            if (netObj != null && netObj.IsLocalPlayer)
                player.transform.position = position;
        }
    }

    [ClientRpc]
    private void EnableObjectClientRpc()
    {
        if (_objectToEnable != null)
        {
            _objectToEnable.SetActive(true);
            Debug.Log("Object enabled: " + _objectToEnable.name);
        }
        else
        {
            Debug.LogWarning("No object assigned to enable!");
        }
    }
}