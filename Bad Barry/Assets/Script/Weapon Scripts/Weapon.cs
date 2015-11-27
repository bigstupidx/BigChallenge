﻿using UnityEngine;
using System.Collections;

public class Weapon : MonoBehaviour {
	

	public GameObject[] weapons;


	//public LayerMask notToHit;

	//float timeToFire = 0;
	Transform firePoint;
	public Transform bulletPrefab;

	// Use this for initialization
	void Awake () {
		firePoint = transform.FindChild("FirePoint");

	}
	
	// Update is called once per frame
	void Update () {

	}

	public void Shoot(int direction, int baseDamage,int weapon){

		float xValue = 0f;
		float yValue = 0f;
		var selected = weapons[weapon].GetComponent<WeaponStats>();

		if (direction == 0) {
			yValue = selected.yValueUp;
			xValue = selected.xValueUp;
		} else if (direction == 1) {
			xValue = selected.xValueRight;
			yValue = selected.yValueRight;
		} else if (direction == 2) {
			yValue = selected.yValueDown;
			xValue = selected.xValueDown;
		} else if (direction == 3) {
			xValue = selected.xValueLeft;
			yValue = selected.yValueLeft;
		}

		Transform bullet =  Instantiate(bulletPrefab, new Vector3(firePoint.position.x + xValue, firePoint.position.y + yValue, firePoint.position.z), firePoint.rotation) as Transform;
				if (bullet == null) {
		
			print ("null found");
			
		} else {
			bullet.GetComponent<BulletScript> ().direction = direction;
			bullet.GetComponent<BulletScript> ().baseDamage = baseDamage;
			bullet.GetComponent<BulletScript> ().minDamage = selected.minDamage;
			bullet.GetComponent<BulletScript> ().maxDamage = selected.maxDamage;
			bullet.GetComponent<BulletScript> ().speed = selected.bulletSpeed;
			bullet.GetComponent<BulletScript> ().origin = transform.parent.gameObject;
		}



	}
}
