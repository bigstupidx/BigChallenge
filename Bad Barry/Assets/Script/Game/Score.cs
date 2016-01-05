using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class Score : MonoBehaviour {

	int score = 0;
	Text scoreText;

	// Use this for initialization
	void Start () {
	
		scoreText = GetComponent<Text> ();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void reset(){

		score = 0;
		scoreText.text = score.ToString();

	}
	public void inc(){
	
		score += 100;
		scoreText.text = score.ToString();

	
	}
}
