using UnityEngine;
using System.Collections;

public class EnemiesManager : MonoBehaviour {

	// Use this for initialization
	private GameBehavior behave;

	void Start () {
		this.behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();

		GameObject[] enemiesCount = GameObject.FindGameObjectsWithTag ("Enemy");
		print ("QUANTIDADE DE INIMIGOS NA CENA " + enemiesCount.Length);

		behave.totalEnemies = enemiesCount.Length;
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
