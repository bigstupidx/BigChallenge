using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
using UnityEngine.SocialPlatforms;
using UnityEngine.SocialPlatforms.GameCenter;
using System.Runtime.InteropServices;


public class GameBehavior : MonoBehaviour {

	[DllImport("__Internal")]
	private static extern void _ReportAchievement( string achievementID, float progress );

	private bool loadingSound = false; //assegura que tocará um audio por vez
	


	public int[] inventory = new int[10];

	public int[] abilityIDs = new int[3];
	public int abilityIndex = 0;

	public bool levelingUp = false;
	public int levelsUp = 0;
	public bool pause = false;
	public bool teste = false;


	public float experience = 0;
	public float neededExperience = 100;
	public int life = 100;
	public int maxLife = 100;
	public int energy = 5;



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

	public float timeToEnergy = 600;


	public DateTime lastDateTime;

	//score and coins
	private int earnedCoins = 0;
	public int coins;


	//statistics
	public int totalCoins = 0;
	public int hordeKills = 0;
	public int enemiesKilled = 0;
	public int ammoSpent = 0;
	public float totalExperience = 0;
	public int knifeKills = 0;





	//skill
	public bool skillActivate = false;
	public float timeToStopSkill = 5;
	public float reloadingTime = 10;
	public float skillTimer = 0;

	public bool reloading = false;
	public float reloadingTimer = 0;


	// Use this for initialization
	void Start () {
		Environment.SetEnvironmentVariable("MONO_REFLECTION_SERIALIZER", "yes");

		Social.localUser.Authenticate( success => {
			if (success){
				Debug.Log ("authenticated");
				//showAchievements();


			}else
				Debug.Log ("Failed to authenticate");
		});
		GameCenterPlatform.ShowDefaultAchievementCompletionBanner(true);





		//on start get selected character points and get bullets
		load();
		pause = false;
		DontDestroyOnLoad (gameObject);
		DontDestroyOnLoad (this);
		if(inventory == null){

			inventory = new int[10];
		
		}
		if(abilityIDs == null){
			
			abilityIDs = new int[3];
			
		}
	
	}

	void showAchievements(){
		Social.LoadAchievements (achievements => {
			if (achievements.Length > 0) {
				Debug.Log ("Got " + achievements.Length + " achievement instances");
				string myAchievements = "My achievements:\n";
				foreach (IAchievement achievement in achievements)
				{
					myAchievements += "\t" + 
						achievement.id + " " +
							achievement.percentCompleted + " " +
							achievement.completed + " " +
							achievement.lastReportedDate + "\n";
				}
				Debug.Log (myAchievements);
			}
			else
				Debug.Log ("No achievements returned");
		});

	}




	void ReportAchievement() {


		//use this when reporting achievment
		//_ReportAchievement("123",100);
		ReportScore(10,"board123");
	
		// Request loaded achievements, and register a callback for processing them


		
	}	


	void ReportScore (long score, string leaderboardID) {
		Debug.Log ("Reporting score " + score + " on leaderboard " + leaderboardID);
		Social.ReportScore (score, leaderboardID, success => {
			Debug.Log(success ? "Reported score successfully" : "Failed to report score");
		});
	}
	
	// Update is called once per frame
	void Update () {

		DateTime currentTime = DateTime.Now;
		TimeSpan ts = currentTime - lastDateTime;
		lastDateTime = currentTime;

		if (energy < 5) {
			timer = timer + (float)ts.TotalSeconds;
		}
	

		
		if (timer >= timeToEnergy) {
			energy = energy + (int)(timer / timeToEnergy);
			timer = timer - ((int)(timer / timeToEnergy) * timeToEnergy);
	
		}
		if (energy >= 5) {
			timer = 0;
			energy = 5;
		}

		//LOGICA PARA TEMPO DA SKILL DPS DE CLICADA
		if (skillActivate) 
			skillTimer += (float)ts.TotalSeconds;

		//PENSAR NA LOGICA DE QUANTO TEMPO A HABILIDADE FICARÁ EM USO BASEADA NOS PONTOS DE PERCEPCÃO
		if (skillTimer >= timeToStopSkill ) {
			skillTimer = 0;
			skillActivate = !skillActivate;
			print ("ACABOU O TEMPO DA SKILL");
			reloading = !reloading;


			var skills = GameObject.FindGameObjectWithTag ("Skills").GetComponent<Skill> ();
			skills.skillActivate = false;

		}

		//LOGICA PARA RELOADING
		if (reloading) {
			var skills = GameObject.FindGameObjectWithTag ("Skills").GetComponent<Skill> ();
			reloadingTimer += (float)ts.TotalSeconds;
			skills.amount.text = (reloadingTime - (int)reloadingTimer).ToString();
		}

		if (reloadingTimer >= reloadingTime) {
			var skills = GameObject.FindGameObjectWithTag ("Skills").GetComponent<Skill> ();
			skills.amount.text = "";

			print ("ESTA CARREGADA A SKILL");
			reloadingTimer = 0;
			reloading = !reloading;
			//skillActivate = false;

		}


	
	}

