using UnityEngine;
using System.Collections;
using UnityEngine.UI;


//[RequireComponent (typeof(AudioSource))] //quando instancia esse script, um audio source será criado automaticamente

public class VideoFuntions : MonoBehaviour {



	void Start () {
		Handheld.PlayFullScreenMovie ("BadBarryEp2_480.mov",Color.black,FullScreenMovieControlMode.CancelOnInput);
		Application.LoadLevel ("NewPrototype");
	}

}
