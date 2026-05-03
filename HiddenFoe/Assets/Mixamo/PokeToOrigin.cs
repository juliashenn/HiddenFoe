using UnityEngine;
using Unity.Netcode;
using Oculus.Interaction;

public class PokeToOrigin : NetworkBehaviour
{
    [SerializeField] private PokeInteractable _pokeInteractable;

    private void Start()
    {
        _pokeInteractable.WhenSelectingInteractorAdded.Action += OnPoked;
    }

    private void OnDestroy()
    {
        _pokeInteractable.WhenSelectingInteractorAdded.Action -= OnPoked;
    }

    private void OnPoked(PokeInteractor interactor)
    {
        Debug.Log("POKED! Found players: " + GameObject.FindGameObjectsWithTag("Player").Length);
        MoveAllPlayersToOrigin();
    }

    public void MoveAllPlayersToOrigin()
    {
        if (IsServer)
            TeleportAllPlayersClientRpc();
        else
            RequestMoveServerRpc();
    }

    [ServerRpc(RequireOwnership = false)]
    private void RequestMoveServerRpc()
    {
        TeleportAllPlayersClientRpc();
    }

    [ClientRpc]
    private void TeleportAllPlayersClientRpc()
    {
        // Move the Camera Rig (controls local VR physical position)
        GameObject cameraRig = GameObject.Find("[BuildingBlock] Camera Rig");
        if (cameraRig != null)
        {
            cameraRig.transform.position = Vector3.zero;
            Debug.Log("Moved Camera Rig to origin");
        }
        else
        {
            Debug.LogWarning("Camera Rig not found! Check the exact name in your hierarchy.");
        }

        // Also move any networked player objects tagged Player
        GameObject[] players = GameObject.FindGameObjectsWithTag("Player");
        foreach (GameObject player in players)
        {
            player.transform.position = Vector3.zero;
            Debug.Log("Moved tagged Player: " + player.name);
        }
    }
}