	public void SkillClicked(){
			skillActivate = true;
			print ("ATIVEI A SKILL");
	}


	public void LevelCleared(){
		this.coins += earnedCoins;
		totalCoins+= earnedCoins;
		earnedCoins = 0;

		this.GoToMap();

	}

	public void incCoins(int newCoins){

		earnedCoins += newCoins;

	}



	public void IncrementCoinHorde(){

		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		behave.LevelCleared ();

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
	public void GoToAtributesScreen(AudioSource audio){

		if (!loadingSound) {
			pause = false;
			previousScene = Application.loadedLevel;
			loadingSound = true;
			StartCoroutine (PlayAudio (audio, "AtributeScreen"));
		}

		//Application.LoadLevel("AtributeScreen");


	}


	public void GoToInventoryScene(AudioSource audio){

		if (!loadingSound) {
			pause = false;
			previousScene = Application.loadedLevel;			
			loadingSound = true;
			StartCoroutine (PlayAudio (audio, "InventoryScene"));

		}

		//Application.LoadLevel("InventoryScene");


	}

	public void GoToStoreScene(AudioSource audio){

		if (!loadingSound) {
			previousScene = Application.loadedLevel;			
			loadingSound = true;
			StartCoroutine (PlayAudio (audio, "Store"));
			
		}

		//Application.LoadLevel("Store");

	}

	public void GoToMap(){

		earnedCoins = 0;
		pause = false;
		print ("aqui");
		life = maxLife;
		save();

		Application.LoadLevel("MapScene");
		
		
	}

	public void GoToMapWithSound(AudioSource audio){

		Social.localUser.Authenticate( success => {
			if (success)
				ReportAchievement();
			else
				Debug.Log ("Failed to authenticate primeiro");
		});
		GameCenterPlatform.ShowDefaultAchievementCompletionBanner(true);


		if (!loadingSound) {
			earnedCoins = 0;
			pause = false;
			print ("aqui");
			life = maxLife;
			save ();
			loadingSound = true;
			StartCoroutine (PlayAudio (audio, "MapScene"));
		}
		
	}

	public void GoToMission(AudioSource audio, int missionNumber){
		print ("Missao " + loadingSound);
		if (!loadingSound) {
			pause = false;
			if (energy > 0) {
				energy--;

				loadingSound = true;
				if(missionNumber == 1)
					StartCoroutine (PlayAudio (audio, "NewPrototype")); //mudar quando tiver mais missoes

				if(missionNumber == 2)
					StartCoroutine (PlayAudio (audio, "HordeMode")); //mudar quando tiver mais missoes

				//Play ();
			}else{
				//colocar som do neves
			}

		}


	}

	//go to last scene
	public void GoToLastScene(){
		pause = false;

		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		behave.save();

		Application.LoadLevel("MapScene");
		//Play();

	}

	

	public void Play(){
		pause = false;

		//Application.LoadLevel("NewPrototype");
		//Application.LoadLevel("HordeMode");

	}

	
	//Inicia audio e troca de cena quando o audio acabar
	IEnumerator PlayAudio(AudioSource currentAudio,string levelName){
		currentAudio.PlayOneShot (currentAudio.clip);
		print ("comeca a tocar " + currentAudio.clip.length);
		yield return new WaitForSeconds (currentAudio.clip.length);
		//yield return new WaitForSeconds (1);
		loadingSound = false;
		Application.LoadLevel(levelName);
		
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
		data.lastDateTime = lastDateTime;
		data.inventory = inventory;
		data.abilityIndex = abilityIndex;
		data.abilityIDs = abilityIDs;
		data.coins = coins;

		data.totalCoins = totalCoins;
		data.hordeKills = hordeKills;
		data.enemiesKilled = enemiesKilled;
		data.ammoSpent = ammoSpent;
		data.totalExperience = totalExperience;
		data.knifeKills = knifeKills;

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
			lastDateTime = data.lastDateTime;

			inventory = data.inventory;
			abilityIDs = data.abilityIDs;
			abilityIndex = data.abilityIndex;

			coins = data.coins;


			totalCoins = data.totalCoins;
			hordeKills = data.hordeKills;
			enemiesKilled = data.enemiesKilled;
			ammoSpent = data.ammoSpent;
			totalExperience = data.totalExperience;
			knifeKills = data.knifeKills;

		}




	}



	
}


[Serializable]
class Data
{

	public int[] inventory;

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

	public DateTime lastDateTime;

	public int coins;

	//statistics
	public int totalCoins;
	public int hordeKills;
	public int enemiesKilled;
	public int ammoSpent;
	public float totalExperience;
	public int knifeKills;
	public int[] abilityIDs;

	public int abilityIndex;



}









