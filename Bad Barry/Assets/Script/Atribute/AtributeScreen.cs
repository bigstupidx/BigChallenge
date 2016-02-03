using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class AtributeScreen : MonoBehaviour {

	private GameBehavior script; 
	public GameBehavior behave;

	//tutorial
	public GameObject AttributeTutorial;
	public GameObject Strength;
	public GameObject Agility;
	public GameObject Perception;
	public GameObject Vitality;
	public GameObject backArrow;
	public float height = 0;
	public int index = 0;

	public InventoryInMission slots;

	// Use this for initialization
	void Start () {

		var x = GameObject.FindGameObjectWithTag("Behaviour");
		script = x.GetComponent<GameBehavior>();
		UpdatePoints();
		behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();

		if (behave.showTutorial) {

			//logica para pegar a altura de algum dos panels
			height = GameObject.Find ("PanelStrength").GetComponent<RectTransform>().rect.height;
			behave.inventory[1] = 0;
			behave.inventory[2] = 0;
			behave.inventory[3] = 0;
			behave.abilityIDs[0] = 0;
			behave.abilityIndex = 0;
			behave.selectedWeapon = 0;

			//DELETAR INVENTORY IN MISSION
//			slots = GameObject.Find

			behave.bullets[1] = 0; // balas da mp-9
			behave.bullets[2] = 0; //balas de shotgun
			behave.coins = 150;

			AttributeTutorial.SetActive(true);
			Agility.SetActive(false);
			Perception.SetActive(false);
			Vitality.SetActive(false);
			GameObject.Find ("AttributeTutorialText").GetComponent<Text> ().text = "Strength increases damage";
			GameObject.Find ("AttributeTutorialText").GetComponent<TranslateText>().Refresh();

		}

	
	}

	public IEnumerator BlinkArrow(){
		while(true){
			
			backArrow.SetActive(false);
			yield return new WaitForSeconds(.5f);
			backArrow.SetActive(true);
			yield return new WaitForSeconds(.5f);
		}
	}

	public void onClickAttributeScreen(){
		print ("entrou no button");
		index++;
		if(index == 1){ // EXPLICANDO AGILTY
			GameObject.Find ("AttributePanelText").GetComponent<RectTransform>().position = new Vector3(GameObject.Find ("AttributePanelText").GetComponent<RectTransform>().position.x, GameObject.Find ("AttributePanelText").GetComponent<RectTransform>().position.y - height, 1 );
			Agility.SetActive(true);
			Strength.SetActive(false);
			GameObject.Find ("AttributeTutorialText").GetComponent<Text> ().text = "Agility increases movement speed";
			GameObject.Find ("AttributeTutorialText").GetComponent<TranslateText>().Refresh();


		}else if(index == 2){// EXPLICANDO PERCEPTION
			GameObject.Find ("AttributePanelText").GetComponent<RectTransform>().position = new Vector3(GameObject.Find ("AttributePanelText").GetComponent<RectTransform>().position.x, GameObject.Find ("AttributePanelText").GetComponent<RectTransform>().position.y +(2* height), 1 );
			Agility.SetActive(false);
			Strength.SetActive(false);
			Perception.SetActive(true);
			GameObject.Find ("AttributeTutorialText").GetComponent<Text> ().text = "Perception increases skill duration";
			GameObject.Find ("AttributeTutorialText").GetComponent<TranslateText>().Refresh();


		}else if(index == 3){// EXPLICANDO VITALITY
			GameObject.Find ("AttributePanelText").GetComponent<RectTransform>().position = new Vector3(GameObject.Find ("AttributePanelText").GetComponent<RectTransform>().position.x, GameObject.Find ("AttributePanelText").GetComponent<RectTransform>().position.y - height, 1 );
			Agility.SetActive(false);
			Strength.SetActive(false);
			Perception.SetActive(false);
			Vitality.SetActive(true);
			GameObject.Find ("AttributeTutorialText").GetComponent<Text> ().text = "Vitality increases amount of life";
			GameObject.Find ("AttributeTutorialText").GetComponent<TranslateText>().Refresh();


		}else if(index == 4){// VAZANDO DO ATTRIBUTESCREEN
			Agility.SetActive(true);
			Strength.SetActive(true);
			Perception.SetActive(true);
			Vitality.SetActive(true);
			backArrow.SetActive(true);
			StartCoroutine(BlinkArrow());
			AttributeTutorial.SetActive(false);
			behave.showAttributes = false;
			behave.showStore = true;
		}
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

	public void GoToMap(AudioSource audio){
		if (behave.showTutorial)
			backArrow.SetActive (false);

		script.GoToMapWithSound (audio);
	}

	public void UpdatePoints(){

		var text = GameObject.FindGameObjectWithTag("Points");
		text.GetComponent<Text>().text = script.expendPoints.ToString();



		text = GameObject.FindGameObjectWithTag("strPoints");
		text.GetComponent<Text>().text = script.getStrength().ToString();

		text = GameObject.FindGameObjectWithTag("agiPoints");
		text.GetComponent<Text>().text = script.getAgility().ToString();

		text = GameObject.FindGameObjectWithTag("intPoints");
		text.GetComponent<Text>().text = script.getInteligence().ToString();

		text = GameObject.FindGameObjectWithTag("vitPoints");
		text.GetComponent<Text>().text = script.getVitality().ToString();




	}

}
