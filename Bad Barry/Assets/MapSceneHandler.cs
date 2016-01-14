using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MapSceneHandler : MonoBehaviour {


	GameBehavior behave;
	public Text coins;
	public Slider energySlider;
	public Text counter;



	// Use this for initialization
	void Start () {
	
		behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		coins.text = behave.coins.ToString();


	}
	
	// Update is called once per frame
	void Update () {

		var textEnergy =  gameObject.GetComponent<Text>();
		textEnergy.text = behave.energy.ToString();
		energySlider.value = behave.energy;

	}

	public void goToStoreScene(AudioSource audio){
		behave.GoToStoreScene (audio);
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
