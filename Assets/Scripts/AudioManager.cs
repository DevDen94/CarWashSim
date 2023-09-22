using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class AudioManager : MonoBehaviour
{
    public AudioSource audioMixer,ButtonClick,WashClick; // Reference to your Audio Mixer.
    private string volumeKey = "Volume"; // Key for PlayerPrefs.
    public Slider VolumeSlider;
    public Text Volume;

    public static AudioManager Instance;


    private void Awake()
    {
        Instance = this;
    }


    void Start()
    {
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
        }
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


}
