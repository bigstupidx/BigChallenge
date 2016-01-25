using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class Sell : MonoBehaviour {

	public Item item;
	public Coin coin;
	public Button button;
	public GameObject CoinsPanel;
	private Inventory inv;

	public bool buttonActivate = true;
	public GameBehavior behave;

	void Start(){
		behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		coin = new Coin (behave.coins);
		button = GameObject.Find ("BuyButton").GetComponent<Button>();
		CoinsPanel = GameObject.Find ("CoinAmount");
		CoinsPanel.GetComponent<Text> ().text = "x "+coin.Coins.ToString ();

	}

	void Update(){

		//TRATAR SE ELE JA COMPROU TAMBEM A SKILL, PQ PORENQUANTO EU CHECO SE O ITEM ESTA NO INVENTORY APENAS
		item = ListBank.Instance.itemToBuy;

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
			buttonActivate = true;
		}

		//LOGICA PARA DESATIVAR O ITEM SE ELE JA ESTIVER NO INVENTORY
		if (!item.Stackable && checkItemInInventory (item.ID)) {
			print ("DESATIVAR ESTE ITEM");
			buttonActivate = false;

			//MUDAR A APARENCIA DO BUTTON OU DA STORE, INDICANDO QUE JA TEM ESTE ITEM

//			colors.normalColor = Color.gray;
//			colors.highlightedColor = Color.gray;
//			colors.disabledColor = Color.gray;
//			colors.pressedColor = Color.gray;
//			button.colors = colors;
		}

	}

	public bool checkItemInInventory(int id){
		for(int i = 0; i < behave.inventory.Length;i++){
			if(behave.inventory[id] > 0){
				return true;
			}
		}
		return false;
	}

	public void onBuyButtonClicked(AudioSource audio){

		item = ListBank.Instance.itemToBuy;

		if (checkCoins(coin.Coins) && !buttonActivate) {

			//FAZER LOGICA PARA RETIRAR ITEMS(!STACKABLE) DA LOJA DPS DE COMPRADOS

			//som quando comprar item
			audio.Play();

			coin.Coins -= item.Value;
			CoinsPanel.GetComponent<Text> ().text = "x "+coin.Coins.ToString ();

			if(item.Ability){
				//SETAR HABILIDADE COMO DESBLOQUEADA, E HABILITAR ELA IN-GAME 4EVER
				//ADICIONANDO HABILIDADE DO ARRAY LA NO GAMEBEHAVIOR
				behave.abilityIDs[behave.abilityIndex] = item.ID;
				behave.abilityIndex++;
			}else{
				behave.inventory[item.ID]++;
			}
			behave.coins = coin.Coins;
			behave.CheckWeaponAchievements();


		} else
			print ("Coins insuficiente");
			//LUCAS COLOCAR SOM REPRESENTANDO Q N TEM CASH

	}

	public void goToMapScene(AudioSource audio){
		behave.GoToMapWithSound (audio);
	}
	
	public bool checkCoins(int coins){
		if (coins >= item.Value)
			return true;
		return false;
	}
	
}
