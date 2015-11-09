using UnityEngine;
using System.Collections;

public class Weapon : MonoBehaviour {

	//public float fireRate = 0;
	public int minDamage = 10;
	public int maxDamage = 20;
	public int bulletSpeed = 20;
	public float fireRate = 0;
	public float xValueUp = 0.10f;
	public float yValueUp = 0.40f;
	public float xValueRight = 0.50f;
	public float yValueRight = 0;
	public float xValueLeft = -0.50f;
	public float yValueLeft = 0;
	public float xValueDown = 0.05f;
	public float yValueDown = -0.40f;
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
		float xValue = 0f;
		float yValue = 0f;
		if (direction == 0) {
			yValue = yValueUp;
			xValue = xValueUp;
		} else if (direction == 1) {
			xValue = xValueRight;
		} else if (direction == 2) {
			yValue = yValueDown;
			xValue = xValueDown;
		} else if (direction == 3) {
			xValue = xValueLeft;
		}

		//Transform bullet =  Instantiate(bulletPrefab, firePoint.position, transform.rotation) as Transform;
		Transform bullet =  Instantiate(bulletPrefab, new Vector3(firePoint.position.x + xValue, firePoint.position.y + yValue, firePoint.position.z), firePoint.rotation) as Transform;
		print ("firePoint" + firePoint.position);
		print ("transform" + transform.position);
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
