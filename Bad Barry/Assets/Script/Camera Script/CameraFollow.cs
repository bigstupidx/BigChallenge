using UnityEngine;
using System.Collections;

public class CameraFollow : MonoBehaviour 
{

	private Transform player;		// transform of player to get its position


	void Start ()
	{
		// gets players transform
		player = GameObject.FindGameObjectWithTag("Player").transform;
	}

	void FixedUpdate ()
	{
		if(player)
		{
			TrackPlayer();
		}else
		{
			player = GameObject.FindGameObjectWithTag("Player").transform;
			TrackPlayer();
		}
	}
		
	void TrackPlayer ()
	{
		float targetX = player.position.x;
		float targetY = player.position.y;
		transform.position = new Vector3(targetX, targetY, transform.position.z);
	}
}
