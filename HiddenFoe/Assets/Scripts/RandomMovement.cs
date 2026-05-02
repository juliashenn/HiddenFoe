using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;
using System.Collections;

public class RandomMovement : MonoBehaviour
{
    [Header("Random Movement")]
    [SerializeField] private string walkAnimName;
    [SerializeField] private string idleAnimName;
    [SerializeField] private float range;
    [SerializeField] private float minDist;
    public Transform centerPoint;

    private NavMeshAgent agent;
    private Animator anim;

    [Header("Audio")]
    public AudioSource footstepAudio;
    public AudioSource suspicionAudio;
    public AudioSource suspicionTickAudio;

    [Header("Suspicion")]
    public string suspiciousAnimName;
    public float viewRadius = 3f;
    public float viewAngle = 90f;
    public LayerMask targetMask;
    public LayerMask obstructionMask;

    private Slider suspicionSlider;
    private float suspicionMultiplier = 1.0f;

    private bool walking = false;
    private bool suspicious = false;
    private bool wasSuspiciousLastFrame = false;
    private bool isSuspiciousAnimPlaying = false;

    [Header("Death")]
    public ParticleSystem bleedParticles;
    public AudioSource bleedingSound;
    public AudioSource deathSound;

    private bool isDead = false;

    void Start()
    {
        agent = GetComponent<NavMeshAgent>();
        anim = GetComponent<Animator>();

        Canvas canvas = GetComponentInChildren<Canvas>();
        if (canvas != null)
        {
            suspicionSlider = canvas.GetComponentInChildren<Slider>();

            if (suspicionSlider != null)
            {
                suspicionSlider.value = 0f;
                suspicionSlider.gameObject.SetActive(false);
            }
        }

        if (bleedParticles != null) {
            bleedParticles.Stop();
        }

        agent.updateRotation = false;
    }

    void Update()
    {
        if (isDead) return;

        DetectTargets();

        HandleSuspicionUI();
        HandleMovement();
        HandleAnimation();
    }

    void HandleSuspicionUI()
    {
        if (suspicionSlider == null) return;

        if (suspicious)
        {
            suspicionSlider.gameObject.SetActive(true);
            suspicionSlider.value = Mathf.Clamp(
                suspicionSlider.value + suspicionMultiplier * Time.deltaTime,
                0f, 1f
            );

            agent.isStopped = true;

            if (suspicionTickAudio != null && !suspicionTickAudio.isPlaying)
                suspicionTickAudio.Play();
        }
        else
        {
            suspicionSlider.value = Mathf.Clamp(
                suspicionSlider.value - 0.5f * Time.deltaTime,
                0f, 1f
            );

            if (suspicionSlider.value <= 0.01f)
            {
                suspicionSlider.gameObject.SetActive(false);
                isSuspiciousAnimPlaying = false;
            }

            agent.isStopped = false;
        }
    }

    void HandleMovement()
    {
        if (suspicious) return;

        if (agent.hasPath)
        {
            Vector3 dir = (agent.steeringTarget - transform.position).normalized;
            dir.y = 0;

            if (dir != Vector3.zero)
            {
                Quaternion lookRot = Quaternion.LookRotation(dir);
                transform.rotation = Quaternion.RotateTowards(
                    transform.rotation,
                    lookRot,
                    agent.angularSpeed * Time.deltaTime
                );
            }

            float angle = Vector3.Angle(transform.forward, dir);
            agent.isStopped = angle > 60f;
        }

        if (agent.remainingDistance <= agent.stoppingDistance)
        {
            if (RandomPoint(centerPoint.position, range, minDist, out Vector3 point))
            {
                agent.SetDestination(point);
            }
        }
    }

    void HandleAnimation()
    {
        if (suspicious)
        {
            if (!isSuspiciousAnimPlaying)
            {
                anim.Play(suspiciousAnimName);
                isSuspiciousAnimPlaying = true;
            }
            return;
        }

        bool isMoving = agent.hasPath && agent.remainingDistance > agent.stoppingDistance;

        if (agent.velocity.magnitude > 0.1f && isMoving)
        {
            if (!walking)
            {
                anim.Play(walkAnimName);
                walking = true;
            }

            if (footstepAudio != null && !footstepAudio.isPlaying)
                footstepAudio.Play();
        }
        else
        {
            if (walking)
            {
                anim.Play(idleAnimName);
                walking = false;
            }

            if (footstepAudio != null && footstepAudio.isPlaying)
                footstepAudio.Stop();
        }
    }

    bool RandomPoint(Vector3 center, float range, float minDist, out Vector3 result)
    {
        for (int i = 0; i < 10; i++)
        {
            Vector3 randomPoint = center + Random.insideUnitSphere * range;
            randomPoint.y = center.y;

            if (Vector3.Distance(center, randomPoint) < minDist)
                continue;

            if (NavMesh.SamplePosition(randomPoint, out NavMeshHit hit, 1.0f, NavMesh.AllAreas))
            {
                result = hit.position;
                return true;
            }
        }

        result = Vector3.zero;
        return false;
    }

    void DetectTargets()
    {
        Collider[] targets = Physics.OverlapSphere(transform.position, viewRadius, targetMask);

        bool sawWeapon = false;
        float newMultiplier = 1.0f;

        foreach (Collider target in targets)
        {
            Vector3 dirToTarget = (target.transform.position - transform.position).normalized;

            if (Vector3.Angle(transform.forward, dirToTarget) < viewAngle / 2)
            {
                float distance = Vector3.Distance(transform.position, target.transform.position);

                if (!Physics.Raycast(transform.position, dirToTarget, distance, obstructionMask))
                {
                    Weapon weapon = target.GetComponentInParent<Weapon>();

                    if (weapon != null)
                    {
                        sawWeapon = true;

                        if (!wasSuspiciousLastFrame && suspicionAudio != null)
                            suspicionAudio.Play();

                        newMultiplier = (weapon.weaponType == WeaponType.Gun) ? 1.0f : 0.5f;
                        break;
                    }
                }
            }
        }

        wasSuspiciousLastFrame = suspicious;
        suspicious = sawWeapon;
        suspicionMultiplier = newMultiplier;
    }

    public void Hurt()
    {
        if (!isDead)
            StartCoroutine(DeathRoutine());
    }

    IEnumerator DeathRoutine()
    {
        isDead = true;
        agent.isStopped = true;

        if (bleedParticles != null) bleedParticles.Play();
        if (bleedingSound != null) bleedingSound.Play();

        yield return new WaitForSeconds(2f);

        if (deathSound != null) deathSound.Play();

        foreach (Renderer r in GetComponentsInChildren<Renderer>())
            r.enabled = false;

        if (anim != null) anim.enabled = false;

        yield return new WaitForSeconds(5f);

        if (bleedParticles != null) bleedParticles.Stop();

        foreach (Renderer r in GetComponentsInChildren<Renderer>())
            r.enabled = true;

        if (anim != null) anim.enabled = true;

        agent.isStopped = false;
        isDead = false;
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("LethalObject"))
        {
            Hurt();
        }
    }
}