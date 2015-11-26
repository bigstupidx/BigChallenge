using UnityEngine;
using System.Collections;

public class goal : MonoBehaviour {
	Animator info;
	// Use this for initialization
	void Start () {
		info = GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter2D (Collider2D col){
		print ("Bateu");
		if (col.gameObject.tag == "Player") {
			Destroy(this.gameObject);
			//info.SetBool("IsOpen",value);
			Time.timeScale = 0;
		}
	}
}