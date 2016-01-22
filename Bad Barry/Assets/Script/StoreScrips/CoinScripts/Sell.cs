using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class Sell : MonoBehaviour {

	public int itemPrice;
	public int itemID;
	public bool ability;
	public Coin coin;
	public Button button;
	public GameObject CoinsPanel;
	private Inventory inv;

	void Start(){
//		inv = GameObject.Find ("Inventory").GetComponent<Inventory> ();
		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		coin = new Coin (behave.coins);
		button = GameObject.Find ("BuyButton").GetComponent<Button>();
		CoinsPanel = GameObject.Find ("CoinAmount");
		CoinsPanel.GetComponent<Text> ().text = "x "+coin.Coins.ToString ();

	}

	void Update(){
		itemPrice = ListBank.Instance.itemPrice;
		
		var colors = button.colors;
		
		if (!checkCoins (coin.Coins)){
			//button.enabled = false;
			colors.normalColor = Color.red;
			colors.highlightedColor = Color.red;
			colors.disabledColor = Color.red;
			colors.pressedColor = Color.red;
			button.colors = colors;
		}  else {
			//button.enabled = true;
			colors.normalColor = Color.white;
			colors.highlightedColor = Color.white;
			colors.disabledColor = Color.white;
			colors.pressedColor = Color.white;
			button.colors = colors;
		}
	}

	public void onBuyButtonClicked(AudioSource audio){

		itemPrice = ListBank.Instance.itemPrice;
		itemID = ListBank.Instance.itemID;
		ability = ListBank.Instance.ability;

		if (checkCoins(coin.Coins)) {

			//FAZER LOGICA PARA RETIRAR ITEMS(!STACKABLE) DA LOJA DPS DE COMPRADOS

			//som quando comprar item
			audio.Play();

			coin.Coins -= itemPrice;
			CoinsPanel.GetComponent<Text> ().text = "x "+coin.Coins.ToString ();

			var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
			if(ability){
				//SETAR HABILIDADE COMO DESBLOQUEADA, E HABILITAR ELA IN-GAME 4EVER

				//ADICIONANDO HABILIDADE DO ARRAY LA NO GAMEBEHAVIOR
				behave.abilityIDs[behave.abilityIndex] = itemID;
				behave.abilityIndex++;
			}else{
				behave.inventory[itemID]++;
			}
			behave.coins = coin.Coins;
			behave.CheckWeaponAchievements();


		} else
			print ("Coins insuficiente");
			//LUCAS COLOCAR SOM REPRESENTANDO Q N TEM CASH

	}

	public void goToMapScene(AudioSource audio){
		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		behave.GoToMapWithSound (audio);
	}
	
	public bool checkCoins(int coins){
		if (coins >= itemPrice)
			return true;
		return false;
	}
	
}
