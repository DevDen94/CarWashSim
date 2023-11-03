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
        AllCarWashMeshoff();

    }
    public void AllCarWash()
    {
        foreach(transition g in trt)
        {
            g.transitionAmount = 1f;
            Material m = g.gameObject.GetComponent<MeshRenderer>().material;
            m.SetFloat("_TransitionAmount", 1f);
            g.gameObject.transform.GetChild(0).gameObject.SetActive(false);
           
            g.gameObject.GetComponent<P3dPaintableTexture>().Redo();
            g.gameObject.GetComponent<P3dPaintableTexture>().Clear();
            g.gameObject.GetComponent<P3dPaintableTexture>().ClearStates();
        }
    }
    public void AllCarDirty()
    {
        foreach (transition g in trt)
        {
            g.transitionAmount = 0f;
            Material m = g.gameObject.GetComponent<MeshRenderer>().material;
            m.SetFloat("_TransitionAmount", 0f);
            g.isCompleteWash = false;
            //g.gameObject.transform.GetChild(0).gameObject.SetActive(true);
            g.gameObject.transform.GetChild(0).gameObject.SetActive(false);
            g.gameObject.GetComponent<P3dPaintableTexture>().Undo();
            g.gameObject.GetComponent<P3dPaintableTexture>().Clear();
            g.gameObject.GetComponent<P3dPaintableTexture>().ClearStates();
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
            g.gameObject.GetComponent<MeshCollider>().enabled = true;
        }
    }
    public void AllCarWashMeshoff()
    {
        //AllMeshColliderOf
        foreach (transition g in trt)
        {
            g.gameObject.GetComponent<MeshCollider>().enabled = false;
        }
    }


}
