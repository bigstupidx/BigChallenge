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
	
	
	
	// Use this for initialization
	void Start () {
		
		timer = -100;
	}
	
	// Update is called once per frame
	void Update () {
		
		bool alive = false;
		//checks if all enemies are dead
		count = (level - 1) * 2;
		foreach(GameObject enemy in enemiesInScene){
			
			if(!enemy.GetComponent<Enemy>().dead){
				
				alive = true;
				count--;
				
			}
			
		}
		countingText.GetComponent<Text>().text = "" + count;
		totalText.GetComponent<Text>().text = "" + ((level - 1) * 2);

		//checks if alive
		
		if(!alive && timer > 9 )
		{
			timer = 8;
			clearedText.GetComponent<Text>().text = "cleared";
			
			clearedText.GetComponent<Animator>().SetTrigger("cleared");
		}
		
		if(!alive)
		{
			if(timer > 2 && timer < 4){
				if(go){
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
			Destroy(enemy,3);
			
		}
		//removes enemies from the list
		enemiesInScene.RemoveRange(0,enemiesInScene.Count);
		
		//puts random enemies in random positions on the game
		for(int i = 0; i < (level * 2); i ++)
		{
			
			int random = Random.Range(0,Mathf.Min(level , (enemies.Length - 1)));
			int randomLocation = Random.Range(0,(respawnPoints.Length - 1));
			var x = Instantiate(enemies[random],respawnPoints[randomLocation].position,respawnPoints[randomLocation].rotation) as GameObject;
			enemiesInScene.Add(x);
			x.GetComponent<FollowPlayer>().active = true;



		}


		go = true;
		timer = 20;
		level++;

		
		
		
		
	}
	
	
}

