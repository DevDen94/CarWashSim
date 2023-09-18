using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ControlCanvas : MonoBehaviour
{
    public static ControlCanvas instance;
    private void Awake()
    {
        instance = this;
    }
    public GameObject throttleBtn,Reverse,Turnright,TurnLeft,HbBtn;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
