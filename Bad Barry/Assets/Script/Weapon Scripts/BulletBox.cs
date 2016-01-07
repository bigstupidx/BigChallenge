using UnityEngine;
using System.Collections;

public class BulletBox : MonoBehaviour {


	public int type;
	public int minBullets;
	public int maxBullets;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter2D (Collider2D col){

		if(col.tag == "Player")
		{
			col.gameObject.GetComponent<Player>().getBullet(type,minBullets,maxBullets);
			Destroy(this.gameObject);
		}

	}



}
