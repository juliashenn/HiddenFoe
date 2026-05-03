using UnityEngine;

public class PlayerCollision : MonoBehaviour
{
    private Player _player;

    private void Awake()
    {
        _player = GetComponent<Player>();
        if (_player != null) {
            Debug.LogError("no plyaer component found");
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("LethalObject"))
        {
            Debug.Log("hit lethal object");
            _player.TriggerDeath();
        }
    } 
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
