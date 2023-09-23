using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class AudioManager : MonoBehaviour
{
    public AudioSource audioMixer,ButtonClick,WashClick,SpraySound; // Reference to your Audio Mixer.
    private string volumeKey = "Volume"; // Key for PlayerPrefs.
    public Slider VolumeSlider;
    public Text Volume;
    
    public static AudioManager Instance;
    bool SpraySoundBoolOn, SpraySoundBoolOff;

    private void Awake()
    {
        Instance = this;
    }


    void Start()

    {
        if (PlayerPrefs.HasKey("Volume"))
        {
            float value = PlayerPrefs.GetFloat("Volume");
            audioMixer.volume = value;
            VolumeSlider.value = value;
            Volume.text = (VolumeSlider.value * 100).ToString();
            Debug.Log("has");
        }
        else
        {
            audioMixer.volume = 0.5f;
            VolumeSlider.value = 0.5f;
            Debug.Log("haselse");
        }
        
        

        /*
        if (PlayerPrefs.HasKey("Volume"))
        {
            float savedVolume = PlayerPrefs.GetFloat("Volume");
            VolumeSlider.value = savedVolume;

            Debug.Log("Volume");
        }
        else
        {
            Debug.Log("Volume1");

            audioMixer.volume = VolumeSlider.value;
            Volume.text = (VolumeSlider.value * 100).ToString();
            PlayerPrefs.SetFloat("Volume", VolumeSlider.value);
        }*/
    }

    public void SetVolume(float volume)
    {
        // Set the audio mixer's master volume.
        audioMixer.volume = VolumeSlider.value;
        Volume.text = (VolumeSlider.value * 100).ToString();

        // Save the volume setting to PlayerPrefs.
        PlayerPrefs.SetFloat("Volume", VolumeSlider.value);
        PlayerPrefs.Save();
    }

    public void Buttonclick()
    {
        ButtonClick.Play();
    }
    public void SpraySoundFuncOn()
    {
        if(SpraySoundBoolOn == false)
        {
            //Water Sound on
            SpraySound.Play();
            SpraySoundBoolOn = true;
            SpraySoundBoolOff = false;
        }
       
    }
    public void SpraySoundFuncOff()
    {
        
        if(SpraySoundBoolOff == false)
        {
            //Water Sound of
            SpraySound.Stop();
            SpraySoundBoolOff = true;
            SpraySoundBoolOn = false;
        }
       
    }


}
