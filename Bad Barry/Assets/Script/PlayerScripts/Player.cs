using UnityEngine;
using System.Collections;

public class Player : MonoBehaviour {

	public int life = 100;
	public int maxLife = 100;
	public int armor = 0;
	public int speed = 1;


	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	//heal function heal parameter is amount to be healed
	void Heal(int heal){
		if (life + heal > maxLife) {
		
			life = maxLife;
		}
		else{
			life = life + heal;
		}

	}

	//take damage function damage is the damage taken wich will be affected by armor
	void TakeDamage(int damage){
	
		int trueDamage = damage - armor;

		if (life <= trueDamage) {
		
			life = 0;
			Die();

			
		} else {
			life = life - trueDamage;	
		}

	}

	//death animation function
	void Die(){

		print("die");


	}

	//move function receives direction, moves and animates function
	void Move(int direction){

		//move up
		if (direction == 0) {

			transform.Translate(Vector3.up * (speed * Time.deltaTime));

		}
		//move right
		if (direction == 1) {

			transform.Translate(Vector3.right * (speed * Time.deltaTime));
			
		}
		//move down
		if (direction == 2) {

			transform.Translate(Vector3.down * (speed * Time.deltaTime));

		}
		//move up
		if (direction == 3) {

			transform.Translate(Vector3.up * (speed * Time.deltaTime));

		}


	}


}
