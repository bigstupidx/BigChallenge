using UnityEngine;
using System.Collections;

public class Enemy : MonoBehaviour {

	public int life = 100;
	public int baseDamage = 0;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	//take damage function damage is the damage taken
	public void TakeDamage(int damage){
		
		if (life <= damage) {
			
			life = 0;
			Die();
			
			
		} else {
			life = life - damage;	
		}
		
	}

	//death animation function
	void Die(){
		
		print("die");
		Destroy (gameObject);

		
		
	}


}
