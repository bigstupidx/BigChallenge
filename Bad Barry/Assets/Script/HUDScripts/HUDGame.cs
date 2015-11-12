using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class HUDGame: MonoBehaviour {

	public Menu currentMenu;
	
	//HUD life
	public Slider healthSlider;
	public Slider xpSlider;
	private Image sliderBackground;
	
	
	void Start () {
		sliderBackground = healthSlider.GetComponentInChildren<Image> ();
	}
	
	void Update () {
		
	}
	
	public void initLife(Player player){
		healthSlider.maxValue = player.maxLife;
		healthSlider.value = player.maxLife;


		sliderBackground.gameObject.SetActive (true);
		
	}
	
	public void takeDamage(Player player){
		healthSlider.value = player.life;
	}
	
	public void playerDead(Player player){
		sliderBackground.gameObject.SetActive (false);
		
	}

	public void showMenu(){
		//pausar o jogo e tirar a nitidez do fundo
		currentMenu.IsOpen = !currentMenu.IsOpen;
	}
}
