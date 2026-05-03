using UnityEngine;
using UnityEngine.SceneManagement;
using Unity.Netcode;
using Oculus.Interaction;

public class RestartScene : NetworkBehaviour
{
    [SerializeField] private PokeInteractable _pokeInteractable;

    private void OnEnable()
    {
        if (_pokeInteractable != null)
            _pokeInteractable.WhenPointerEventRaised += OnPointerEvent;
    }

    private void OnDisable()
    {
        if (_pokeInteractable != null)
            _pokeInteractable.WhenPointerEventRaised -= OnPointerEvent;
    }

    private void OnPointerEvent(PointerEvent evt)
    {
        // Only trigger on actual poke press
        if (evt.Type != PointerEventType.Select)
            return;

        Debug.Log("POKED! Resetting scene...");

        if (IsServer)
        {
            ResetSceneClientRpc();
        }
        else
        {
            RequestResetServerRpc();
        }
    }

    [ServerRpc(RequireOwnership = false)]
    private void RequestResetServerRpc()
    {
        ResetSceneClientRpc();
    }

    [ClientRpc]
    private void ResetSceneClientRpc()
    {
        Scene currentScene = SceneManager.GetActiveScene();
        SceneManager.LoadScene(currentScene.name);
    }
}