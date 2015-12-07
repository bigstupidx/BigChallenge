using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class goal : MonoBehaviour {
	public Transform menu;
	//public Button retryButton;
	public Text text;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter2D (Collider2D col){
		print ("Bateu");
		if (col.gameObject.tag == "Player") {
			Destroy(this.gameObject);
			Instantiate(menu,col.gameObject.transform.position + (col.gameObject.transform.forward * 2),col.gameObject.transform.rotation);
			Transform retry = GameObject.FindWithTag("GoToMap").transform;
			retry.GetComponent<Retry> ().activate();
			Time.timeScale = 0;
		}
	}
}