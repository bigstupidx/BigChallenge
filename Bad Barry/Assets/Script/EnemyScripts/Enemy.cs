using UnityEngine;
using System.Collections;

public class Enemy : MonoBehaviour {

	public int coinsWhenDie = 5;

	private GameBehavior behave;

	public GameObject[] bulletBox;


	public int life = 100;
	public int baseDamage = 0;
	public int shootDirection = 0;
	public GameObject weapon;

	public int selectedWeapon = 0;

	public float experience = 0;
	
	private Animator bothAnimator;
	private Animator torsoAnimator;
	private Animator legAnimator;
	
	public bool isShooting = false;
	
	public bool dead = false;
	
	public float fireRate = 1f;
	private float time;

	// Use this for initialization
	void Start () {

		bothAnimator = transform.GetComponent<Animator> ();
		legAnimator = transform.Find("Legs").GetComponent<Animator>();
		torsoAnimator = transform.Find("Torso").GetComponent<Animator>();
	
	}
	
	// Update is called once per frame
	void Update () {
	
		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		if(!behave.pause){

		Shoot();
		time = time + Time.deltaTime;
		}

	}

	//take damage function damage is the damage taken
	public void TakeDamage(int damage){

//		print (damage);
		var x = transform.GetComponent<FollowPlayer> ();
		x.active = true;

		if (life <= damage) {
			
			life = 0;
			Die();
			
			
		} else {
			life = life - damage;	
		}
		
	}

	//death animation function
	void Die(){
		dead = true;
		legAnimator.SetBool ("IsDead", true);
		torsoAnimator.SetBool ("IsDead", true);
		bothAnimator.SetBool ("dead", true);
		isShooting = false;
		Destroy (transform.GetComponent<BoxCollider2D> ());

		var player = GameObject.FindGameObjectWithTag("Player");
		player.GetComponent<Player> ().IncrementXp (experience);
		if(Random.Range(1,4) == 2){
			Instantiate( bulletBox[Random.Range(0,(bulletBox.Length -1))],transform.position,transform.rotation);
		}

		behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		behave.incCoins (coinsWhenDie);

	}



	void Shoot(){

		var x = weapon.GetComponent<Weapon>().weapons[selectedWeapon];
		fireRate = x.GetComponent<WeaponStats>().fireRate;
		if (isShooting) {
			
			
			if (time > fireRate) {
				time = 0;
				weapon.GetComponent<Weapon> ().Shoot (shootDirection, baseDamage,selectedWeapon);

			}
			torsoAnimator.SetBool("Shooting",true);
			
			
			
		} else{
			
			torsoAnimator.SetBool("Shooting",false);
		}
		
	}


}
