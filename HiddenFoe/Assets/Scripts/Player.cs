using UnityEngine;

public class Player : MonoBehaviour
{

    public Canvas endScreen;

    void Start()
    {
        if (endScreen != null) 
        {
            endScreen.SetActive(false);
        }
    }

    void Update()
    {
        
    }

    void OnTriggerEnter(Collider other)
    {
        if (other.CompareTag("LethalObject"))
        {
            // LevelManager.EndGame();
            if (endScreen != null) 
            {
                endScreen.SetActive(true);
            }
        }
    }
}
