using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Playables;

public class TimelineManager : MonoBehaviour
{
    [SerializeField] PlayableDirector[] _startingCutscenes;
    public PlayableDirector GettingCurrentCutScene()
    {
        return _startingCutscenes[PlayerPrefs.GetInt("CurrentLevel")];
    }
}
