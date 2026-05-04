using UnityEngine;

public class PlayerCollision : MonoBehaviour
{
    public static PlayerCollision LocalInstance { get; private set; }

    private Player _player;

    private void Awake()
    {
        _player = GetComponent<Player>();
        if (_player == null)
            _player = GetComponentInParent<Player>();

        if (_player == null)
        {
            Debug.LogError($"[PlayerCollisionDetector] on '{gameObject.name}': No Player found!");
            return;
        }

        Debug.Log($"[PlayerCollisionDetector] Awake on '{gameObject.name}'");

        // Check if Camera.main is a child of this player prefab.
        // The local player's prefab contains the VR camera; remote players don't.
        if (Camera.main != null && IsChildOf(Camera.main.transform, _player.transform))
        {
            LocalInstance = this;
            Debug.Log($"[PlayerCollisionDetector] LocalInstance set via camera check: '{gameObject.name}'");
        }
        else
        {
            Debug.Log($"[PlayerCollisionDetector] '{gameObject.name}' is NOT the local player (no camera found as child)");
        }
    }

    private bool IsChildOf(Transform child, Transform parent)
    {
        Transform t = child;
        while (t != null)
        {
            if (t == parent) return true;
            t = t.parent;
        }
        return false;
    }

    private void OnDestroy()
    {
        if (LocalInstance == this) LocalInstance = null;
    }

    public Player GetPlayer() => _player;

    private void OnTriggerEnter(Collider other)
    {
        if (!other.CompareTag("LethalObject")) return;

        Debug.Log($"[PlayerCollisionDetector] Hit LethalObject on '{_player.gameObject.name}'");

        // Also set LocalInstance here as fallback in case camera check failed
        LocalInstance = this;

        _player.IsDead = true;
        _player.ShowResult(true);

        if (LevelManager.Instance == null) { Debug.LogError("[PlayerCollisionDetector] LevelManager is NULL!"); return; }
        LevelManager.Instance.ReportDeathServerRpc();
    }
}


