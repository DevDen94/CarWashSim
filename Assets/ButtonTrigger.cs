using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonTrigger : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    public IEnumerator OnTriggerStay(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
           CheckLifter.instance.DisableUpLift();
        }
        yield return null;
    }
    
    public IEnumerator OnTriggerExit(Collider other)
    {
        if (other.gameObject.tag == "Player")
        {
            CheckLifter.instance.EnableUplift();
        }
        yield return null;
    }
}
