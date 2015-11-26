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

	private Animator bothAnimator;
	private Animator torsoAnimator;
	private Animator legAnimator;

	public bool dead = false;
	private bool isShooting = false;


	public float fireRate = 1f;
	private float time;

	//normally will receive its base experience on load
	public float experience = 0;
	public float neededExperience = 100;
	public int lvl = 0;

	private HUDGame hudGame;
	private GameObject HUD;

	public int strength = 0;
	public int agility = 0;
	public int inteligence = 0;
	public int vitality = 0;






	// Use this for initialization
	void Start () {
		Time.timeScale = 1;
		CrossPlatformInputManager.SetButtonUp("Fire");
//		print(CrossPlatformInputManager.GetButton("Fire"));

		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		strength = behave.getStrength();
		agility = behave.getAgility();
		inteligence = behave.getInteligence();
		vitality = behave.getVitality();
		isShooting = false;

		experience = behave.experience;
		life = behave.life;
		if(life <= 0){
			life = maxLife;
			behave.life = life;
		}
		neededExperience = behave.neededExperience;
		maxLife = behave.maxLife;



		HUD = GameObject.FindGameObjectWithTag ("HUD");

		//HUD
		hudGame = HUD.GetComponent<HUDGame> ();
		hudGame.initLife (this);


		bothAnimator = transform.GetComponent<Animator> ();
		legAnimator = transform.Find("Legs").GetComponent<Animator>();
		torsoAnimator = transform.Find("Torso").GetComponent<Animator>();
		hudGame.takeDamage(this);
		hudGame.incrementXp (this);

		torsoAnimator.SetInteger("Weapon",behave.selectedWeapon);

	}
	
	// Update is called once per frame
	void Update () {

		if (!dead) {
			Move ();
			Shoot ();
		}

		time = time + Time.deltaTime;

	}

	public void ChangeWeapon(){

		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();

		torsoAnimator.SetInteger("Weapon",behave.selectedWeapon);

	}


	void Shoot(){
		fireRate = weapon.GetComponent<Weapon> ().fireRate;

		isShooting = CrossPlatformInputManager.GetButton("Fire");

		if (isShooting) {


			if (time > fireRate) {
				time = 0;
				weapon.GetComponent<Weapon> ().Shoot (shootDirection, baseDamage);
			}
			torsoAnimator.SetBool("Shooting",true);



		} else {

			torsoAnimator.SetBool("Shooting",false);
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
			StartCoroutine(Die());
			
			hudGame.playerDead(this);
			
		} else {
			
			life = life - trueDamage;	
			
			hudGame.takeDamage(this);
			
		}
		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		behave.life = life;
		
	}

	//receive xp function, the received experience is divided by players lvl
	//so it is harder to level up on easier enemies or easier quests
	public void IncrementXp(float receivedXp){

		experience = experience + (receivedXp / (lvl + 1));



		if (experience >= neededExperience) {

			experience = experience - neededExperience;
			neededExperience = neededExperience * 1.3f;
			LevelUp();
		}

		hudGame.incrementXp (this);

		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		behave.experience = experience;
		behave.neededExperience = neededExperience;


	}

	//screen representation to level up and hud representation
	public void LevelUp(){
		lvl++;
		var behaviour = GameObject.FindGameObjectWithTag("Behaviour");
		behaviour.GetComponent<GameBehavior> ().LeveledUp(lvl);
		//print("Level Up");
		hudGame.levelUp();





	}







	//death animation function
	IEnumerator Die(){

		dead = true;
		bothAnimator.SetBool ("dead", true);
		legAnimator.SetBool ("IsDead", true);
		torsoAnimator.SetBool ("IsDead", true);


		Transform retry = GameObject.FindWithTag("Retry").transform;
		retry.GetComponent<Retry> ().activate();
		yield return new WaitForSeconds (6);
		Time.timeScale = 0;




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
			legAnimator.SetBool ("IsRunning", true); 
			torsoAnimator.SetInteger ("Direction", direction);
			legAnimator.SetInteger ("Direction", direction);
			bothAnimator.SetInteger("direction",direction);


		} else {
		
			legAnimator.SetBool ("IsRunning", false); 

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
