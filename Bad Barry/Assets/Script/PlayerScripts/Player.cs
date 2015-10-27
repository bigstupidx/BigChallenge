using UnityEngine;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;

public class Player : MonoBehaviour {

	public int life = 100;
	public int maxLife = 100;
	public int armor = 0;
	public float speed = 0.5f;
	public int baseDamage = 0;
	public int direction = -1;
	public int shootDirection = 1;
	public GameObject weapon;

	private Animator animator;

	public float fireRate = 1f;
	private float time;


	// Use this for initialization
	void Start () {
		animator = transform.GetComponent<Animator> ();
	
	}
	
	// Update is called once per frame
	void Update () {

		Move ();
		Shoot ();

		time = time + Time.deltaTime;

	}

	void Shoot(){
		fireRate = weapon.GetComponent<Weapon> ().fireRate;

		bool isShooting = CrossPlatformInputManager.GetButton("Fire");

		if (isShooting) {


			if (time > fireRate) {
				time = 0;
				weapon.GetComponent<Weapon> ().Shoot (shootDirection, baseDamage);
			}
			animator.SetBool("Shooting",true);



		} else {

			animator.SetBool("Shooting",false);
		}

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
	public void TakeDamage(int damage){

		print("ouch");
	
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

		animator.SetBool ("dead", true);
		animator.SetInteger("direction",direction);

	}

	//move function  moves and animates function
	void Move(){

		float x = CrossPlatformInputManager.GetAxis ("Horizontal");
		float y = CrossPlatformInputManager.GetAxis ("Vertical");

		//horizontal move
		if ((x * x) > (y * y)) {

			//looking right
			if(x > 0){
				
				direction = 1;
				
			}


			//looking left
			if(x < 0){
				
				direction = 3;
				
			}

		} 
		//vertical move
		else {
			//looking up
			if(y > 0){

				direction = 0;

			}

			//looking down
			if(y < 0){
				
				direction = 2;
				
			}


			//standing still
			if(x == 0 && y == 0){
				direction = -1;
			}

		}


		if (direction != -1) {

			shootDirection = direction;
			animator.SetBool ("IsRunning", true); 
			animator.SetInteger ("Direction", direction);
		} else {
		
			animator.SetBool ("IsRunning", false); 

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
