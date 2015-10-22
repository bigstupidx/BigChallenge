using UnityEngine;
using System.Collections;

public class FollowPlayer : MonoBehaviour {

	public	float speed;
	private  float rangeMin = 0; 
	public float rangeMax; 
	private Transform player;
	private float distance;
	
	//public Transform mytranform;
	//private Animator animator;
	//private float timer_search;
	//private float x_position = 3f;

	//distance error
	private float minError = 0.005f;
	private float maxError = 0.5f;


	public 
	void Awake ()
	{
		//finds player
		player = GameObject.FindGameObjectWithTag("Player").transform;
	}
	void Start(){
		//part of animation
		//animator = mytranform.GetComponent<Animator> ();
	}
	
	void Update (){

		//pega a distancia entre o player e o inimigo
		distance = Vector3.Distance(player.transform.position,transform.position);
		
		if (rangeMin < distance && distance < rangeMax) {
			
			float distanceY = Mathf.Abs(player.transform.position.y - transform.position.y);
			float distanceX = Mathf.Abs(player.transform.position.x - transform.position.x);

			if(distanceX < distanceY){

				//se alinha em Y com o personagem
				if(distanceY > maxError){

					if(player.transform.position.y < transform.position.y){

						//animacao personagem para baixo


						transform.Translate (Vector3.down * speed * Time.deltaTime);
					}else{

						//animacao personagem para cima

						transform.Translate (Vector3.up * speed * Time.deltaTime);
					}
					
				}else{
					
					
					//se alinha em X com personagem
					if(distanceX>minError){

						if(player.transform.position.x < transform.position.x){

							//animacao personagem para esquerda

							transform.Translate (Vector3.left * speed * Time.deltaTime);
						}else{

							//animacao personagem para direita

							transform.Translate (Vector3.right * speed * Time.deltaTime);
						}
					}
				}
			}else{
				//se alinha em X com personagem
				if(distanceX>maxError){
					if(player.transform.position.x < transform.position.x){

						//animacao personagem para esquerda

						transform.Translate (Vector3.left * speed * Time.deltaTime);
					}else{

						//animacao personagem para direita

						transform.Translate (Vector3.right * speed * Time.deltaTime);
					}
				}else{
					//se alinha em Y com o personagem
					if(distanceY > minError){
						
						if(player.transform.position.y < transform.position.y){

							//animacao personagem para baixo

							transform.Translate (Vector3.down * speed * Time.deltaTime);
						}else{

							//animacao personagem para cima

							transform.Translate (Vector3.up * speed * Time.deltaTime);
						}
						
					}

				}
			}
		
//		//fica patrulhando
//		if(distance > rangeMax) {
//			Vector3 nova = new Vector3();
//			nova.x = transform.position.x + x_position;
//			timer_search+=Time.deltaTime;
//			if(timer_search >= 2f)
//			{
//				x_position = x_position - 2*x_position;
//				timer_search = 0;
//			}
//			nova.y = transform.position.y;
//			nova.z = transform.position.z;
//			
//			if (nova.x < transform.position.x) {
//				
//				transform.Translate ((nova - transform.position) * speed * Time.deltaTime);
//				//animator.SetTrigger ("Run");
//
//			} else {
//				transform.position = Vector2.Lerp (transform.position, nova, speed * Time.deltaTime);
//				//animator.SetTrigger ("Run");
//			}
//			
		}
		
	}

}
