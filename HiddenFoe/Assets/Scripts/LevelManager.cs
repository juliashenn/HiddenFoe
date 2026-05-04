using UnityEngine;
using TMPro;
using Unity.Netcode;

public class LevelManager : NetworkBehaviour
{
    public static LevelManager Instance;

    [Header("Timer UI")]
    public TextMeshProUGUI Timer;

    [Header("Round Settings")]
    public float roundStartTime = 180f;

    private NetworkVariable<float> timeRemaining = new NetworkVariable<float>();
    private NetworkVariable<bool> timeRunning = new NetworkVariable<bool>(false);
    private NetworkVariable<bool> gameEnded = new NetworkVariable<bool>(false);

    private void Awake()
    {
        if (Instance != null && Instance != this) { Destroy(gameObject); return; }
        Instance = this;
    }

    public override void OnNetworkSpawn()
    {
        Debug.Log($"[LevelManager] OnNetworkSpawn — IsServer={IsServer}");
        if (IsServer) StartRound();
    }

    void StartRound()
    {
        timeRemaining.Value = roundStartTime;
        timeRunning.Value = true;
        gameEnded.Value = false;
        Debug.Log($"[LevelManager] Round started. Duration={roundStartTime}s");
    }

    void Update()
    {
        if (Timer != null) DisplayTime(timeRemaining.Value);
        if (!IsServer || !timeRunning.Value || gameEnded.Value) return;

        if (timeRemaining.Value > 0)
        {
            timeRemaining.Value -= Time.deltaTime;
            if (timeRemaining.Value <= 0)
            {
                timeRemaining.Value = 0;
                timeRunning.Value = false;
                Debug.Log("[LevelManager] Time ran out!");
                OnTimeRanOut();
            }
        }
    }

    void DisplayTime(float timeToDisplay)
    {
        if (Timer == null) return;
        timeToDisplay += 1;
        Timer.text = $"{Mathf.FloorToInt(timeToDisplay / 60):00}:{Mathf.FloorToInt(timeToDisplay % 60):00}";
    }

    // Called when a player walks into a lethal cube/object.
    // OnTriggerEnter fired on the VICTIM's machine, they already showed lose locally.
    // Just tell everyone else they won.
    [ServerRpc(RequireOwnership = false)]
    public void ReportDeathServerRpc()
    {
        Debug.Log($"[LevelManager][SERVER] ReportDeathServerRpc. gameEnded={gameEnded.Value}");
        if (gameEnded.Value) return;
        gameEnded.Value = true;
        timeRunning.Value = false;
        ShowResultClientRpc(false); // survivors win, victim already has lose screen
    }

    // Called by BulletHitDetector.
    // shooterClientId = the client who fired the bullet = they WIN.
    // Everyone else = they LOSE.
    [ServerRpc(RequireOwnership = false)]
    public void ReportBulletHitServerRpc(ulong shooterClientId)
    {
        Debug.Log($"[LevelManager][SERVER] ReportBulletHitServerRpc. shooterClientId={shooterClientId}, gameEnded={gameEnded.Value}");
        if (gameEnded.Value) return;
        gameEnded.Value = true;
        timeRunning.Value = false;

        // Send targeted ClientRpcs — shooter gets WIN, everyone else gets LOSE
        foreach (var clientId in NetworkManager.Singleton.ConnectedClientsIds)
        {
            bool didLose = clientId != shooterClientId;
            Debug.Log($"[LevelManager][SERVER] Sending result to clientId={clientId}, didLose={didLose}");

            var clientRpcParams = new ClientRpcParams
            {
                Send = new ClientRpcSendParams
                {
                    TargetClientIds = new ulong[] { clientId }
                }
            };

            ShowResultClientRpc(didLose, clientRpcParams);
        }
    }

    void OnTimeRanOut()
    {
        if (gameEnded.Value) return;
        gameEnded.Value = true;
        ShowResultClientRpc(true); // everyone loses on timeout
    }

    [ClientRpc]
    void ShowResultClientRpc(bool didLose, ClientRpcParams clientRpcParams = default)
    {
        Debug.Log($"[LevelManager][CLIENT] ShowResultClientRpc — didLose={didLose}");

        Player localPlayer = PlayerCollision.LocalInstance?.GetPlayer();
        if (localPlayer == null)
        {
            Debug.LogError("[LevelManager][CLIENT] LocalInstance is NULL!");
            return;
        }

        // Skip if already showing lose (walked into cube case)
        if (localPlayer.IsDead)
        {
            Debug.Log("[LevelManager][CLIENT] Already dead, skipping.");
            return;
        }

        localPlayer.ShowResult(didLose);
    }
}


