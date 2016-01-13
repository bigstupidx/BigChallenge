using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class Sell : MonoBehaviour {

	public int itemPrice;
	public int itemID;
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

		if (checkCoins(coin.Coins)) {

			//som quando comprar item
			audio.Play();


			coin.Coins -= itemPrice;
			CoinsPanel.GetComponent<Text> ().text = "x "+coin.Coins.ToString ();

			var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
			behave.inventory[itemID]++;
			behave.coins = coin.Coins;

			//CHAMAR FUNCAO PARA ADICIONAR NO INVENTARIO
//				inv.AddItem(itemID);

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
