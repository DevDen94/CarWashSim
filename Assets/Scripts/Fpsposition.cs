using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Fpsposition : MonoBehaviour
{
    public static Fpsposition Instance;
    private void Awake()
    {
        if (Instance == null)
        {
            Instance = this;
        }
    }
    // Start is called before the first frame update
    void Start()
    {
        
    }

    public void FpsPosition()
    {
        this.GetComponent<CharacterController>().enabled = false;
        this.gameObject.transform.SetPositionAndRotation(GamePlayController.instance.FpsStartPoint.transform.position,
                             GamePlayController.instance.FpsStartPoint.transform.rotation);
        this.GetComponent<CharacterController>().enabled = true;
    }
}
