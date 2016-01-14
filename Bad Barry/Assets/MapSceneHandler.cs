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

		var time = behave.timeToEnergy - behave.timer;

		if(((int)(time - (int)(time/60) * 60)) > 10){
			counter.text = ((int)(time/60)).ToString() + ":" + ((int)(time - (int)(time/60) * 60)).ToString();

		}else{
			counter.text = ((int)(time/60)).ToString() + ":0" + ((int)(time - (int)(time/60) * 60)).ToString();


		}


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
	public void goToHorde(AudioSource audio){
		print ("GoToHorde");
		behave.GoToMission(audio,2);//passar dois parametros
		
	}

}
