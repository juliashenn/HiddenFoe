using UnityEngine;
using TMPro;

public class LevelManager : MonoBehaviour
{
    [Header("Timer")]
    public TextMeshProUGUI Timer;
    public float roundStartTime = 180;
    public float timeRemaining;
    public bool timeRunning = false;
    
    // Start is called once before the first execution of Update after the MonoBehaviour is created
    void Start()
    {
        StartTimer();
    }

    void StartTimer()
    {
        timeRemaining = roundStartTime;
        timeRunning = true;
    }

    // Update is called once per frame
    void Update()
    {
        if (timeRemaining > 0) 
        {
            timeRemaining -= Time.deltaTime;
            DisplayTime(timeRemaining);
        }
        else
        {
            timeRemaining = 0;
            timeRunning = false;
        }
    }

    void DisplayTime(float timeToDisplay) 
    {
        timeToDisplay += 1;
        float minutes = Mathf.FloorToInt(timeToDisplay / 60);
        float seconds = Mathf.FloorToInt(timeToDisplay % 60);
        Timer.text = string.Format("{0:00}:{1:00}", minutes, seconds);
    }

    void RestartLevel ()
    {
        return;
    }
}
