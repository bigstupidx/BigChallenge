using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Retry : MonoBehaviour {

	public Button retryButton;
	public Text text;
	public string textContent;
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
		text.text = textContent;
	}

	public void retry()
	{
		if(click){
			if(textContent == "retry"){
				Application.LoadLevel ("NewPrototype");
			}else{

				Application.LoadLevel ("MapScene");
			}


		}

	}
}
