using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MapSceneHandler : MonoBehaviour {


	GameBehavior behave;
	public Text coins;
	public Slider energySlider;
	public Text counter;

	private int missionNumber = -1;

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

	public void setMissionNumber(int number){
		missionNumber = number;
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


	public void goToStatisticsScreen(AudioSource audio){
		
		behave.GoToStatisticsScreen (audio);
		
	}

	public void goToMission(AudioSource audio){
		print ("GoToMission");
		behave.GoToMission(audio,missionNumber);//passar dois parametros

	}
	public void goToHorde(AudioSource audio){
		print ("GoToHorde");
		behave.GoToMission(audio,0);//passar dois parametros
		
	}

}
