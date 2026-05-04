using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Oculus.Interaction;
using Oculus.Interaction.HandGrab;

[AddComponentMenu("Nokobot/Modern Guns/Simple Shoot")]
public class SimpleShoot : MonoBehaviour
{
    [Header("Prefab References")]
    public GameObject bulletPrefab;
    public GameObject casingPrefab;
    public GameObject muzzleFlashPrefab;

    [Header("Location References")]
    [SerializeField] private Animator gunAnimator;
    [SerializeField] private Transform barrelLocation;
    [SerializeField] private Transform casingExitLocation;

    [Header("Settings")]
    [Tooltip("Specify time to destroy the casing object")]
    [SerializeField] private float destroyTimer = 2f;
    [Tooltip("Bullet Speed")]
    [SerializeField] private float shotPower = 500f;
    [Tooltip("Casing Ejection Speed")]
    [SerializeField] private float ejectPower = 150f;

    [Header("Meta XR Input Settings")]
    [Tooltip("Which hand holds this gun")]
    [SerializeField] private OVRInput.Controller shootingController = OVRInput.Controller.RTouch;
    [Tooltip("Which button fires the gun")]
    [SerializeField] private OVRInput.Button fireButton = OVRInput.Button.PrimaryIndexTrigger;

    [Header("Grab Settings")]
    [Tooltip("The Grabbable component on the parent cube")]
    [SerializeField] private Grabbable parentGrabbable;

    [Header("Sound Settings")]
    [Tooltip("The gunshot sound clip")]
    [SerializeField] private AudioClip shootSound;
    [Tooltip("Volume of the gunshot")]
    [SerializeField] [Range(0f, 1f)] private float shootVolume = 1f;
    private AudioSource audioSource;

    void Start()
    {
        if (barrelLocation == null)
            barrelLocation = transform;

        if (gunAnimator == null)
            gunAnimator = GetComponentInChildren<Animator>();

        if (parentGrabbable == null)
            parentGrabbable = GetComponentInParent<Grabbable>();

        // Set up audio source
        audioSource = GetComponent<AudioSource>();
        if (audioSource == null)
            audioSource = gameObject.AddComponent<AudioSource>();

        audioSource.playOnAwake = false;
        audioSource.spatialBlend = 1f; // 3D sound
    }

    void Update()
    {
        if (OVRInput.GetDown(fireButton, shootingController))
        {
            if (parentGrabbable != null && parentGrabbable.SelectingPointsCount > 0)
            {
                gunAnimator.SetTrigger("Fire");
            }
        }
    }

    // Called via Animation Event on the "Fire" animation
    void Shoot()
    {
        // Play gunshot sound
        if (shootSound != null && audioSource != null)
            audioSource.PlayOneShot(shootSound, shootVolume);

        if (muzzleFlashPrefab)
        {
            GameObject tempFlash = Instantiate(muzzleFlashPrefab, barrelLocation.position, barrelLocation.rotation);
            Destroy(tempFlash, destroyTimer);
        }

        if (!bulletPrefab) return;

        GameObject bullet = Instantiate(bulletPrefab, barrelLocation.position, barrelLocation.rotation);
        BulletHitDetector detector = bullet.GetComponent<BulletHitDetector>();
        if (detector != null) detector.firedByLocalPlayer = true;
        bullet.GetComponent<Rigidbody>().AddForce(barrelLocation.forward * shotPower);
    }

    // Called via Animation Event on the "Fire" animation
    void CasingRelease()
    {
        if (!casingExitLocation || !casingPrefab) return;

        GameObject tempCasing = Instantiate(casingPrefab, casingExitLocation.position, casingExitLocation.rotation);
        tempCasing.GetComponent<Rigidbody>().AddExplosionForce(
            Random.Range(ejectPower * 0.7f, ejectPower),
            casingExitLocation.position - casingExitLocation.right * 0.3f - casingExitLocation.up * 0.6f,
            1f
        );
        tempCasing.GetComponent<Rigidbody>().AddTorque(
            new Vector3(0, Random.Range(100f, 500f), Random.Range(100f, 1000f)),
            ForceMode.Impulse
        );
        Destroy(tempCasing, destroyTimer);
    }
}