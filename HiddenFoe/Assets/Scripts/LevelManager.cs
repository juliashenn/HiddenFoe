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
        Timer.text = $"{Mathf.FloorToInt(timeToDisplay / 60):00}:{Mathf.FloorToInt(timeToDisplay % 60):00}";
    }

    [ServerRpc(RequireOwnership = false)]
    public void ReportDeathServerRpc()
    {
        Debug.Log($"[LevelManager][SERVER] ReportDeathServerRpc received. gameEnded={gameEnded.Value}");
        if (gameEnded.Value) return;
        gameEnded.Value = true;
        timeRunning.Value = false;
        NotifyOthersWonClientRpc();
    }

    void OnTimeRanOut()
    {
        if (gameEnded.Value) return;
        gameEnded.Value = true;
        NotifyTimeOutClientRpc();
    }

    [ClientRpc]
    void NotifyTimeOutClientRpc()
    {
        Debug.Log("[LevelManager][CLIENT] Timeout — showing result for local player.");
        ShowResultForLocalPlayer(true); // change to false if everyone wins on timeout
    }

    [ClientRpc]
    void NotifyOthersWonClientRpc()
    {
        Debug.Log("[LevelManager][CLIENT] NotifyOthersWonClientRpc received.");

        Player[] players = FindObjectsByType<Player>(FindObjectsSortMode.None);
        Debug.Log($"[LevelManager][CLIENT] Found {players.Length} Player(s)");

        foreach (var p in players)
        {
            Debug.Log($"[LevelManager][CLIENT] Player '{p.gameObject.name}' IsLocalPlayer={p.IsLocalPlayer} IsDead={p.IsDead}");
        }

        ShowResultForLocalPlayer(false);
    }

    private void ShowResultForLocalPlayer(bool didLose)
    {
        Player[] players = FindObjectsByType<Player>(FindObjectsSortMode.None);

        foreach (var p in players)
        {
            if (!p.IsLocalPlayer) continue;

            // Already showed lose locally when they were hit — don't overwrite with win
            if (p.IsDead)
            {
                Debug.Log("[LevelManager] Local player is already dead, not overwriting with win.");
                return;
            }

            Debug.Log($"[LevelManager] Showing result didLose={didLose} for local player '{p.gameObject.name}'");
            p.ShowResult(didLose);
            return;
        }

        Debug.LogWarning("[LevelManager] No local player found (IsLocalPlayer=true). " +
                         "Make sure PlayerCollisionDetector is on the player prefab.");
    }
}


