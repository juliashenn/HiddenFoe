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
        Debug.Log($"[LevelManager] OnNetworkSpawn — IsServer={IsServer}, IsSpawned={IsSpawned}");
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

    /// <summary>
    /// Called by PlayerCollisionDetector directly — no RPC needed on Player.
    /// This RPC lives on LevelManager which we know is properly spawned.
    /// </summary>
    [ServerRpc(RequireOwnership = false)]
    public void ReportDeathServerRpc(ulong deadNetworkObjectId)
    {
        Debug.Log($"[LevelManager][SERVER] ReportDeathServerRpc received — deadNetworkObjectId={deadNetworkObjectId}");
        PlayerDied(deadNetworkObjectId);
    }

    public void PlayerDied(ulong deadNetworkObjectId)
    {
        Debug.Log($"[LevelManager] PlayerDied — deadNetworkObjectId={deadNetworkObjectId}, gameEnded={gameEnded.Value}");
        if (!IsServer || gameEnded.Value) return;

        gameEnded.Value = true;
        NotifyGameOverClientRpc(deadNetworkObjectId, false);
    }

    void OnTimeRanOut()
    {
        if (gameEnded.Value) return;
        gameEnded.Value = true;
        NotifyGameOverClientRpc(ulong.MaxValue, true);
    }

    [ClientRpc]
    void NotifyGameOverClientRpc(ulong deadNetworkObjectId, bool isTimeOut)
    {
        Debug.Log($"[LevelManager][CLIENT] NotifyGameOverClientRpc — deadNetworkObjectId={deadNetworkObjectId}, isTimeOut={isTimeOut}");

        Player[] players = FindObjectsByType<Player>(FindObjectsSortMode.None);
        Debug.Log($"[LevelManager][CLIENT] Found {players.Length} Player(s)");

        foreach (var p in players)
        {
            // Local player is whichever one has PlayerCollisionDetector
            PlayerCollision detector = p.GetComponent<PlayerCollision>();
            if (detector == null) continue;

            bool didLose = isTimeOut || (p.NetworkObjectId == deadNetworkObjectId);
            Debug.Log($"[LevelManager][CLIENT] Local player NetworkObjectId={p.NetworkObjectId}, didLose={didLose}");
            p.ShowResult(didLose);
            return;
        }

        Debug.LogWarning("[LevelManager][CLIENT] Could not find local Player with PlayerCollisionDetector!");
    }
}


