using UnityEngine;
using System.Collections;
using UnityEngine.UI;

//Classe recebe do behavior total de inimigos, inimigos mortos e quantidade de moedas ganhas
public class Score : MonoBehaviour {


	GameBehavior behave;
	public Text totalEnimies;
	public Text enemiesKilled;
	public Text coinsEarned;
	public AudioSource audioCoin;


	public GameObject heads;
	public Image enemyImage;

	private GridLayoutGroup headsGrid;
	
	private int coinsPerEnemy;
	private float incrementTime = 0.1f;
	private float timer;
	private bool startCounter;
	private int incrementEnemies;
	private int incrementCoins;
	private float maxSize;
	private float maxCollumn;
	private float amountCollumn;

	void Start () {

		this.behave = GameObject.FindGameObjectWithTag("Behaviour").GetComponent<GameBehavior>();

		RectTransform headRect = heads.GetComponent<RectTransform> ();
		maxSize = headRect.rect.height;
		maxCollumn = 6;
		amountCollumn = Mathf.Floor(behave.enemiesKilled / 11) + 1;
		if (amountCollumn > maxCollumn)
			amountCollumn = maxCollumn;


		float imageSize;
		if (behave.enemiesKilled == 0) {
			this.coinsPerEnemy = 0;
			imageSize = 0;
		} else {

			imageSize = (headRect.rect.width / behave.enemiesKilled) * amountCollumn; //define tamanho de cada imagem sendo: area_total/total_de_inimigos
			if(imageSize > maxSize)
				imageSize = maxSize;
			this.coinsPerEnemy = (behave.getEarnedCoins () / behave.enemiesKilled);
		}


		headsGrid = heads.GetComponent<GridLayoutGroup> ();
		headsGrid.cellSize = new Vector2(imageSize,imageSize);

		if (behave.totalEnemies == 0)
			this.totalEnimies.text = "∞";
		else
			this.totalEnimies.text = behave.totalEnemies.ToString ();


		if (this.coinsPerEnemy < 1)
			coinsPerEnemy = 1;

		this.startIncrementCoins ();


	}

	void Update(){
		if (this.startCounter) {
			if(timer>=incrementTime){
				if(this.incrementEnemies<behave.enemiesKilled){ 
					this.incrementEnemies ++;
					this.enemiesKilled.text = this.incrementEnemies.ToString();
					this.incrementCoins += this.coinsPerEnemy;
					this.coinsEarned.text = this.incrementCoins.ToString();


					//instanciar cabeca de inimigo;
					var imageAux = GameBehavior.Instantiate(enemyImage);
					imageAux.transform.SetParent(heads.transform);
					audioCoin.Play();

					timer = 0;
				}else{
					this.startCounter = false;
					this.coinsEarned.text = behave.getEarnedCoins().ToString();
				}
			}else{
				timer += Time.deltaTime; 
			}

		}
	}

	public void startIncrementCoins(){
		timer = 0;
		incrementCoins = 0;
		this.startCounter = true;
	}

	public void goToMap(AudioSource audio){
		behave.LevelCleared ();
		behave.GoToMapWithSound (audio);
	}
	

}
