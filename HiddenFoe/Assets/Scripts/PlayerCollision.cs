using UnityEngine;

public class PlayerCollision : MonoBehaviour
{
    private Player _player;

    private void Awake()
    {
        // Check this GameObject first, then walk up the hierarchy
        _player = GetComponent<Player>();
        Debug.Log($"[PlayerCollisionDetector] Awake on '{gameObject.name}', " + $"Player found = {_player != null}");
        if (_player == null)
            _player = GetComponentInParent<Player>();

        if (_player == null)
            Debug.LogError($"[PlayerCollisionDetector] on '{gameObject.name}': " +
                           "No Player found on this object or any parent!");
        else
            Debug.Log($"[PlayerCollisionDetector] on '{gameObject.name}': " +
                      $"Found Player on '{_player.gameObject.name}'");
    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log($"[PlayerCollisionDetector] OnTriggerEnter on '{gameObject.name}' — tag='{other.tag}'");

        if (!other.CompareTag("LethalObject")) return;

        if (_player == null)
        {
            Debug.LogError("[PlayerCollisionDetector] _player is null, cannot show result!");
            return;
        }

        Debug.Log($"[PlayerCollisionDetector] Hit LethalObject — calling ShowResult(true) " +
                  $"on Player '{_player.gameObject.name}'");

        _player.IsDead = true;
        _player.ShowResult(true);

        if (LevelManager.Instance == null)
        {
            Debug.LogError("[PlayerCollisionDetector] LevelManager.Instance is NULL!");
            return;
        }

        LevelManager.Instance.ReportDeathServerRpc();
    }



}
