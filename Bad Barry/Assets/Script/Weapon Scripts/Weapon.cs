using UnityEngine;
using System.Collections;

public class Weapon : MonoBehaviour {

	//public float fireRate = 0;
	public int minDamage = 10;
	public int maxDamage = 20;
	public int bulletSpeed = 20;
	public float fireRate = 0;
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

	public void Shoot(int direction, int baseDamage){
		Transform bullet =  Instantiate(bulletPrefab, firePoint.position, firePoint.rotation) as Transform;
		//Handheld.Vibrate ();
		if (bullet == null) {
		
			print ("null found");
			
		} else {
			bullet.GetComponent<BulletScript> ().direction = direction;
			bullet.GetComponent<BulletScript> ().baseDamage = baseDamage;
			bullet.GetComponent<BulletScript> ().minDamage = minDamage;
			bullet.GetComponent<BulletScript> ().maxDamage = maxDamage;
			bullet.GetComponent<BulletScript> ().speed = bulletSpeed;
			bullet.GetComponent<BulletScript>().origin = transform.parent.gameObject;
		}



	}
}
