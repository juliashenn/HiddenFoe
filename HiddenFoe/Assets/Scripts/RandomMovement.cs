using UnityEngine;
using UnityEngine.AI;
using UnityEngine.UI;

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

    [Header("Suspicion")]
    public string suspiciousAnimName;
    public float viewRadius = 3f;
    public float viewAngle = 90f;
    public LayerMask targetMask;
    public LayerMask obstructionMask;

    private Slider suspicionSlider;

    private bool walking = false;
    private bool suspicious = false;

    void Start()
    {
        agent = GetComponent<NavMeshAgent>();
        anim = GetComponent<Animator>();

        // Get slider safely
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

        agent.updateRotation = false;
    }

    void Update()
    {
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
            suspicionSlider.value = Mathf.Clamp(suspicionSlider.value + 0.5f*Time.deltaTime, 0f, 1f);
            agent.isStopped = true;
        }
        else
        {
            suspicionSlider.value = Mathf.Clamp(suspicionSlider.value - 0.5f*Time.deltaTime, 0f, 1f);

            if (suspicionSlider.value <= 0.01f)
            {
                suspicionSlider.gameObject.SetActive(false);
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
                Debug.DrawRay(point, Vector3.up, Color.blue, 1.0f);
                agent.SetDestination(point);
            }
        }
    }

    void HandleAnimation()
    {
        bool isMoving = agent.hasPath && agent.remainingDistance > agent.stoppingDistance;

        if (agent.velocity.magnitude > 0.01f && isMoving && !walking)
        {
            anim.Play(walkAnimName);
            walking = true;
        }
        else if (agent.velocity.magnitude <= 0.01f && walking)
        {
            walking = false;
            anim.Play(idleAnimName);
        }
    }

    bool RandomPoint(Vector3 center, float range, float minDist, out Vector3 result)
    {
        Vector3 randomPoint = center + Random.insideUnitSphere * range;
        randomPoint.y = center.y;

        if (Vector3.Distance(center, randomPoint) < minDist)
        {
            result = Vector3.zero;
            return false;
        }

        if (NavMesh.SamplePosition(randomPoint, out NavMeshHit hit, 1.0f, NavMesh.AllAreas))
        {
            result = hit.position;
            return true;
        }

        result = Vector3.zero;
        return false;
    }

    void DetectTargets()
    {
        Collider[] targets = Physics.OverlapSphere(transform.position, viewRadius, targetMask);

        bool sawWeapon = false;

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
                        ReactToWeapon();
                        break;
                    }
                }
            }
        }

        suspicious = sawWeapon;
    }

    void ReactToWeapon()
    {
        if (suspicionSlider != null)
        {
            suspicionSlider.gameObject.SetActive(true);
        }

        anim.Play(suspiciousAnimName);
    }
}