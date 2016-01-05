using UnityEngine;
using System.Collections;

public class VisionColision : MonoBehaviour {


	// Use this for initialization
	void Start () {

	}
	
	// Update is called once per frame
	void Update () {
		var x = gameObject.GetComponentInParent<FollowPlayer>();

		var rotationVector = transform.rotation.eulerAngles;
		rotationVector.z = x.direction * -90;
		transform.rotation = Quaternion.Euler(rotationVector);


	
	}


	void OnTriggerEnter2D (Collider2D col){


		if(col.gameObject.tag == "Player"){

			var x = gameObject.GetComponentInParent<FollowPlayer>();
			x.active = true;
		}



	}



}
