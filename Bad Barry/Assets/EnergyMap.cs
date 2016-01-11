using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class EnergyMap : MonoBehaviour {


	GameBehavior behave;

	// Use this for initialization
	void Start () {
	
		behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();


	}
	
	// Update is called once per frame
	void Update () {

		var textEnergy =  gameObject.GetComponent<Text>();
		textEnergy.text = behave.energy.ToString();

	}


	public void goToAtributes(){

		behave.GoToAtributesScreen();

	}

	public void goToMission(int mission){

		behave.GoToMission(mission);

	}

}
