using UnityEngine;
using System.Collections;

public class Coin : MonoBehaviour {

	public int Coins { get; set; }
	public Sprite Sprite { get; set; }
	public string Name { get; set; }

	public Coin(int coins){
		this.Coins = coins;
//		this.Sprite = Resources.Load<Sprite> ("Sprites Inventory/Itens/......");
//		this.name = name;
	}

}
