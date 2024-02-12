using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GunObject : MonoBehaviour
{
    public int _indexOfGun;

    private void OnTriggerEnter(Collider other)
    {
        if(other.gameObject.CompareTag("Player"))
        {
            this.gameObject.SetActive(false);

            foreach(GameObject guns in Gun.Instance._allGuns)
            {
                guns.SetActive(false);
            }

            Gun.Instance._allGuns[_indexOfGun].SetActive(true);
        }
    }
}
