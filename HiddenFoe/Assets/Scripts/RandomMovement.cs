
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.AI;

public class RandomMovement : MonoBehaviour
{
    [SerializeField] private string walkAnimName;
    [SerializeField] private string idleAnimName;
    public NavMeshAgent agent;
    public Animator anim;
    [SerializeField] private float range;
    [SerializeField] private float minDist;
    public Transform centerPoint;

    private bool walking = false;
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
        if (agent.hasPath) {
            Vector3 dir = (agent.steeringTarget - transform.position).normalized;
            dir.y = 0;

            if (dir != Vector3.zero) {
                Quaternion lookRot = Quaternion.LookRotation(dir);
                transform.rotation = Quaternion.RotateTowards(transform.rotation, lookRot, agent.angularSpeed * Time.deltaTime);
            }

            float angle = Vector3.Angle(transform.forward, dir);

            if (angle > 60f) {
                agent.isStopped = true;
            } else {
                agent.isStopped = false;
            }
        }
        if (agent.remainingDistance <= agent.stoppingDistance) {
            Vector3 point;
            if (RandomPoint(centerPoint.position, range, minDist, out point)) {
                Debug.DrawRay(point, Vector3.up, Color.blue, 1.0f);
                agent.SetDestination(point);
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
}
