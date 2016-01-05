using UnityEngine;
using System.Collections;
using System.Collections.Generic;


public class hordeMode : MonoBehaviour {

	public int level = 1;
	public GameObject[] enemies;
	public Transform[] respawnPoints;
	public List<GameObject> enemiesInScene;

	private float timer = 0;


	// Use this for initialization
	void Start () {

	
	}
	
	// Update is called once per frame
	void Update () {

		if(enemiesInScene.Count == 0)
		{
			timer = timer - Time.deltaTime;
			if(timer <= 0)
			{
				Respawn();
			}
		}
	
	}


	void Respawn(){

		for(int i = 0; i < (level * 2); i ++)
		{

			int random = Random.Range(0,Mathf.Min(level , (enemies.Length - 1)));
			int randomLocation = Random.Range(0,Mathf.Min(level , (respawnPoints.Length - 1)));
			var x = Instantiate(enemies[random],respawnPoints[random].position,respawnPoints[randomLocation].rotation) as GameObject;
			enemiesInScene.Add(x);

		}
		timer = 2;






	}


}
