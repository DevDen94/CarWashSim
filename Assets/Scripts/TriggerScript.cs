using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerScript : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        
    }

    public IEnumerator OnTriggerEnter(Collider other)
    {
        if(other.gameObject.tag == "CarWash")
        {
           
            this.gameObject.transform.SetPositionAndRotation(other.transform.position, other.transform.rotation);
            other.gameObject.SetActive(false);
            this.gameObject.GetComponent<Rigidbody>().isKinematic = true;
            this.GetComponent<PrometeoCarController>().enabled = false;
            GameObject d = Instantiate(GamePlayController.instance.AnimationCam, this.transform);
            yield return new WaitForSeconds(3f);
            Destroy(d);
            GamePlayController.instance.SwitchControlToCarWash();

        }
        yield return null;
    }
}
