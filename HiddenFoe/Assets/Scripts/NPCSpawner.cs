using UnityEngine;
using System.Collections.Generic;
using UnityEngine.AI;

public class NPCSpawner : MonoBehaviour
{
    [Header("NPC")]
    public GameObject npcPrefab;
    public int npcCount;

    [Header("Spawn Area")]
    public Vector3 center;
    public Vector3 size;

    [Header("NavMesh Settings")]
    public float sampleRadius = 5f;
    public LayerMask groundMask;

    private List<GameObject> spawnedNPCs = new List<GameObject>();
    private bool hasSpawned = false;

    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        Debug.Log("Spawner center: " + center);
        SpawnAllNPCs();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SpawnAllNPCs(){
        if (hasSpawned) return;
        for (int i = 0; i < npcCount; i++) {
            Vector3 spawnPos;
            bool found = TryGetValidNavMeshPoint(out spawnPos);

            if (!found) {
                spawnPos = center;
            }

            GameObject npc = Instantiate(npcPrefab, spawnPos, Quaternion.identity);
            spawnedNPCs.Add(npc);
        }

        hasSpawned = true;
    }

    bool TryGetValidNavMeshPoint(out Vector3 result) {
        for (int attempt = 0; attempt < 30; attempt++) {
            Vector3  randomPoint = center + new Vector3(Random.Range(-size.x/2, size.x/2), 50f, Random.Range(-size.z/2, size.z/2));

            Ray ray = new Ray(randomPoint, Vector3.down);

            if (Physics.Raycast(ray, out RaycastHit hit, 200f, groundMask)) {
                NavMeshHit navHit;
                if (NavMesh.SamplePosition(hit.point, out navHit, sampleRadius, NavMesh.AllAreas)) {
                    result = navHit.position;
                    return true;
                }
            }
        }
        result = Vector3.zero;
        return false;
    }

    public void ResetRound() {
        for (int i = 0; i < spawnedNPCs.Count; i++) {
            if(spawnedNPCs[i] != null) {
                Destroy(spawnedNPCs[i]);
            }
        }
        spawnedNPCs.Clear();
        hasSpawned = false;
    }
}
