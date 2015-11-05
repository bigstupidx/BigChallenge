using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class AtributeScreen : MonoBehaviour {

	private GameBehavior script; 

	// Use this for initialization
	void Start () {

		var x = GameObject.FindGameObjectWithTag("Behaviour");
		script = x.GetComponent<GameBehavior>();
		UpdatePoints();

	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void incrementStrength(){
		script.incrementStrength();
		script.levelingUp = false;
		UpdatePoints();


	}
	
	public void incrementAgility(){
		script.incrementAgility();
		script.levelingUp = false;
		UpdatePoints();



		
	}
	
	public void incrementInteligence(){
		script.incrementInteligence();
		script.levelingUp = false;
		UpdatePoints();


		
	}
	
	public void incrementVitality(){
		script.incrementVitality();
		script.levelingUp = false;
		UpdatePoints();

		
	}

	public void goBack(){
		script.GoToLastScene();
	}

	public void UpdatePoints(){

		var text = GameObject.FindGameObjectWithTag("Points");
		text.GetComponent<Text>().text = script.expendPoints.ToString();


	}

}
