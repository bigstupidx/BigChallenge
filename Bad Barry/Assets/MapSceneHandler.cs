using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MapSceneHandler : MonoBehaviour {


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


	public void goToAtributes(AudioSource audio){

		behave.GoToAtributesScreen(audio);

	}

	public void goToInventoryScreen(AudioSource audio){
		
		behave.GoToInventoryScene (audio);
		
	}

	public void goToMission(AudioSource audio){
		print ("GoToMission");
		behave.GoToMission(audio,1);//passar dois parametros

	}

}
