using UnityEngine;
using System.Collections;

public class Boss : MonoBehaviour {


	public Enemy myself;

	// Use this for initialization
	void Start () {
	
		myself = gameObject.GetComponent<Enemy>();
	}
	
	// Update is called once per frame
	void Update () {


		if(myself.dead){

			//reproduzir video
			Handheld.PlayFullScreenMovie ("BadBarryProl2_480.mov",Color.black,FullScreenMovieControlMode.CancelOnInput);


			GameObject.FindGameObjectWithTag("Player").GetComponent<Player>().Win();


		}



	
	}
}
