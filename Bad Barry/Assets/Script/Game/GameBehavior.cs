using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;

public class GameBehavior : MonoBehaviour {


	public bool levelingUp = false;
	public int levelsUp = 0;
	public bool pause = false;
	public bool teste = false;


	public float experience = 0;
	public float neededExperience = 100;
	public int life = 100;
	public int maxLife = 100;
	public int energy = 0;


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

	public float timer = 0;

	

	// Use this for initialization
	void Start () {
		//on start get selected character points and get bullets
		load();
		pause = false;
		energy = 0;
	
	}
	
	// Update is called once per frame
	void Update () {
		if(energy < 15){
			timer = timer + Time.deltaTime;
			if(timer >=60){
				timer = 0;
				energy++;

			}
		}
	
	}



	public void incrementBullet(int weaponType,int maxBullets,int minBullets){

		bullets[weaponType] = bullets[weaponType] + UnityEngine.Random.Range(minBullets,maxBullets);

	}




	public void LeveledUp(int currentLvl){

		levelingUp = true;

		levelsUp++;
		expendPoints = expendPoints + currentLvl;

	}

	//go to scene states
	public void GoToAtributesScreen(){
		pause = false;


		DontDestroyOnLoad (gameObject);
		previousScene = Application.loadedLevel;

		Application.LoadLevel("AtributeScreen");


	}


	public void GoToInventoryScene(){
		pause = false;

		DontDestroyOnLoad (gameObject);
		previousScene = Application.loadedLevel;

		Application.LoadLevel("InventoryScene");


	}

	public void GoToMap(){


		pause = false;
		print ("aqui");
		DontDestroyOnLoad (gameObject);
		life = maxLife;
		save();

		Application.LoadLevel("MapScene");
		
		
	}

	public void GoToMission(int missionNumber){
		pause = false;
		print(energy);
		if(energy > 0)
		{
			Play ();
		}


	}

	//go to last scene
	public void GoToLastScene(){
		pause = false;
		save();

		Application.LoadLevel("MapScene");
		//Play();

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


	public void save(){

		BinaryFormatter bf = new BinaryFormatter();
		FileStream file = File.Create(Application.persistentDataPath + "/BadBarryData.dat");
		Data data = new Data();


		data.levelingUp = levelingUp;
		data.levelsUp = levelsUp;
		data.pause = pause;
		data.teste = teste;
		data.experience = experience;
		data.neededExperience = neededExperience; 
		data.life = life;
		data.maxLife = maxLife;
		data.expendPoints = expendPoints;
		data.strength = strength;
		data.agility = agility;
		data.inteligence = inteligence;
		data.vitality = vitality;
		data.bullets = bullets;
		data.energy = energy;
		data.timer = timer;

		bf.Serialize(file,data);
		file.Close();
		print("save");

	}

	public void load(){


		if(File.Exists(Application.persistentDataPath + "/BadBarryData.dat")){
			print("load");
			BinaryFormatter bf = new BinaryFormatter();
			FileStream file = File.Open(Application.persistentDataPath + "/BadBarryData.dat",FileMode.Open);
			Data data = (Data)bf.Deserialize(file);
			file.Close();

			levelingUp = data.levelingUp;
			levelsUp = data.levelsUp;
			pause = data.pause;
			teste = data.teste;
			experience = data.experience;
			neededExperience = data.neededExperience; 
			life = data.life;
			maxLife = data.maxLife;
			expendPoints = data.expendPoints;
			strength = data.strength;
			agility = data.agility;
			inteligence = data.inteligence;
			vitality = data.vitality;
			bullets = data.bullets;
			energy = data.energy;
			timer = data.timer;


		}




	}



	
}


[Serializable]
class Data
{

	
	public bool levelingUp;
	public int levelsUp;
	public bool pause;
	public bool teste;
	public float experience;
	public float neededExperience; 
	public int life;
	public int energy;
	public int maxLife;
	
	
	//attributes points
	public int expendPoints;

	public int strength;
	public int agility;
	public int inteligence;
	public int vitality;
		
	public int[] bullets;

	public float timer;




}









