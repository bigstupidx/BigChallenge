using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class MapSceneHandler : MonoBehaviour {


	GameBehavior behave;
	public Text coins;
	public Slider energySlider;
	public Text counter;

	private int missionNumber = -1;

	//tutorial
	public GameObject MapTutorialCanvas;
	public GameObject[] buttons = new GameObject[6];
	public GameObject[] arrows = new GameObject[2];
	public GameObject mapPanel;
	public GameObject mapText;

	// Use this for initialization
	void Start () {
	
		behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		coins.text = behave.coins.ToString();

		//tutorial

		if (behave.showTutorial && behave.showAttributes) {
			//N DEIXANDO CLICAR EM NENHUM BUTTON, EXCETO O DO ATTRIBUTE
			buttons[1].GetComponent<Button>().interactable = false;
			buttons[2].GetComponent<Button>().interactable = false;
			buttons[3].GetComponent<Button>().interactable = false;
			buttons[4].GetComponent<Button>().interactable = false;
			buttons[5].GetComponent<Button>().interactable = false;

			MapTutorialCanvas.SetActive(true);
			arrows[0].SetActive(true); //SETA INDICANDO OS ATRIBUTOS ATIVADA
			arrows[1].SetActive(false);//SETA INDICANDO A STORE DESATIVADA
//			GameObject.Find ("MapTutorialText").GetComponent<Text> ().text = "Clique em attributes";
			StartCoroutine(BlinkArrow(0));
		}

		if (behave.showTutorial && behave.showStore) {
			buttons[0].GetComponent<Button>().interactable = false;
			buttons[1].GetComponent<Button>().interactable = false;
			buttons[2].GetComponent<Button>().interactable = true;
			buttons[3].GetComponent<Button>().interactable = false;
			buttons[4].GetComponent<Button>().interactable = false;
			buttons[5].GetComponent<Button>().interactable = false;

			MapTutorialCanvas.SetActive(true);
			arrows[0].SetActive(false); //SETA INDICANDO OS ATRIBUTOS desativada
			arrows[1].SetActive(true);//SETA INDICANDO A STORE ATIVADA
//			GameObject.Find ("MapTutorialText").GetComponent<Text> ().text = "Clique em store";
			StartCoroutine(BlinkArrow(1));
		}



	}


	public IEnumerator BlinkArrow(int index){
		while(true){
			
			arrows[index].SetActive(false);
			yield return new WaitForSeconds(.5f);
			arrows[index].SetActive(true);
			yield return new WaitForSeconds(.5f);
		}
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
