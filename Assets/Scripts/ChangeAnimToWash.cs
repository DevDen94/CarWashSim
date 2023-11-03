using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeAnimToWash : MonoBehaviour
{
    //public Avatar avatar;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    public void ChangeAnim(RuntimeAnimatorController anim)
    {
        this.gameObject.GetComponent<Animator>().runtimeAnimatorController = anim;
        //this.gameObject.GetComponent<Animator>().avatar = avatar;


    }
}
