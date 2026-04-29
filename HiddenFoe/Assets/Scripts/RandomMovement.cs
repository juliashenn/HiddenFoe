
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.AI;

public class RandomMovement : MonoBehaviour
{
    [Header("Random Movement")]
    [SerializeField] private string walkAnimName;
    [SerializeField] private string idleAnimName;
    public NavMeshAgent agent;
    public Animator anim;
    [SerializeField] private float range;
    [SerializeField] private float minDist;
    public Transform centerPoint;

    [Header("Suspicion")]
    public string suspiciousAnimName;
    public float viewRadius = 3f;
    public float viewAngle = 90f;
    public LayerMask targetMask;
    public LayerMask obstructionMask;

    private bool walking = false;

    private bool suspicious = false;
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        agent = GetComponent<NavMeshAgent>();    
        anim = GetComponent<Animator>();
        
        agent.updateRotation = false;
    }

    // Update is called once per frame
    void Update()
    {
        DetectTargets();
        if (suspicious)
        {
            agent.isStopped = true;
        }
        else {
            agent.isStopped = false;
            if (agent.hasPath)
            {
                Vector3 dir = (agent.steeringTarget - transform.position).normalized;
                dir.y = 0;

                if (dir != Vector3.zero)
                {
                    Quaternion lookRot = Quaternion.LookRotation(dir);
                    transform.rotation = Quaternion.RotateTowards(transform.rotation, lookRot, agent.angularSpeed * Time.deltaTime);
                }

                float angle = Vector3.Angle(transform.forward, dir);

                if (angle > 60f)
                {
                    agent.isStopped = true;
                }
                else
                {
                    agent.isStopped = false;
                }
            }
            if (agent.remainingDistance <= agent.stoppingDistance)
            {
                Vector3 point;
                if (RandomPoint(centerPoint.position, range, minDist, out point))
                {
                    Debug.DrawRay(point, Vector3.up, Color.blue, 1.0f);
                    agent.SetDestination(point);
                }
            }
        }

        bool isMoving = agent.hasPath && agent.remainingDistance > agent.stoppingDistance;
        if (agent.velocity.magnitude != 0.0f && isMoving && !walking) {
            anim.Play(walkAnimName);
            walking = true;
        }
        else if (agent.velocity.magnitude == 0.0f && walking) {
            walking = false;
            anim.Play(idleAnimName);
        }
    }

    bool RandomPoint(Vector3 center, float range, float minDist, out Vector3 result) {
        Vector3 randomPoint = center + Random.insideUnitSphere * range;
        randomPoint.y = center.y;

        if (Vector3.Distance(center, randomPoint) < minDist) {
            result = Vector3.zero;
            return false;
        }
        NavMeshHit hit;
        if (NavMesh.SamplePosition(randomPoint, out hit, 1.0f, NavMesh.AllAreas)) {
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
                        ReactToWeapon(target.gameObject, weapon);
                        break;
                    }
                }
            }
        }

        suspicious = sawWeapon;
    }

    void ReactToWeapon(GameObject obj, Weapon weapon)
    {
        suspicious = true;
        anim.Play(suspiciousAnimName);
    }
}
