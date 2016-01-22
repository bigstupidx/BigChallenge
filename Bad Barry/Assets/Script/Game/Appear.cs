using UnityEngine;
using System.Collections;

public class Appear : MonoBehaviour {
	
	public GameObject[] floors;
	public GameObject[] destroyable;
	
	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	
	public void AppearThing()
	{
		foreach (GameObject floor in floors) {
			floor.SetActive(true);
		}
		foreach (GameObject destroy in destroyable) {
			Destroy(destroy);
		}


	}
	
	void OnTriggerEnter2D (Collider2D col){
		if (col.gameObject.tag == "Player" && gameObject.tag != "Destructable") {
			print (floors.Length);
			foreach (GameObject floor in floors) {
				floor.SetActive(true);
			}
		}
	}
	
}