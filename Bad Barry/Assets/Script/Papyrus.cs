using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Papyrus : MonoBehaviour {

	public Button retryButton;
	public Text text;
	public bool click = false;
	
	
	// Use this for initialization
	void Start () {
		GameObject.FindWithTag ("Papyrus").SetActive (true);
		click = false;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	
	public void activate() {	
		click = true;
		text.text = "You Completed your first Mission";
	}
	
	public void retry() {
		if (click) {
			Application.LoadLevel (Application.loadedLevel);
			
		}
	}
}
