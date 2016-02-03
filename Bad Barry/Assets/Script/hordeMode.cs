using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;


public class hordeMode : MonoBehaviour {
	
	public int level = 1;
	public GameObject[] enemies;
	public Transform[] respawnPoints;
	public List<GameObject> enemiesInScene;
	public float timer;
	public GameObject clearedText;
	public GameObject countingText;
	public GameObject totalText;
	public bool go = true;
	public int count = 0;

	public GameBehavior behave;
//	public GameObject infinity;

	//tutorial
	public GameObject canvasTutorial;
	public GameObject textTutorial;
	public int index = 0;
	public float time = 0;
	public bool startTime = false;
	
	public GameObject joystickArrow;
	public GameObject slotsArrow;
	public GameObject skillArrow;
	public GameObject fireButtonArrow;
	
	
	// Use this for initialization
	void Start () {
		behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		timer = -100;

		if (behave.showTutorial) {
			Time.timeScale = 1;
			this.level = 9;
			behave.pause = true;

			print(behave.pause);
			print("pausado");
			canvasTutorial.SetActive (true);
			textTutorial.GetComponent<Text> ().text = "Now you will learn about the controls of the game and play a little!\nTap for the next step";
			textTutorial.GetComponent<TranslateText>().Refresh();
//			arrows [index].SetActive (true);
		}

	}

	public void onClickNext(){

		if (index < 5) {

			if(index == 0){
				joystickArrow.SetActive(true);
				textTutorial.GetComponent<Text> ().text = "Hold and drag to move";
				textTutorial.GetComponent<TranslateText>().Refresh();
			}
			else if(index == 1){
				joystickArrow.SetActive(false);
				slotsArrow.SetActive(true);
				textTutorial.GetComponent<Text> ().text = "Items to take on missions";
				textTutorial.GetComponent<TranslateText>().Refresh();
			}
			else if(index == 2){
				slotsArrow.SetActive(false);
				skillArrow.SetActive(true);
				textTutorial.GetComponent<Text> ().text = "Press to become invincible for a while";
				textTutorial.GetComponent<TranslateText>().Refresh();
			}
			else if(index == 3){
				skillArrow.SetActive(false);
				fireButtonArrow.SetActive(true);
				textTutorial.GetComponent<Text> ().text = "Press or hold to fire";
				textTutorial.GetComponent<TranslateText>().Refresh();
			}

			else
			{
				fireButtonArrow.SetActive(false);
				textTutorial.GetComponent<Text> ().text = "Ready? Choose your weapon and GO!";
				textTutorial.GetComponent<TranslateText>().Refresh();
			}


			index++;
		} else {
			behave.pause = false;
			canvasTutorial.SetActive (false);
			behave.showAttributes = true;
			var player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
			player.ChangeWeapon(1);

			//se for usar time pra terminar o tutorial
//			startTime = !startTime;
		}

	}
	// Update is called once per frame
	void Update () {


		if(canvasTutorial.activeSelf){

			behave.pause = true;

		}

		//logica do tutorial

		//SE O GAMEPLAY TIVER TEMPO


//		if (behave.showTutorial && startTime) {
//			time += Time.deltaTime;
//
//			if(time >= 25){
//				print ("ACABOU GAMEPLAY DO TUTORIAL");
//				startTime = !startTime;
//			}
//
//		}

//		if (behave.selectedWeapon == 0)
//			infinity.SetActive (true);
//		else
//			infinity.SetActive (false);

		
		bool alive = false;
		//checks if all enemies are dead
		count = enemiesInScene.Count;
		foreach(GameObject enemy in enemiesInScene){
			
			if(!enemy.GetComponent<Enemy>().dead){
				
				alive = true;
				count--;
				
			}
			
		}
		countingText.GetComponent<Text>().text = "" + count;
		totalText.GetComponent<Text>().text = "" + enemiesInScene.Count;

		//checks if alive
		
		if(!alive && timer > 9 )
		{
			timer = 8;
			clearedText.GetComponent<Text>().text = "cleared";
			print("concertar clique para ir para local");
			//clearedText.GetComponent<TranslateText>().Refresh();

			
			clearedText.GetComponent<Animator>().SetTrigger("cleared");
		}
		
		if(!alive)
		{
			if(timer > 2 && timer < 4){
				if(go){
					behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
					behave.CheckHordeAchievements((level - 1));
					clearedText.GetComponent<Text>().text = "Horde " + level;
					clearedText.GetComponent<Animator>().SetTrigger("cleared");
					go = false;
				}

			}


			timer = timer - Time.deltaTime;
			if(timer <= 0)
			{

				Respawn();
				
			}
			
		}
		
	}
	
	
	void Respawn(){
		
		//destroys enemies
		foreach(GameObject enemy in enemiesInScene){
			Destroy(enemy,1);
			
		}
		//removes enemies from the list
		enemiesInScene.RemoveRange(0,enemiesInScene.Count);
		
		//puts random enemies in random positions on the game
		for(int i = 0; i < (level * 2); i = i + 1 + level/10)
		{
			
			int random = Random.Range(0,Mathf.Min(level , (enemies.Length - 1)));
			int randomLocation = Random.Range(0,(respawnPoints.Length - 1));
			var x = Instantiate(enemies[random],respawnPoints[randomLocation].position,respawnPoints[randomLocation].rotation) as GameObject;
			var enemyLevel = (level / 10) + 1;
			x.GetComponent<Enemy>().incrementLifeByLevel(enemyLevel);
			enemiesInScene.Add(x);
			x.GetComponent<FollowPlayer>().active = true;



		}


		go = true;
		timer = 20;
		level++;

		
		
		
		
	}
	
	
}

