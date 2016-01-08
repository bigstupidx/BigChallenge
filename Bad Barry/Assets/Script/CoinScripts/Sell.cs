using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class Sell : MonoBehaviour {

	public int itemPrice;
	public Coin coin;
	public Button button;

	void Start(){
		coin = new Coin (200);
		button = GameObject.Find ("BuyButton").GetComponent<Button>();

	}

	void Update(){

//		var colors = button.colors;
//
//		print (coin.Coins);
//
//		if (!checkCoins (coin.Coins)) {
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
		print ("buttonClicked");

		print (button.name);
		itemPrice = ListBank.Instance.itemPrice;
//		
		if (checkCoins(coin.Coins)) {
			coin.Coins -= itemPrice;
			print ("compra efetuada");
			//CHAMAR FUNCAO PARA ADICIONAR NO INVENTARIO
		} else
			print ("Coins insuficiente");

		print (coin.Coins);
	}
	
	public bool checkCoins(int coins){
		if (coins >= itemPrice)
			return true;
		return false;
	}
	
}
