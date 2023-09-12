using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class LoadingScript : MonoBehaviour
{
    public Image progressBar;
    public Text progressText;
    public float loadingSpeed = 0.001f; // Control the loading speed here.
    public int Value;
    float progress;

    private void OnEnable()
    {

        if (!PlayerPrefs.HasKey("LN"))
        {
            PlayerPrefs.SetInt("LN", 1);
        }

        progress = 0f;

        if (Value==0)
            StartCoroutine(LoadAsyncScene("MainMenu"));
        if(Value==1)
            StartCoroutine(LoadAsyncScene("Level"+PlayerPrefs.GetInt("LN").ToString()));
    }

    private IEnumerator LoadAsyncScene(string sceneName)
    {
       
        

        if (progress < 1f)
        {
            progress += loadingSpeed;
            progress = Mathf.Clamp01(progress);

            progressBar.fillAmount = progress;
            progressText.text = (progress * 100f).ToString("F0") + "%";
            yield return new WaitForSeconds(0.01f);
            if (Value == 0)
                StartCoroutine(LoadAsyncScene("MainMenu"));
            if (Value == 1)
                StartCoroutine(LoadAsyncScene("Level" + PlayerPrefs.GetInt("LN").ToString()));
        }
        else
        {
            SceneManager.LoadScene(sceneName);
        }
       
        
    }
}

