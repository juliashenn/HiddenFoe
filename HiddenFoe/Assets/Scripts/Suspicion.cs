using UnityEngine;

public class Suspicion : MonoBehaviour
{
    public float viewRadius = 10f;
    public float viewAngle = 90f;
    public LayerMask targetMask;
    public LayerMask obstructionMask;

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        DetectTargets();
    }

    void DetectTargets()
    {
        Collider[] targets = Physics.OverlapSphere(transform.position, viewRadius, targetMask);

        foreach (Collider target in targets)
        {
            Vector3 dirToTarget = (target.transform.position - transform.position).normalized;

            if (Vector3.Angle(transform.forward, dirToTarget) < viewAngle / 2)
            {
                float distance = Vector3.Distance(transform.position, target.transform.position);

                if (!Physics.Raycast(transform.position, dirToTarget, distance, obstructionMask))
                {
                    Weapon weapon = target.GetComponent<Weapon>();

                    if (weapon != null)
                    {
                        ReactToWeapon(target.gameObject, weapon);
                    }
                }
            }
        }
    }

    void ReactToWeapon(GameObject obj, Weapon weapon)
    {
        Debug.Log("saw a weapon!");
    }
}
