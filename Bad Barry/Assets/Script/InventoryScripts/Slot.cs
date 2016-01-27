using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;

public class Slot : MonoBehaviour, IDropHandler {
	public int id;
	private Inventory inv;


	void Start () {
		inv = GameObject.Find ("Inventory").GetComponent<Inventory> ();	
	}

	public void OnDrop(PointerEventData eventData){
		ItemData droppedItem = eventData.pointerDrag.GetComponent<ItemData> ();

		//CHECAR IF POR IF E FAZER OS CALCULOS COM CALMA

		//SE O ITEM QUE ESTA SENDO ARRASTADO ESTA ORIGINALMENTE NO PANEL1
		if (IsInPanel1 (droppedItem)) {

			Debug.Log ("ITEM Q ESTA SENDO ARRASTADO ESTA NO SLOT 1");
			if (id >= 0 && id <= 10) { // SE CLICOU PARA COLOCAR O ITEM NO PANEL 1 ( DO PANEL 1 P/ PANEL 1 MSMO ) 
				
				if (inv.items [id].ID == -1) { // SE O SLOT Q ELE ESTA TENTANDO COLOCAR O ITEM ESTIVER VAZIO

					inv.items [droppedItem.slot] = new Item ();
					inv.items [id] = droppedItem.item;
					droppedItem.slot = id;
				}

				else{ // SE NO SLOT CONTER ALGUM ITEM, A POSICAO DOS 2 SAO INVERTIDAS


					Transform item = this.transform.GetChild (0);
					item.GetComponent<ItemData> ().slot = droppedItem.slot;
					item.transform.SetParent (inv.slots [droppedItem.slot].transform);
					item.transform.position = inv.slots [droppedItem.slot].transform.position;

					inv.items [droppedItem.slot] = item.GetComponent<ItemData> ().item;

					droppedItem.slot = id;
					droppedItem.transform.SetParent (this.transform);
					droppedItem.transform.position = this.transform.position;
					

					inv.items [id] = droppedItem.item;


				}

			}
			else{ //SE CLICOU PARA COLOCAR O ITEM NO PANEL2 (DO PANEL 1 P/ PANEL 2)
				if (inv.items2 [id-50].ID == -1) { // SE O SLOT Q ELE ESTA TENTANDO COLOCAR O ITEM ESTIVER VAZIO
					inv.items[droppedItem.slot] = new Item();
					inv.items2[id-50] = droppedItem.item;
					droppedItem.slot = id;
				}

				else{ // SE NO SLOT CONTER ALGUM ITEM, A POSICAO DOS 2 SAO INVERTIDAS 

					Transform item = this.transform.GetChild (0);
					item.GetComponent<ItemData> ().slot = droppedItem.slot;
					item.transform.SetParent (inv.slots [droppedItem.slot].transform);
					item.transform.position = inv.slots [droppedItem.slot].transform.position;

					inv.items [droppedItem.slot] = item.GetComponent<ItemData> ().item;

					droppedItem.slot = id;
					droppedItem.transform.SetParent (this.transform);
					droppedItem.transform.position = this.transform.position;
					

					inv.items2 [id-50] = droppedItem.item;
				}

			}
		} 



		else { //SE O ITEM QUE ESTA SENDO ARRASTADO ESTA ORIGINALMENTE NO PANEL2


			Debug.Log ("ITEM Q ESTA SENDO ARRASTADO ESTA NO SLOT 2");

			if (id >= 0 && id <= 10) { // SE CLICOU PARA COLOCAR O ITEM NO PANEL 1 ( DO PANEL 2 P/ PANEL 1  ) 
				
				if (inv.items [id].ID == -1) { // SE O SLOT Q ELE ESTA TENTANDO COLOCAR O ITEM ESTIVER VAZIO
					
					inv.items2 [droppedItem.slot-50] = new Item ();
					inv.items [id] = droppedItem.item;
					droppedItem.slot = id;
				}
				
				else{ // SE NO SLOT CONTER ALGUM ITEM, A POSICAO DOS 2 SAO INVERTIDAS (do panel 2 p/ panel1)
					
					Transform item = this.transform.GetChild (0);
					item.GetComponent<ItemData> ().slot = droppedItem.slot;
					item.transform.SetParent (inv.slots2 [droppedItem.slot-50].transform);
					item.transform.position = inv.slots2 [droppedItem.slot-50].transform.position;

					inv.items2 [droppedItem.slot-50] = item.GetComponent<ItemData> ().item;

					droppedItem.slot = id;
					droppedItem.transform.SetParent (this.transform);
					droppedItem.transform.position = this.transform.position;

					inv.items [id] = droppedItem.item;
					
				}
				
			}
			else{ //SE CLICOU PARA COLOCAR O ITEM NO PANEL2 (DO PANEL 2 P/ PANEL 2)
				if (inv.items2 [id-50].ID == -1) { // SE O SLOT Q ELE ESTA TENTANDO COLOCAR O ITEM ESTIVER VAZIO
					inv.items2[droppedItem.slot-50] = new Item();
					inv.items2[id-50] = droppedItem.item;
					droppedItem.slot = id;
				}
				
				else{ // SE NO SLOT CONTER ALGUM ITEM, A POSICAO DOS 2 SAO INVERTIDAS 
					
					Transform item = this.transform.GetChild (0);
					item.GetComponent<ItemData> ().slot = droppedItem.slot;
					item.transform.SetParent (inv.slots2 [droppedItem.slot-50].transform);
					item.transform.position = inv.slots2 [droppedItem.slot-50].transform.position;

					inv.items2 [droppedItem.slot-50] = item.GetComponent<ItemData> ().item;
					
					droppedItem.slot = id;
					droppedItem.transform.SetParent (this.transform);
					droppedItem.transform.position = this.transform.position;

					inv.items2 [id-50] = droppedItem.item;
				}
				
			}
		}
		if (slots2Completed ()) 
			inv.slots2Completed = true;
		else
			inv.slots2Completed = false;
	}

	public bool slots2Completed(){
		for (int i = 0; i< inv.slots2.Count; i++) {
			if(inv.items2[i].ID == -1)
				return false;
		}
		return true;
	}

	public bool IsInPanel1(ItemData droppedItem){
		for (int i = 0; i < inv.items.Count; i++) {
			if (inv.items [i].ID == droppedItem.item.ID) {
				return true;
			}
		}
		return false;
	}

}
