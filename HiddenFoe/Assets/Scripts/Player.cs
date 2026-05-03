using UnityEngine;
using Unity.Netcode;

public class Player : NetworkBehaviour
{
    public Canvas endScreen;
    public GameObject winCanvas;
    public GameObject loseCanvas;

    public bool IsDead = false;
    [HideInInspector] public bool IsLocalPlayer = false;

    private void Start()
    {
        if (endScreen != null)
            endScreen.gameObject.SetActive(false);
        else
            Debug.LogError("[Player] endScreen is NULL!");
    }

    public override void OnNetworkSpawn()
    {
        Debug.Log($"[Player] OnNetworkSpawn on '{gameObject.name}' — NetworkObjectId={NetworkObjectId}");
        if (endScreen != null)
            endScreen.gameObject.SetActive(false);
    }

    public void ShowResult(bool didLose)
    {
        Debug.Log($"[Player] ShowResult(didLose={didLose}) on '{gameObject.name}'");

        if (endScreen == null) { Debug.LogError("[Player] endScreen is NULL!"); return; }
        if (winCanvas == null) { Debug.LogError("[Player] winCanvas is NULL!"); return; }
        if (loseCanvas == null) { Debug.LogError("[Player] loseCanvas is NULL!"); return; }

        endScreen.gameObject.SetActive(true);
        winCanvas.SetActive(false);
        loseCanvas.SetActive(false);

        if (didLose)
        {
            Debug.Log($"[Player] '{gameObject.name}' showing LOSE canvas.");
            loseCanvas.SetActive(true);
        }
        else
        {
            Debug.Log($"[Player] '{gameObject.name}' showing WIN canvas.");
            winCanvas.SetActive(true);
        }
    }
}


