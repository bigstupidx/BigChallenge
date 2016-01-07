using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class GameBehavior : MonoBehaviour {


	public bool levelingUp = false;
	public int levelsUp = 0;
	public bool pause = false;
	public bool teste = false;


	public float experience = 0;
	public float neededExperience = 100;
	public int life = 100;
	public int maxLife = 100;


	//attributes points
	public int expendPoints = 0;

	private int strength = 10;
	private int agility = 10;
	private int inteligence = 10;
	private int vitality = 10;

	public int previousScene;

	public int selectedWeapon = 0;
	//vector for bullets
	public int[] bullets = new int[3];

	//inventory items
	private List<ItemData> inventoryItems;




	// Use this for initialization
	void Start () {
		//on start get selected character points and get bullets
		pause = false;
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}



	public void incrementBullet(int weaponType,int maxBullets,int minBullets){

		bullets[weaponType] = bullets[weaponType] + Random.Range(minBullets,maxBullets);

	}




	public void LeveledUp(int currentLvl){

		levelingUp = true;

		levelsUp++;
		expendPoints = expendPoints + currentLvl;

	}

	//go to scene states
	public void GoToAtributesScreen(){
		pause = false;

		SaveCurrentSceneState ();

		DontDestroyOnLoad (gameObject);
		previousScene = Application.loadedLevel;

		Application.LoadLevel("AtributeScreen");


	}


	public void GoToInventoryScene(){
		pause = false;



		SaveCurrentSceneState ();
		
		DontDestroyOnLoad (gameObject);
		previousScene = Application.loadedLevel;

		Application.LoadLevel("InventoryScene");


	}

	public void GoToMap(){
		pause = false;
		print ("aqui");
		DontDestroyOnLoad (gameObject);
		life = maxLife;

		Application.LoadLevel("MapScene");
		
		
	}

	public void GoToMission(int missionNumber){
		pause = false;

		Play ();
		//funcao para quando tiver mais de uma missao
//		var missionName = "Mission" + missionNumber;
//
//		SaveCurrentSceneState ();
//		
//		DontDestroyOnLoad (gameObject);
//		previousScene = Application.loadedLevel;
//
//		//verifica se a cena pode ser carregada
//		if (Application.CanStreamedLevelBeLoaded(missionName)) {
//
//			Application.LoadLevel (missionName);
//
//		} else {
//			print("Erro ao carregar uma nova cena");
//		}

	}

	//go to last scene
	public void GoToLastScene(){
		pause = false;

		Application.LoadLevel("MapScene");
		//Play();

	}





	private void SaveCurrentSceneState(){

	}

	public void Play(){
		pause = false;

		DontDestroyOnLoad (gameObject);

		//Application.LoadLevel("NewPrototype");
		Application.LoadLevel("HordeMode");

	}







	//gettters and setters for atributes


	public int getStrength(){

		return strength;

	}

	public int getAgility(){

		return agility;

	}

	public int getInteligence(){

		return inteligence;

	}
	
	public int getVitality(){


		return vitality;
	}

	public List<ItemData> getInventoryItems(){


		return inventoryItems;

	}

	public void setStrength(int value){

		strength = value;

	}

	public void setAgility(int value){

		agility = value;
	}

	public void setInteligence(int value){

		inteligence = value;

	}

	public void setVitality(int value){


		vitality = value;

	}

	public void setInventoryItems(List<ItemData> items){
		inventoryItems = items;
	}

	//incrementers

	public void incrementStrength(){

		if(expendPoints > 0){

			strength++;
			expendPoints--;
		
		}
	}
	
	public void incrementAgility(){
		
		if(expendPoints > 0){
			
			agility++;
			expendPoints--;
			
		}
	
	}
	
	public void incrementInteligence(){
		
		if(expendPoints > 0){
			
			inteligence++;
			expendPoints--;
			
		}


	}
	
	public void incrementVitality(){
		

		if(expendPoints > 0){
			
			vitality++;
			expendPoints--;
			
		}


	}






}
