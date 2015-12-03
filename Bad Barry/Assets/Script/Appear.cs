using UnityEngine;
using System.Collections;

public class Appear : MonoBehaviour {
	
	public GameObject[] floors;
	
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
	}
	
	void OnTriggerEnter2D (Collider2D col){
		if (col.gameObject.tag == "Player") {
			print (floors.Length);
			foreach (GameObject floor in floors) {
				floor.SetActive(true);
			}
		}
	}
	
}