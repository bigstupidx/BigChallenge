using UnityEngine;
using System.Collections;

public class BulletScript : MonoBehaviour {
	public float speed = 10;
	public int maxDamage = 1;
	public int minDamage = 2;
	public int baseDamage = 0;
	public int direction = 0;
	public GameObject origin;

	// Use this for initialization
	void Start () {

		//Destroy (gameObject, 1);
		//shoot up
		if (direction == 0) {
			
			transform.Rotate(0,0,90);
			
		}
		//shoot right
		if (direction == 1) {
			
			transform.Rotate(0,0,0,0);
			
			
			
		}
		//shoot down
		if (direction == 2) {
			
			transform.Rotate(0,0,270,0);
			
			
			
		}
		//shoot left
		if (direction == 3) {
			
			transform.Rotate(0,0,180,0);
			
			
			
		}
	
	}
	
	// Update is called once per frame
	void Update () {


		//shoot up
		if (direction == 0) {
			
			transform.Translate(Vector3.right * (speed * Time.deltaTime));

		}
		//shoot right
		if (direction == 1) {
			
			transform.Translate(Vector3.right * (speed * Time.deltaTime));


			
		}
		//shoot down
		if (direction == 2) {
			
			transform.Translate(Vector3.right * (speed * Time.deltaTime));


			
		}
		//shoot left
		if (direction == 3) {
			
			transform.Translate(Vector3.right * (speed * Time.deltaTime));


			
		}
	}

	void OnTriggerEnter2D (Collider2D col){

		print("colidi");



		maxDamage = maxDamage + baseDamage;

		minDamage = minDamage + baseDamage;

		if (col.gameObject.tag == "Player" && col.gameObject != origin) {


			col.gameObject.GetComponent<Player>().TakeDamage(Random.Range(minDamage,maxDamage));
			Destroy (this.gameObject);

		}
		if (col.gameObject.tag == "Enemy" && col.gameObject != origin) {

			col.gameObject.GetComponent<Enemy>().TakeDamage(Random.Range(minDamage,maxDamage));

			Destroy (this.gameObject);
		}



		if (col.gameObject.tag == "Wall") {
		
			Destroy(this.gameObject);
		}

		if (col.gameObject.tag == "Destructable") {

			col.gameObject.GetComponent<Appear>().AppearThing();

			Destroy(col.gameObject);
			Destroy(this.gameObject);

			
		}





	}
}
