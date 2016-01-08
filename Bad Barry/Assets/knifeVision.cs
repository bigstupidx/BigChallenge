using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class knifeVision : MonoBehaviour {



	public List<GameObject> enemies;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		var x = gameObject.GetComponentInParent<Player>();
		var rotationVector = transform.rotation.eulerAngles;
		rotationVector.z = (x.shootDirection * -90) + 90;
		transform.rotation = Quaternion.Euler(rotationVector);

	}




	void OnTriggerEnter2D (Collider2D col){
		
		
		if(col.gameObject.tag == "Enemy"){
			
			enemies.Add(col.gameObject);
		}

	}

	void OnTriggerExit2D(Collider2D other){


		if(other.gameObject.tag == "Enemy"){

			enemies.Remove(other.gameObject);

		}




	}

}
