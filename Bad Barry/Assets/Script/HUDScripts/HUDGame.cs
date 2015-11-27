using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class HUDGame: MonoBehaviour {

	public Menu currentMenu;
	
	//HUD life
	public Slider healthSlider;
	public Slider xpSlider;
	private Image healthSliderImage;
	private Image xpSliderImage;
	public GameObject lvlUp;
	public static bool isPaused = false;


	
	
	void Start () {



	}
	
	void Update () {
		
	}
	
	public void initLife(){


		var player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();
		healthSliderImage = healthSlider.GetComponentInChildren<Image> ();
		xpSliderImage = xpSlider.GetComponentInChildren<Image> ();

		healthSlider.maxValue = player.maxLife;
		healthSlider.value = player.maxLife;
		healthSliderImage.gameObject.SetActive (true);


		xpSlider.maxValue = player.neededExperience;
		xpSlider.value = player.experience;
		xpSliderImage.gameObject.SetActive (false);



	}
	
	public void takeDamage(){
		var player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();

		healthSlider.value = player.life;
	}

	public void incrementXp(){

		var player = GameObject.FindGameObjectWithTag("Player").GetComponent<Player>();

		xpSliderImage.gameObject.SetActive (true);
		xpSlider.value = player.experience;
		xpSlider.maxValue = player.neededExperience;


		if (xpSlider.value == 0) {
			xpSliderImage.gameObject.SetActive (false);
		}
	}
	
	public void playerDead(){

		healthSliderImage.gameObject.SetActive (false);
		
	}

	public void showMenu(){
		//pausar o jogo e tirar a nitidez do fundo
		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		if(behave.life > 0)
		currentMenu.IsOpen = !currentMenu.IsOpen;

	}

	public void levelUp(){

		lvlUp.GetComponent<Animator>().SetTrigger("level");

	}

}
