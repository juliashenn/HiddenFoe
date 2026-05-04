using UnityEngine;
using Unity.Netcode;

public class BulletHitDetector : MonoBehaviour
{
    // Set this in your gun script after instantiating the bullet:
    // bullet.GetComponent<BulletHitDetector>().firedByLocalPlayer = true;
    [HideInInspector] public bool firedByLocalPlayer = false;

    private bool _hasHit = false;
    private WeaponType weaponType;

    void Start() 
    {
        Weapon weapon = GetComponent<Weapon>();
        weaponType = weapon.weaponType;
        if (weaponType == WeaponType.Knife)
        {
            firedByLocalPlayer = true;
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (_hasHit) return;

        Player hitPlayer = other.GetComponent<Player>();
        if (hitPlayer == null)
            hitPlayer = other.GetComponentInParent<Player>();
        if (hitPlayer == null) return;

        // Ignore shooter hitting themselves
        if (firedByLocalPlayer && hitPlayer.IsLocalPlayer) return;

        _hasHit = true;
        Debug.Log($"[BulletHitDetector] Hit player '{hitPlayer.gameObject.name}', firedByLocalPlayer={firedByLocalPlayer}");

        if (LevelManager.Instance == null)
        {
            Debug.LogError("[BulletHitDetector] LevelManager is NULL!");
            return;
        }

        // Pass our LocalClientId so server knows who the shooter is
        ulong shooterClientId = NetworkManager.Singleton.LocalClientId;
        Debug.Log($"[BulletHitDetector] Reporting hit, shooterClientId={shooterClientId}");
        LevelManager.Instance.ReportBulletHitServerRpc(shooterClientId);

        if (weaponType == WeaponType.Bullet)
            Destroy(gameObject);
    }
}


