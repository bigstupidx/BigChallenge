using UnityEngine;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;

public class Player : MonoBehaviour {

	public int life = 100;
	public int maxLife = 100;
	public int armor = 0;
	public int speed = 1;
	public int baseDamage = 0;


	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

		Move ();
	}

	/*
	//test function with keyboard movement
	void test(){

		if (Input.GetKey (KeyCode.W)) {
		
			Move (0);
		} else {
			if (Input.GetKey (KeyCode.D)) {
				
				Move(1);
			}else {
				if (Input.GetKey (KeyCode.S)) {
					
					Move(2);
				}else {
					if (Input.GetKey (KeyCode.A)) {
						
						Move(3);
					}
				}
			}
		}

	}
*/

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

	//move function  moves and animates function
	void Move(){
		int direction = -1;
		float x = CrossPlatformInputManager.GetAxis ("Horizontal");
		float y = CrossPlatformInputManager.GetAxis ("Vertical");

		if (x > 0 && y > 0) { // primeiro quadrante
			
			if ((x - y) < 0) {
				direction = 0;
			} else {
				direction = 1;
			}
		} else if (x > 0 && y < 0) { //segundo quadrante
			
			if ((x + y) < 0) {
				direction = 2;
			} else {
				direction = 1;
			}
			
			
		} else if (x < 0 && y < 0) { //teceiro quadrante
			
			if ((x - y) < 0) {
				direction = 3;
			} else {
				direction = 2;
			}
		} else {				// quarto quadrante
			if((x + y) < 0 ){
				direction = 3;
			}
			else{
				if  (x!= 0 && y != 0)
					direction = 0;
			}
		}



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

			transform.Translate(Vector3.left * (speed * Time.deltaTime));

		}


	}


}
