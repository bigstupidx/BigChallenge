using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class Inventory : MonoBehaviour {


	GameObject inventoryPanel;
	GameObject slotPanel;
	GameObject slotPanel2;
	ItemDatabase database;
	public GameObject inventorySlot;
	public GameObject inventoryItem;

	//GameObject Options;

	// VARIAVEIS PARA O SLOTPANEL DE CIMA
	int slotAmount;
	public List<Item> items = new List<Item> ();
	public List<GameObject> slots = new List<GameObject> ();
	public List<GameObject> itemsList = new List<GameObject> ();

	//VARIAVEIS PARA O SLOT PANEL DE BAIXO
	int slotAmount2;
	public List<Item> items2 = new List<Item> ();
	public List<GameObject> slots2 = new List<GameObject> ();

	GridLayoutGroup gridLayoutGroup;

	void Start(){
		database = GetComponent<ItemDatabase> ();

		slotAmount = 10;
		slotAmount2 = 53;
		inventoryPanel = GameObject.Find ("inventory Panel");
		slotPanel = inventoryPanel.transform.FindChild ("slot Panel").gameObject;
		slotPanel2 = inventoryPanel.transform.FindChild ("slot In Game Panel").gameObject;

		//Options = GameObject.Find("Options");

		for (int i = 0; i < slotAmount; i++) {
			items.Add (new Item());
			slots.Add (Instantiate(inventorySlot));
			slots[i].GetComponent<Slot>().id = i;
			slots[i].transform.SetParent (slotPanel.transform);
		}

		for (int i = 50; i < slotAmount2; i++) {
			items2.Add (new Item());
			slots2.Add (Instantiate(inventorySlot));
			slots2[i-50].GetComponent<Slot>().id = i;
			slots2[i-50].transform.SetParent (slotPanel2.transform);
		}

		gridLayoutGroup = slotPanel.GetComponent<GridLayoutGroup> ();



		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();

		for(int i = 0; i < behave.inventory.Length;i++){

			for(int j = 0 ; j < behave.inventory[i]; j++){

				AddItem(i);

			}

		}



	}

	public void AddItem(int id){
		Item itemToAdd = database.FetchItemByID (id);

		if (itemToAdd.Stackable && CheckIfItemIsInventory (itemToAdd)) {
			for (int i=0; i< items.Count; i++) {
				if (items [i].ID == id) {
					ItemData data = slots [i].transform.GetChild (0).GetComponent<ItemData> ();

					if(data.amount == 0)
						data.amount+=2;
					else
						data.amount++;
					data.transform.GetChild (0).GetComponent<Text> ().text = data.amount.ToString ();

					//LOGICA PARA POSICAO DO STACKAMOUNT
					float slotX = data.transform.GetComponentInParent<RectTransform>().rect.width;
					data.transform.GetChild (0).GetComponent<Text> ().GetComponent<RectTransform>().position = new Vector3(slotX/(float)2.35,-slotX/(float)2.35,0);

					break;

					//POSSIVELMENTE TER Q ARRUMAR O TAMANHO DA FONTE VIA CODIGO
				}
			}
		} else if(!CheckIfItemIsInventory(itemToAdd)) {

			for (int i=0; i<items.Count; i++) {
				if (items [i].ID == -1) {
					items [i] = itemToAdd;
					GameObject itemObj = Instantiate (inventoryItem);
					itemObj.GetComponent<ItemData>().item = itemToAdd;
					itemObj.GetComponent<ItemData>().slot = i;
					itemObj.GetComponent<ItemData>().GetComponent<RectTransform>().sizeDelta = new Vector2(gridLayoutGroup.cellSize.x/(float)1.6, gridLayoutGroup.cellSize.x/(float)1.6 );
					itemObj.transform.SetParent (slots [i].transform);
					itemObj.transform.position = Vector2.zero;
					itemObj.GetComponent<Image> ().sprite = itemToAdd.Sprite;
					itemObj.GetComponent<Image> ().preserveAspect = true;
					itemObj.name = itemToAdd.Title;
					itemsList.Add(itemObj);

					break;
				}
			}
		}
	}

	
//	public void DecrementItem(int id){
//		for (int i=0; i< items.Count; i++) {
//			if (items [i].ID == id) {
//				ItemData data = slots [i].transform.GetChild (0).GetComponent<ItemData> ();
//				data.amount--;
//				data.transform.GetChild (0).GetComponent<Text> ().text = data.amount.ToString ();
//
//				if (data.amount == 0) {
//					//REMOVER ITEM DO SLOT 
//				}
//			}
//		}
//	}

	public void RemoveItem(int id){
		for (int i=0; i<items.Count; i++) {
			if (items [i].ID == id) {
				for(int j=0; j<itemsList.Count; j++){

					if(itemsList[j].name == items[i].Title){
						Destroy(itemsList[j]);
						items[i].ID = -1;
						itemsList.RemoveAt(j);
					}
				}
				
				break;
			}
		}
	}

	bool CheckIfItemIsInventory(Item item){

		for (int i=0; i< items.Count; i++) 
			if(items[i].ID == item.ID)
				return true;
		return false;

	}
	bool CheckIfItemIsInventory2(Item item){
		
		for (int i=0; i< items2.Count; i++) 
			if(items2[i].ID == item.ID)
				return true;
		return false;
		
	}

	public void UpdateInGame(){
	

		//MUDAR CONTENT PARA SER ITEMDATA PARA IR TAMBEM O AMOUNT DO OBJETO
		List<ItemData> content = new List<ItemData> ();

		for(int i = 0; i < slots2.Count ; i ++){

			if(slots2[i].GetComponentInChildren<ItemData>()){

				content.Add(slots2[i].GetComponentInChildren<ItemData>());

			}
			else{
				//quando a List recebe null da bosta, ae estamos instanciando um ItemData() vaazio
				GameObject itemObj = Instantiate (inventoryItem);

				content.Add(itemObj.GetComponent<ItemData>());
			}
		}


		var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
		behave.setInventoryItems(content);
	
	
	}





}
