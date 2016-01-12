using UnityEngine;
using System.Collections;

public class MusicFunctions : MonoBehaviour {
	
	public AudioSource music;
	public float minVolume;
	
	
	private bool fade = false;
	public float fadeTime;
	private float decrease;
	
	// Use this for initialization
	void Start () {
		if (fadeTime == 0) {
			
			fadeTime = 1;
			
		}
		
		
		if (!music) {
			
			music = GetComponent<AudioSource>();
			
		}
		decrease = ((music.volume - minVolume) / fadeTime) ;
		
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		
		if (fade) {
			
			if(music.volume > minVolume)
			{
				music.volume = music.volume - (decrease*Time.fixedDeltaTime);
			}
			else
			{
				fade = false;
			}
			
		}
		
		
	}
	
	
	public void StartFade()
	{
		fade = true;
		
	}
	
	
}
