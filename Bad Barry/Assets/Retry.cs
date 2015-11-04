using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class Retry : MonoBehaviour {

	public Button retryButton;
	public Text text;


	// Use this for initialization
	void Start () {
		retryButton.enabled = false;


	}
	
	// Update is called once per frame
	void Update () {

	}

	public void activate()
	{
		retryButton.enabled = true;
		text.text = "RETRY";
	}

	public void retry()
	{
		Application.LoadLevel (Application.loadedLevel);

	}
}
