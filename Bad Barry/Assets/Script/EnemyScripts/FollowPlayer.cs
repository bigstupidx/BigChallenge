using UnityEngine;
using System.Collections;

public class FollowPlayer : MonoBehaviour {

	public bool active = false;

	public	float speed;
	public  float rangeMin = 2; 
	public float rangeMax = 100; 
	public int direction = 0;

	private Transform player;


	private Animator bothAnimator;
	private Animator torsoAnimator;
	private Animator legAnimator;

	private float delay = 0;


	public float distanceY;
	public float distanceX;
	public float rangeShoot;

	


	//distance error
//	private float maxError = 0.01f;


	public 
	void Awake ()
	{
		//finds player
		player = GameObject.FindGameObjectWithTag("Player").transform;
	}
	void Start(){
		bothAnimator = transform.GetComponent<Animator> ();
		legAnimator = transform.Find("Legs").GetComponent<Animator>();
		torsoAnimator = transform.Find("Torso").GetComponent<Animator>();
		gameObject.GetComponent<Enemy> ().shootDirection = direction;
		bothAnimator.SetInteger ("direction", direction);
		torsoAnimator.SetInteger ("Direction", direction);
		legAnimator.SetInteger ("Direction", direction);
	}
	
	void Update (){

		if(active){
			var behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();
			if(!behave.pause){


			delay = delay - Time.deltaTime;

			if (!gameObject.GetComponent<Enemy> ().dead && delay < 0) {

				//gets distance between enemy and player axis
				 distanceY = Mathf.Abs (player.transform.position.y - transform.position.y);
				 distanceX = Mathf.Abs (player.transform.position.x - transform.position.x);

				//is in range
				if(distanceX < rangeMax && distanceY < rangeMax){

					//should move
					if((distanceX > rangeMin && distanceY > rangeMin) || (rangeShoot < distanceX || rangeShoot < distanceY))
					{
						gameObject.GetComponent<Enemy> ().isShooting = false;

	//						print(distanceX);
	//						print(distanceY);
						//check wich one is closer to move in that direction
						if((distanceX < distanceY && rangeShoot > distanceY) || distanceY < rangeMin){
							//move in x axis
							//check if left or right

							if(player.transform.position.x > transform.position.x)
							{
								//move right
								transform.Translate(Vector3.right * speed * Time.deltaTime);
								direction = 1;

							}
							if(player.transform.position.x < transform.position.x)
							{
								//move left
								transform.Translate(Vector3.left * speed * Time.deltaTime);
								direction = 3;


							}


						}else{
							//move in y axis
							//check if up or down

							if(player.transform.position.y > transform.position.y)
							{
								//move up
								transform.Translate(Vector3.up * speed * Time.deltaTime);
								direction = 0;

							}
							if(player.transform.position.y < transform.position.y)
							{
								//move down
								transform.Translate(Vector3.down * speed * Time.deltaTime);
								direction = 2;

							}
							

						}




						legAnimator.SetBool("IsRunning", true);
					}else{
					//should only look to player
						legAnimator.SetBool("IsRunning", false);


						if(distanceX < distanceY){
						//same x should check y
							if(player.transform.position.y > transform.position.y)
							{
								//look up
								direction = 0;
							}
							if(player.transform.position.y < transform.position.y)
							{
								//look down
								direction = 2;
							}
						}else{
							//same y should check x
							if(player.transform.position.x > transform.position.x)
							{
								//look right
								direction = 1;
							}
							if(player.transform.position.x < transform.position.x)
							{
								//look left
					 			direction = 3;
							}

						}

						gameObject.GetComponent<Enemy> ().isShooting = true;
						delay = 1;

					}
					gameObject.GetComponent<Enemy> ().shootDirection = direction;
					bothAnimator.SetInteger ("direction", direction);
					torsoAnimator.SetInteger ("Direction", direction);
					legAnimator.SetInteger ("Direction", direction);


				}


			
			}
			}else{

				legAnimator.SetBool("IsRunning", false);


			}


		}
	}

}
