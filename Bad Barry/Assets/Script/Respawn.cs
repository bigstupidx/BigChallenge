using UnityEngine;
using System.Collections;

public class Respawn : MonoBehaviour {
	public float respawn_time,timer;
	public GameObject inimigo;
	//private Animator animator;
	//public Transform gateTransform;

	// Use this for initialization
	void Start () {
	//	animator = gateTransform.GetComponent<Animator> ();
	
	}
	
	// Update is called once per frame
	void Update () {

		timer += Time.deltaTime;
		if (respawn_time < timer) {
			timer = 0;	
			Instantiate (inimigo, transform.position, transform.rotation);
		}
	//	animator.SetTrigger("Spawn");
	}
}
