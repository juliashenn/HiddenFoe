using UnityEngine;
using System.Collections;

public class GumSquish : MonoBehaviour
{
    [Header("Sound Settings")]
    [SerializeField] private AudioClip squishSound;
    [SerializeField] [Range(0f, 1f)] private float squishVolume = 1f;

    [Header("Settings")]
    [Tooltip("Tag of the object that triggers the squish")]
    [SerializeField] private string triggerTag = "Player";
    [Tooltip("How long the player is frozen in seconds")]
    [SerializeField] private float freezeDuration = 5f;
    [Tooltip("Seconds before the sound can play again")]
    [SerializeField] private float cooldown = 1f;

    [Header("Player Reference")]
    [Tooltip("Drag the PlayerController CharacterController component here")]
    [SerializeField] private MonoBehaviour playerLocomotor;
    [Tooltip("Drag the PlayerController GameObject here")]
    [SerializeField] private GameObject playerObject;

    private AudioSource audioSource;
    private float lastPlayedTime = -999f;
    private bool isFrozen = false;

    void Start()
    {
        audioSource = GetComponent<AudioSource>();
        if (audioSource == null)
            audioSource = gameObject.AddComponent<AudioSource>();

        audioSource.spatialBlend = 1f;
        audioSource.spatialize = true;
        audioSource.playOnAwake = false;

        // Auto find player if not assigned
        if (playerObject == null)
        {
            GameObject found = GameObject.FindWithTag("Player");
            if (found != null)
                playerObject = found;
        }

        // Auto find locomotor by searching all MonoBehaviours
        if (playerLocomotor == null && playerObject != null)
        {
            MonoBehaviour[] behaviours = playerObject.GetComponents<MonoBehaviour>();
            foreach (MonoBehaviour b in behaviours)
            {
                if (b.GetType().Name == "FirstPersonLocomotor")
                {
                    playerLocomotor = b;
                    Debug.Log("Found FirstPersonLocomotor!");
                    break;
                }
            }
        }

        Debug.Log("Locomotor: " + (playerLocomotor != null ? playerLocomotor.GetType().Name : "NULL"));
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag(triggerTag))
            TryFreeze();
    }

    void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.CompareTag(triggerTag))
            TryFreeze();
    }

    private void TryFreeze()
    {
        if (!isFrozen && Time.time - lastPlayedTime > cooldown)
        {
            if (squishSound != null)
                audioSource.PlayOneShot(squishSound, squishVolume);

            lastPlayedTime = Time.time;
            StartCoroutine(FreezePlayer());
        }
    }

    private IEnumerator FreezePlayer()
    {
        isFrozen = true;

        // Disable all MonoBehaviours on PlayerController that could cause movement
        MonoBehaviour[] behaviours = null;
        if (playerObject != null)
        {
            behaviours = playerObject.GetComponents<MonoBehaviour>();
            foreach (MonoBehaviour b in behaviours)
            {
                string typeName = b.GetType().Name;
                if (typeName == "FirstPersonLocomotor" || 
                    typeName == "CharacterController" ||
                    typeName.Contains("Locomotor") ||
                    typeName.Contains("Movement"))
                {
                    b.enabled = false;
                    Debug.Log("Disabled: " + typeName);
                }
            }
        }

        yield return new WaitForSeconds(freezeDuration);

        // Re-enable everything we disabled
        if (behaviours != null)
        {
            foreach (MonoBehaviour b in behaviours)
            {
                string typeName = b.GetType().Name;
                if (typeName == "FirstPersonLocomotor" || 
                    typeName == "CharacterController" ||
                    typeName.Contains("Locomotor") ||
                    typeName.Contains("Movement"))
                {
                    b.enabled = true;
                }
            }
        }

        isFrozen = false;
    }
}