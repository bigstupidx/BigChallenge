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
		coin = new Coin (200);
		button = GameObject.Find ("BuyButton").GetComponent<Button>();
		CoinsPanel = GameObject.Find ("CoinAmount");
		CoinsPanel.GetComponent<Text> ().text = "x "+coin.Coins.ToString ();

	}

	void Update(){
//
//		itemPrice = ListBank.Instance.itemPrice;
//
//		var colors = button.colors;
//
//		if (!checkCoins (coin.Coins)){
//			button.enabled = false;
//			print ("button not enable");
////			colors.normalColor.a = 0.3f;
////			button.colors = colors;
//		} else {
//			button.enabled = true;
//			print ("button enable");
////			colors.normalColor.a = 255;
////			button.colors = colors;
//		}


	}

	public void onBuyButtonClicked(){

		itemPrice = ListBank.Instance.itemPrice;
		itemID = ListBank.Instance.itemID;

		if (checkCoins(coin.Coins)) {
			coin.Coins -= itemPrice;
			CoinsPanel.GetComponent<Text> ().text = "x "+coin.Coins.ToString ();

			var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
			behave.inventory[itemID]++;
			//CHAMAR FUNCAO PARA ADICIONAR NO INVENTARIO
//				inv.AddItem(itemID);

		} else
			print ("Coins insuficiente");
			//LUCAS COLOCAR SOM REPRESENTANDO Q N TEM CASH

	}
	
	public bool checkCoins(int coins){
		if (coins >= itemPrice)
			return true;
		return false;
	}
	
}
