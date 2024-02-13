using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class AudioManager : MonoBehaviour
{
    public AudioSource audioMixer,WashClick,SpraySound,soapSpraySound, completeSound, failSound; // Reference to your Audio Mixer.
    private string volumeKey = "Volume"; // Key for PlayerPrefs.
    public Slider VolumeSlider;

    public AudioSource[] _allSfx;

    public Slider SFXSlider;
    public Text Volume, sfxText;
    
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
            if(VolumeSlider != null)
            {
                VolumeSlider.value = value;
                Volume.text = (VolumeSlider.value * 100).ToString("000");
            }
        }
        else
        {
            if (audioMixer && VolumeSlider != null)
            {
                audioMixer.volume = 1f;
                VolumeSlider.value = 1f;
            }
        }
        
        if(PlayerPrefs.HasKey("sfx"))
        {
            float value = PlayerPrefs.GetFloat("sfx");

            foreach(AudioSource source in _allSfx)
            { 
                source.volume = value;
            }

            if(SFXSlider != null)
            {
                SFXSlider.value = value;

                sfxText.text = (SFXSlider.value * 100).ToString("000");
            }
        }
        else
        {
            if(_allSfx != null && SFXSlider!= null)
            {
                float value = 1f;

                foreach (AudioSource source in _allSfx)
                {
                    source.volume = value;
                }

                SFXSlider.value = value;
            }
        }
    }

    public void SetVolume(float volume)
    {
        // Set the audio mixer's master volume.
        audioMixer.volume = VolumeSlider.value;
        Volume.text = (VolumeSlider.value * 100).ToString("000");

        // Save the volume setting to PlayerPrefs.
        PlayerPrefs.SetFloat("Volume", VolumeSlider.value);
        PlayerPrefs.Save();
    }

    public void SetSfxVolume()
    {
        // Set the audio mixer's master volume.
        foreach(AudioSource source in _allSfx)
        {
            source.volume = SFXSlider.value;
        }
        sfxText.text = (SFXSlider.value * 100).ToString("000");

        // Save the volume setting to PlayerPrefs.
        PlayerPrefs.SetFloat("sfx", SFXSlider.value);
        PlayerPrefs.Save();
    }

    public void Buttonclick()
    {
        _allSfx[0].Play();
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
            //Water Sound off
            SpraySound.Stop();
            SpraySoundBoolOff = true;
            SpraySoundBoolOn = false;
        }
       
    }

    public void CompleteSound()
    {
        completeSound.Play();
    }

    public void FailSound()
    {
        failSound.Play();
    }

    public void SoapSpraySoundOn()
    {
        soapSpraySound.Play();
    }

    public void SoapSpraySoundOff()
    {
        soapSpraySound.Stop();
    }

}
