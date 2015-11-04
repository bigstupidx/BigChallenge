using UnityEngine;
using System.Collections;

public class Appear : MonoBehaviour {

	public GameObject floor;
	public GameObject wall;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void AppearThing()
	{
		wall.SetActive(true);
		floor.SetActive(true);

	}

	void OnTriggerEnter2D (Collider2D col){


		if (col.gameObject.tag == "Player") {
		
			wall.SetActive(true);
			floor.SetActive(true);
		
		}


	}

}
