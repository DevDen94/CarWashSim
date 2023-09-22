using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GetchildMat : MonoBehaviour
{
    public static GetchildMat Instance;
    private void Awake()
    {
        Instance = this;
    }
    public Transform[] tr;
    public List<transition>  trt;
    // Start is called before the first frame update
    void Start()
    {
         tr = transform.GetComponentsInChildren<Transform>();
        foreach (Transform t in tr)
        {
            transition q = t.GetComponent<transition>();
            if (q != null)
            {
                trt.Add(q);
            }
        }
           

    }
    public void AllCarWash()
    {
        foreach(transition g in trt)
        {
            g.transitionAmount = 1f;
            Material m = g.gameObject.GetComponent<MeshRenderer>().material;
            m.SetFloat("_TransitionAmount", 1f);
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
