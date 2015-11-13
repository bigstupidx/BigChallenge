using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;

public class Inventory : MonoBehaviour {


	GameObject inventoryPanel;
	GameObject slotPanel;
	ItemDatabase database;
	public GameObject inventorySlot;
	public GameObject inventoryItem;

	GameObject Options;

	int slotAmount;
	public List<Item> items = new List<Item> ();
	public List<GameObject> slots = new List<GameObject> ();
	public List<GameObject> itemsList = new List<GameObject> ();

	void Start(){
		database = GetComponent<ItemDatabase> ();

		slotAmount = 18;
		inventoryPanel = GameObject.Find ("inventory Panel");
		slotPanel = inventoryPanel.transform.FindChild ("slot Panel").gameObject;

		Options = GameObject.Find("Options");



		for (int i = 0; i < slotAmount; i++) {
			items.Add (new Item());
			slots.Add (Instantiate(inventorySlot));
			slots[i].GetComponent<Slot>().id = i;
			slots[i].transform.SetParent (slotPanel.transform);

		}

		AddItem (0);
		AddItem (0);
		AddItem (1);
		AddItem (1);
		AddItem (1);
		AddItem (2);

	}

	public void AddItem(int id){
		Item itemToAdd = database.FetchItemByID (id);
		if (itemToAdd.Stackable && CheckIfItemIsInventory (itemToAdd)) {
			for (int i=0; i< items.Count; i++) {
				if (items [i].ID == id) {
					ItemData data = slots [i].transform.GetChild (0).GetComponent<ItemData> ();
					data.amount++;
					data.transform.GetChild (0).GetComponent<Text> ().text = data.amount.ToString ();
					break;
				}
			}
		} else if(!CheckIfItemIsInventory(itemToAdd)) {

			for (int i=0; i<items.Count; i++) {
				if (items [i].ID == -1) {
					items [i] = itemToAdd;
					GameObject itemObj = Instantiate (inventoryItem);
					itemObj.GetComponent<ItemData>().item = itemToAdd;
					itemObj.GetComponent<ItemData>().slot = i;
					itemObj.transform.SetParent (slots [i].transform);
					itemObj.transform.position = Vector2.zero;
					itemObj.GetComponent<Image> ().sprite = itemToAdd.Sprite;
					itemObj.name = itemToAdd.Title;
					itemsList.Add(itemObj);

					break;
				}
			}
		}
	}

	
	public void DecrementItem(int id){
			for (int i=0; i< items.Count; i++) {
				if (items [i].ID == id) {
					ItemData data = slots [i].transform.GetChild (0).GetComponent<ItemData> ();
				data.amount--;
				data.transform.GetChild (0).GetComponent<Text> ().text = data.amount.ToString ();

				if(data.amount == 0){
					RemoveItem(id);


				}
				var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
				behave.life = behave.life + 20;
				if(behave.life > behave.maxLife){

					behave.life = behave.maxLife;
				}

					break;
				}
			}
	}

	public void RemoveItem(int id){
		for (int i=0; i<items.Count; i++) {
			if (items [i].ID == id) {

				for(int j=0; j<itemsList.Count; j++){

					Debug.Log(itemsList[j].name);

					if(itemsList[j].name == items[i].Title){
						Destroy(itemsList[j]);
						itemsList.RemoveAt(j);
					}
				}

				Debug.Log ("Entrou para remover");
				
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
}
