using UnityEngine;
using System.Collections;

public class GameBehavior : MonoBehaviour {


	public bool levelingUp = false;
	public int levelsUp = 0;



	//attributes points
	public int expendPoints = 0;

	private int strength = 10;
	private int agility = 10;
	private int inteligence = 10;
	private int vitality = 10;

	private int previousScene = 0;





	// Use this for initialization
	void Start () {
		//on start get selected character points
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void LeveledUp(int currentLvl){

		levelingUp = true;

		levelsUp++;
		expendPoints = expendPoints + currentLvl;
		//remove this line after use
		GoToAtributesScreen ();
	}

	//go to scene states
	public void GoToAtributesScreen(){
		SaveCurrentSceneState ();

		DontDestroyOnLoad (gameObject);
		previousScene = Application.loadedLevel;
		Application.LoadLevel("AtributeScreen");

	}

	//go to last scene
	public void GoToLastScene(){

		var x = previousScene;
		previousScene = Application.loadedLevel;
		Application.LoadLevel(x);
		

	}





	private void SaveCurrentSceneState(){

	}

	public void Play(){
		print ("entrou");
		DontDestroyOnLoad (gameObject);

		Application.LoadLevel("Prototype");
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
