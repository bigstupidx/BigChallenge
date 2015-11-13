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
		healthSliderImage = healthSlider.GetComponentInChildren<Image> ();
		xpSliderImage = xpSlider.GetComponentInChildren<Image> ();


	}
	
	void Update () {
		
	}
	
	public void initLife(Player player){
		healthSlider.maxValue = player.maxLife;
		healthSlider.value = player.maxLife;
		healthSliderImage.gameObject.SetActive (true);


		xpSlider.maxValue = player.neededExperience;
		xpSlider.value = player.experience;
		xpSliderImage.gameObject.SetActive (false);



	}
	
	public void takeDamage(Player player){
		healthSlider.value = player.life;
	}

	public void incrementXp(Player player){

		xpSliderImage.gameObject.SetActive (true);
		xpSlider.value = player.experience;
		xpSlider.maxValue = player.neededExperience;


		if (xpSlider.value == 0) {
			xpSliderImage.gameObject.SetActive (false);
		}
	}
	
	public void playerDead(Player player){
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
