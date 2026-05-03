using UnityEngine;
using Unity.Netcode;

public class Player : NetworkBehaviour
{
    public Canvas endScreen;
    public GameObject winCanvas;
    public GameObject loseCanvas;

    private bool isDead = false;

    private void Start()
    {
        if (endScreen == null)
            Debug.LogError("[Player] endScreen is NULL!");
        else
            endScreen.gameObject.SetActive(false);
    }

    public override void OnNetworkSpawn()
    {
        Debug.Log($"[Player] OnNetworkSpawn — NetworkObjectId={NetworkObjectId}");
        if (endScreen != null)
            endScreen.gameObject.SetActive(false);
    }

    public void TriggerDeath()
    {
        Debug.Log($"[Player] TriggerDeath() — isDead={isDead}, NetworkObjectId={NetworkObjectId}");
        if (isDead) return;
        isDead = true;

        if (LevelManager.Instance == null)
        {
            Debug.LogError("[Player] TriggerDeath: LevelManager.Instance is NULL!");
            return;
        }

        // RPC goes through LevelManager since that NetworkObject is properly spawned
        Debug.Log($"[Player] Calling LevelManager.ReportDeathServerRpc with NetworkObjectId={NetworkObjectId}");
        LevelManager.Instance.ReportDeathServerRpc(NetworkObjectId);
    }

    public void ShowResult(bool didLose)
    {
        Debug.Log($"[Player] ShowResult(didLose={didLose})");

        if (endScreen == null) { Debug.LogError("[Player] endScreen is NULL!"); return; }
        if (winCanvas == null) { Debug.LogError("[Player] winCanvas is NULL!"); return; }
        if (loseCanvas == null) { Debug.LogError("[Player] loseCanvas is NULL!"); return; }

        endScreen.gameObject.SetActive(true);
        winCanvas.SetActive(false);
        loseCanvas.SetActive(false);

        if (didLose)
        {
            Debug.Log("[Player] Showing LOSE canvas.");
            loseCanvas.SetActive(true);
        }
        else
        {
            Debug.Log("[Player] Showing WIN canvas.");
            winCanvas.SetActive(true);
        }
    }
}


