using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;
using System;

public class ItemData : MonoBehaviour, IBeginDragHandler, IDragHandler, IEndDragHandler, IPointerDownHandler,
IPointerEnterHandler, IPointerExitHandler, IEventSystemHandler, ISelectHandler,IDeselectHandler, IPointerClickHandler {

	public Item item;
	public int amount;
	public int slot;

	private Inventory inv;
	private Tooltip tooltip;
	private Vector2 offset;

	private Options options;

	//Options options;



	void Start(){
		inv = GameObject.Find ("Inventory").GetComponent<Inventory> ();
		tooltip = inv.GetComponent<Tooltip> ();
		options = inv.GetComponent<Options> ();
		options.Deactivate ();
	}
	

	public void OnSelect(BaseEventData eventData){
		Debug.Log ("CLIQUEI");

		//options.Activate(item, this.transform.position);
		//options.transform.SetParent (this.transform);

	}

	public void OnDeselect(BaseEventData eventData){
		Debug.Log ("DESCLIQUEI");
		//options.Deactivate ();
	}

	public void OnPointerClick(PointerEventData eventData){
		Debug.Log ("cliquei");
		if (item.Stackable)
			inv.DecrementItem (item.ID);
		//else
			//inv.EquipItem (item.ID); // CASO FOR UMA ARMA, IR PARA UMA FUNCAO PARA EQUIPA-LA NO PERSONAGEM
	}

	public void OnBeginDrag(PointerEventData eventData){
		if(item != null){
			offset = new Vector2(0,0);
			this.transform.SetParent(this.transform.parent.parent); // setando o parente do item para o slotpanel 
			this.transform.position = eventData.position - offset;
			GetComponent<CanvasGroup>().blocksRaycasts = false;
		}
	}

	public void OnDrag(PointerEventData eventData){
		if(item != null){
			this.transform.position = eventData.position - offset;
		}

	}

	public void OnEndDrag(PointerEventData eventData){

		this.transform.SetParent(inv.slots[slot].transform);
		this.transform.position = inv.slots[slot].transform.position;
		GetComponent<CanvasGroup>().blocksRaycasts = true;
	}

	public void OnPointerDown(PointerEventData eventData){
		if (item != null) {
			offset = eventData.position - new Vector2 (this.transform.position.x, this.transform.position.y);
			
			// Selection tracking
			EventSystem.current.SetSelectedGameObject(gameObject, eventData);

		}



	}

	public void OnPointerEnter(PointerEventData eventData){
		tooltip.Activate (item);
	}

	public void OnPointerExit(PointerEventData eventData){
		tooltip.Deactivate ();
	}


}
 