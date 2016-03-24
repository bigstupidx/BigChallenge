#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameBehavior
struct GameBehavior_t4;
// UnityEngine.UI.Text
struct Text_t11;
// UnityEngine.AudioSource
struct AudioSource_t16;
// UnityEngine.GameObject
struct GameObject_t13;
// UnityEngine.UI.Image
struct Image_t39;
// UnityEngine.UI.GridLayoutGroup
struct GridLayoutGroup_t69;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Score
struct  Score_t68  : public MonoBehaviour_t2
{
	// GameBehavior Score::behave
	GameBehavior_t4 * ___behave_2;
	// UnityEngine.UI.Text Score::totalEnimies
	Text_t11 * ___totalEnimies_3;
	// UnityEngine.UI.Text Score::enemiesKilled
	Text_t11 * ___enemiesKilled_4;
	// UnityEngine.UI.Text Score::coinsEarned
	Text_t11 * ___coinsEarned_5;
	// UnityEngine.AudioSource Score::audioCoin
	AudioSource_t16 * ___audioCoin_6;
	// UnityEngine.GameObject Score::heads
	GameObject_t13 * ___heads_7;
	// UnityEngine.UI.Image Score::enemyImage
	Image_t39 * ___enemyImage_8;
	// UnityEngine.UI.GridLayoutGroup Score::headsGrid
	GridLayoutGroup_t69 * ___headsGrid_9;
	// System.Int32 Score::coinsPerEnemy
	int32_t ___coinsPerEnemy_10;
	// System.Single Score::incrementTime
	float ___incrementTime_11;
	// System.Single Score::timer
	float ___timer_12;
	// System.Boolean Score::startCounter
	bool ___startCounter_13;
	// System.Int32 Score::incrementEnemies
	int32_t ___incrementEnemies_14;
	// System.Int32 Score::incrementCoins
	int32_t ___incrementCoins_15;
	// System.Single Score::maxSize
	float ___maxSize_16;
	// System.Single Score::maxCollumn
	float ___maxCollumn_17;
	// System.Single Score::amountCollumn
	float ___amountCollumn_18;
};
