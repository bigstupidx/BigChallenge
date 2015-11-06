using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class HUDGame: MonoBehaviour {
	
	//HUD life
	public Slider healthSlider;
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
}
