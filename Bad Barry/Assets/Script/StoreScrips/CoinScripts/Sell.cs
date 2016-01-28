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



	//tutorial
	public bool activeBlink = true;
	public bool blinkMessage = true;
	public bool pistolPurchased = false;
	public bool watersPurchased = false;
	public int indexToBuy = 0;
	public int waterCount = 5;
	public GameObject leftBuyArrow;
	public GameObject rightBuyArrow;
	public GameObject storeCanvasTutorial;
	public GameObject storeCanvasPanel;
	public GameObject backArrow;
	public GameObject canvasText;
	public GameObject endTutoText;
	public GameObject endTutoPanel;

	void Start(){
		behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		coin = new Coin (behave.coins);
		button = GameObject.Find ("BuyButton").GetComponent<Button>();
		CoinsPanel = GameObject.Find ("CoinAmount");
		CoinsPanel.GetComponent<Text> ().text = "x "+coin.Coins.ToString ();

		item = ListBank.Instance.itemToBuy;

		//tutorial
		if (behave.showTutorial) {
			StartCoroutine(ShowMessage("buy the Revolver"));
			StartCoroutine(BlinkArrow());
			storeCanvasTutorial.SetActive(true);
			StartCoroutine(BlinkArrow());
			activeBlink = false;
			buttonActivate = false;
		}

	}

	void Update(){

		item = ListBank.Instance.itemToBuy;

		var colors = button.colors;
		
		if (!checkCoins (coin.Coins)){
			//button.enabled = false;
			colors.normalColor = Color.red;
			colors.highlightedColor = Color.red;
			colors.disabledColor = Color.red;
			colors.pressedColor = Color.red;
			button.colors = colors;
			buttonActivate = false;
		}  else {
			//button.enabled = true;
			colors.normalColor = Color.white;
			colors.highlightedColor = Color.white;
			colors.disabledColor = Color.white;
			colors.pressedColor = Color.white;
			button.colors = colors;
			buttonActivate = true;
		}

//		if (item.ID == 5 || item.ID == 6) {
//			bulletsAmount.SetActive(true);
//			if(item.ID == 5)
//				bulletsAmount.GetComponent<Text>().text = "You have "+behave.bullets[1]+" bullets for "+item.Title;
//			else {
//				bulletsAmount.GetComponent<Text>().text = "You have "+behave.bullets[2]+" bullets for "+item.Title;
//			}
//		}
//
//		else
//			bulletsAmount.SetActive(false);

		//LOGICA PARA DESATIVAR O ITEM SE ELE JA ESTIVER NO INVENTORY
		if (!item.Stackable && checkItemInInventory (item.ID)) {
			buttonActivate = false;

			//MUDAR A APARENCIA DO BUTTON OU DA STORE, INDICANDO QUE JA TEM ESTE ITEM

			colors.normalColor = Color.red;
			colors.highlightedColor = Color.red;
			colors.disabledColor = Color.red;
			colors.pressedColor = Color.red;
			button.colors = colors;
		}


		//LOGICA DO TUTORIAL

		if (behave.showTutorial) {

			if(pistolPurchased && watersPurchased){

				if(blinkMessage){
					leftBuyArrow.GetComponent<Image>().color = Color.clear;
					rightBuyArrow.GetComponent<Image>().color = Color.clear;
					
					buttonActivate = false;
					
					colors.normalColor = Color.red;
					colors.highlightedColor = Color.red;
					colors.disabledColor = Color.red;
					colors.pressedColor = Color.red;
					button.colors = colors;

					behave.showStore = false;
					behave.showTutorial = false;
					behave.showMap = true;

					StartCoroutine(BlinkEndTutorial());

					blinkMessage = false; // COMO TA NO UPDATE, ENTRAR UMA VEZ SOH AQUI
				}


			}

			else{

				if(item.ID == indexToBuy){ //TEM Q COMPRAR PRIMEIRO A PISTOLA
					leftBuyArrow.GetComponent<Image>().color = Color.white;
					rightBuyArrow.GetComponent<Image>().color = Color.white;
					if(activeBlink){
						activeBlink = false;
						buttonActivate = true;

						colors.normalColor = Color.white;
						colors.highlightedColor = Color.white;
						colors.disabledColor = Color.white;
						colors.pressedColor = Color.white;
						button.colors = colors;
					}
				}

				else {
					leftBuyArrow.GetComponent<Image>().color = Color.clear;
					rightBuyArrow.GetComponent<Image>().color = Color.clear;
					activeBlink = true;
					buttonActivate = false;

					colors.normalColor = Color.red;
					colors.highlightedColor = Color.red;
					colors.disabledColor = Color.red;
					colors.pressedColor = Color.red;
					button.colors = colors;
				}
			}
		}

	}

	public IEnumerator BlinkEndTutorial(){
		endTutoPanel.SetActive(true);
		endTutoText.GetComponent<Text> ().text = "Now you are ready to start your journey, good luck!";
		yield return new WaitForSeconds(3.5f);

		endTutoText.GetComponent<Text> ().text = "Back to the Map to start!";
		yield return new WaitForSeconds(2f);

		endTutoPanel.SetActive (false);
		while(true){
			
			backArrow.SetActive(true);
			yield return new WaitForSeconds(.5f);
			backArrow.SetActive(false);
			yield return new WaitForSeconds(.5f);
		}



	}

	public IEnumerator BlinkArrow(){
		while(true){
			
			leftBuyArrow.SetActive(true);
			rightBuyArrow.SetActive(true);
			yield return new WaitForSeconds(.5f);
			leftBuyArrow.SetActive(false);
			rightBuyArrow.SetActive(false);
			yield return new WaitForSeconds(.5f);
		}
	}

	public IEnumerator BlinkBackArrow(){
		while(true){
			
			backArrow.SetActive(true);
			yield return new WaitForSeconds(.5f);
			backArrow.SetActive(false);
			yield return new WaitForSeconds(.5f);
		}
	}

	public IEnumerator ShowMessage(string message){
			
			//acessar text do panel na store

		storeCanvasPanel.SetActive(true);
//		GameObject.Find ("storeCanvasText").GetComponent<Text> ().text = message;
		canvasText.GetComponent<Text> ().text = message;
		yield return new WaitForSeconds (1.5f);

			buttonActivate = true;
			storeCanvasPanel.SetActive (false);

			yield return new WaitForSeconds(.5f);

	}

	public bool checkItemInInventory(int id){
		for(int i = 0; i < behave.inventory.Length;i++){

			if(behave.inventory[id] > 0){
				return true;
			}
		}
		
		for (int i = 0; i < behave.abilityIDs.Length; i++) {
			if(behave.abilityIDs[i] == id)
				return true;
		}
		return false;
	}

	public void onBuyButtonClicked(AudioSource audio){

		item = ListBank.Instance.itemToBuy;

		if (checkCoins(coin.Coins) && buttonActivate) {

			//FAZER LOGICA PARA RETIRAR ITEMS(!STACKABLE) DA LOJA DPS DE COMPRADOS

			//som quando comprar item
			audio.Play();

			coin.Coins -= item.Value;
			CoinsPanel.GetComponent<Text> ().text = "x "+coin.Coins.ToString ();

			if(item.Ability){
				behave.abilityIDs[behave.abilityIndex] = item.ID;
				behave.abilityIndex++;
			}else if(item.ID == 5) { // BALAS DA MP9
				behave.bullets[1] += 30;

			}else if(item.ID == 6){ // BALAS DA SHOTGUN
				behave.bullets[2] += 8;

			}else{
				behave.inventory[item.ID]++;
			}
			behave.coins = coin.Coins;
			behave.CheckWeaponAchievements();

			if(behave.showTutorial){
				if(item.ID == 0){
					pistolPurchased = true;
					indexToBuy = 1;
//					storeCanvasPanel.SetActive(true);
//					StopCoroutine(BlinkArrow());
					StartCoroutine(ShowMessage("buy 5 waters"));
					leftBuyArrow.GetComponent<Image>().color = Color.clear;
					rightBuyArrow.GetComponent<Image>().color = Color.clear;
//					StartCoroutine(Blink(false,false,true,"buy 5 waters"));
				}
				if(item.ID == 1){
					waterCount--;
					if(waterCount == 0){
						watersPurchased = true;
//						StopCoroutine(BlinkArrow());
					}
				}
			}


		} else
			print ("NAO COMPROU");

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
