using UnityEngine;
using System.Collections;

public class AutoScroll : MonoBehaviour {
	private Transform content;
	private float timer=0;
	private float speed=0.001f;
	private bool enableScrool = true;
	private float distanceToScrool = 1f;
	private GameBehavior behave;
	// Use this for initialization
	void Start () {
		content = gameObject.transform;
		behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();

	}
	
	// Update is called once per frame
	void Update () {

		if (enableScrool){
			if (timer < speed) {
				timer += Time.deltaTime;
			} else {
				timer = 0;
				content.position = new Vector3 (transform.position.x, transform.position.y + distanceToScrool, transform.position.z);
			}
		}
	}

	public void goToMap(AudioSource audio){
		behave.GoToMapWithSound (audio);

	}
}
