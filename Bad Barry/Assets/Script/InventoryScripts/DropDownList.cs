using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class DropDownList : MonoBehaviour {

	// Use this for initialization
	private Dropdown dropdown;
//	public List<Item> items = new List<Item> ();

	void Start () {

		dropdown = gameObject.GetComponent<Dropdown> ();
		dropdown.options.Clear ();
		Populate (10);
	}

	
	void Populate(int amount){
		for (int i = 1; i <= amount; i++) {
			dropdown.options.Add (new Dropdown.OptionData(i.ToString()));
		}
	}


}
