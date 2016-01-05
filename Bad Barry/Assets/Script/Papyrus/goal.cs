using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class goal : MonoBehaviour {
	public Transform menu;
	//public Button retryButton;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter2D (Collider2D col){
		if (col.gameObject.tag == "Player") {
			Destroy(this.gameObject);
			Instantiate(menu,col.gameObject.transform.position + (col.gameObject.transform.forward * 2),col.gameObject.transform.rotation);
			var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
			behave.pause = true;
		}
	}
}