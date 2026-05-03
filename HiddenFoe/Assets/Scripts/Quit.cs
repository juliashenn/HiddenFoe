using UnityEngine;
using Unity.Netcode;
using Oculus.Interaction;

public class Quit : NetworkBehaviour
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
        #if UNITY_EDITOR
            UnityEditor.EditorApplication.isPlaying = false;
        #else
            Application.Quit();
        #endif
    }

}


