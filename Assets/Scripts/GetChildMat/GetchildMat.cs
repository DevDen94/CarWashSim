using PaintIn3D;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GetchildMat : MonoBehaviour
{
    //This Script Is Use For Get Materials For Complete Car Wash//
    public static GetchildMat Instance;
    private void Awake()
    {
        Instance = this;
    }
    public Transform[] tr;
    public List<transition>  trt;
    public List<ParticleSystem> particles;
    // Start is called before the first frame update
    void Start()
    {
         tr = transform.GetComponentsInChildren<Transform>();
        foreach (Transform t in tr)
        {
            transition q = t.GetComponent<transition>();
            ParticleSystem p = t.GetComponent<ParticleSystem>();
            if (q != null)
            {
                trt.Add(q);
               
            }
            if (p != null)
            {
                particles.Add(p);
            }
           
        }
        GamePlayController.instance.playerObj.GetComponent<Rigidbody>().isKinematic = true;
        GamePlayController.instance.playerObj.GetComponent<BoxCollider>().enabled = false;
        GamePlayController.instance.Panels[2].SetActive(true);
        Invoke(nameof(AllCarWashMeshoff), 6f);
        //AllCarWashMeshoff();

    }
    public void AllCarWash()
    {
        foreach(transition g in trt)
        {
            g.transitionAmount = 1f;
            Material m = g.gameObject.GetComponent<MeshRenderer>().material;
            m.SetFloat("_TransitionAmount", 1f);
            //m.SetColor("_BaseColor", Color.white);
            g.GetComponent<PaintTarget>().ClearPaint();
            g.gameObject.transform.GetChild(0).gameObject.SetActive(false);
           

        }
    }
    public void AllCarDirty()
    {
        foreach (transition g in trt)
        {
           
            g.GetComponent<PaintTarget>().ClearPaint();
            g.IsSoap = false;
            g.ForWash = false;
            g.isCompleteWash = false;
            //g.gameObject.transform.GetChild(0).gameObject.SetActive(true);
            g.gameObject.transform.GetChild(0).gameObject.SetActive(false);
           

        }
        foreach (ParticleSystem g in particles)
        {
            g.Stop();

        }
    }
    public void AllCarWashMeshON()
    {
        //AllMeshColliderOn
        foreach (transition g in trt)
        {
            if (g.gameObject.GetComponent<MeshCollider>() != null)
            {
                g.gameObject.GetComponent<MeshCollider>().enabled = true;
            }
            else
            {
                g.gameObject.GetComponent<BoxCollider>().enabled = true;
            }
        }
    }
    public void AllCarWashMeshoff()
    {
        //AllMeshColliderOf
        foreach (transition g in trt)
        {
            if (g.gameObject.GetComponent<MeshCollider>() != null)
            {
                g.gameObject.GetComponent<MeshCollider>().enabled = false;
            }
            else
            {
                g.gameObject.GetComponent<BoxCollider>().enabled = false;
            }
            
        }
        GamePlayController.instance.playerObj.GetComponent<Rigidbody>().isKinematic = false;
        GamePlayController.instance.playerObj.GetComponent<BoxCollider>().enabled = true;
        GamePlayController.instance.Panels[2].SetActive(false);
        TriggerScript.Instance.DirtyObjects.SetActive(false);
    }
    


}
