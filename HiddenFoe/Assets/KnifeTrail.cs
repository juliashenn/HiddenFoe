using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Oculus.Interaction;

public class KnifeTrail : MonoBehaviour
{
    [Header("Grab Settings")]
    [Tooltip("The Grabbable component on the parent cube")]
    [SerializeField] private Grabbable parentGrabbable;

    [Header("Trail Settings")]
    [Tooltip("Optional: assign an empty GameObject to set exactly where the trail emits from")]
    [SerializeField] private Transform trailPoint;
    [Tooltip("The TrailRenderer on the knife mesh")]
    [SerializeField] private TrailRenderer trailRenderer;
    [Tooltip("How long the trail lasts in seconds")]
    [SerializeField] private float trailTime = 0.3f;
    [Tooltip("Width of the trail at the start")]
    [SerializeField] private float startWidth = 0.05f;
    [Tooltip("Width of the trail at the end")]
    [SerializeField] private float endWidth = 0f;
    [Tooltip("Color of the trail")]
    [SerializeField] private Color trailColor = new Color(1f, 1f, 1f, 0.8f);

    [Header("Meta XR Input Settings")]
    [Tooltip("Which hand holds the knife")]
    [SerializeField] private OVRInput.Controller holdingController = OVRInput.Controller.RTouch;
    [Tooltip("Which button activates the trail")]
    [SerializeField] private OVRInput.Button trailButton = OVRInput.Button.PrimaryIndexTrigger;

    [Header("Sound Settings")]
    [Tooltip("Looping slash sound while trigger is held")]
    [SerializeField] private AudioClip slashSound;
    [Tooltip("Volume of the slash sound")]
    [SerializeField] [Range(0f, 1f)] private float slashVolume = 1f;
    private AudioSource audioSource;

    void Start()
    {
        if (parentGrabbable == null)
            parentGrabbable = GetComponentInParent<Grabbable>();

        // If a trailPoint is assigned, put the TrailRenderer on it
        // Otherwise use this object
        GameObject trailTarget = trailPoint != null ? trailPoint.gameObject : gameObject;

        if (trailRenderer == null)
            trailRenderer = trailTarget.GetComponent<TrailRenderer>();

        if (trailRenderer == null)
            trailRenderer = trailTarget.AddComponent<TrailRenderer>();

        // Configure trail
        trailRenderer.time = trailTime;
        trailRenderer.startWidth = startWidth;
        trailRenderer.endWidth = endWidth;
        trailRenderer.material = new Material(Shader.Find("Sprites/Default"));

        // Set gradient color
        Gradient gradient = new Gradient();
        gradient.SetKeys(
            new GradientColorKey[] {
                new GradientColorKey(trailColor, 0f),
                new GradientColorKey(trailColor, 1f)
            },
            new GradientAlphaKey[] {
                new GradientAlphaKey(trailColor.a, 0f),
                new GradientAlphaKey(0f, 1f)
            }
        );
        trailRenderer.colorGradient = gradient;
        trailRenderer.enabled = false;

        // Set up audio source
        audioSource = GetComponent<AudioSource>();
        if (audioSource == null)
            audioSource = gameObject.AddComponent<AudioSource>();

        audioSource.clip = slashSound;
        audioSource.loop = true;
        audioSource.volume = slashVolume;
        audioSource.spatialBlend = 1f; // 3D positional audio
        audioSource.playOnAwake = false;
    }

    void Update()
    {
        bool isGrabbed = parentGrabbable != null && parentGrabbable.SelectingPointsCount > 0;
        bool triggerHeld = OVRInput.Get(trailButton, holdingController);

        if (isGrabbed && triggerHeld)
        {
            trailRenderer.enabled = true;

            // Start sound if not already playing
            if (slashSound != null && !audioSource.isPlaying)
                audioSource.Play();
        }
        else
        {
            trailRenderer.enabled = false;

            // Stop sound when trigger released or knife dropped
            if (audioSource.isPlaying)
                audioSource.Stop();
        }
    }
}