using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class Retry : MonoBehaviour {

	public Button retryButton;
	public Text text;
	public bool click = false;


	// Use this for initialization
	void Start () {

		click = false;
	}
	
	// Update is called once per frame
	void Update () {

	}

	public void activate()
	{	
		click = true;
		text.text = "RETRY";
	}

	public void retry()
	{
		if(click){
			Application.LoadLevel (Application.loadedLevel);

		}

	}
}
