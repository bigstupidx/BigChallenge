#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameBehavior
struct GameBehavior_t3;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t9;
// UnityEngine.GameObject
struct GameObject_t8;
// UnityEngine.Animator
struct Animator_t49;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Enemy
struct  Enemy_t48  : public MonoBehaviour_t2
{
	// System.Int32 Enemy::coinsWhenDie
	int32_t ___coinsWhenDie_2;
	// GameBehavior Enemy::behave
	GameBehavior_t3 * ___behave_3;
	// UnityEngine.GameObject[] Enemy::bulletBox
	GameObjectU5BU5D_t9* ___bulletBox_4;
	// System.Int32 Enemy::life
	int32_t ___life_5;
	// System.Int32 Enemy::baseDamage
	int32_t ___baseDamage_6;
	// System.Int32 Enemy::shootDirection
	int32_t ___shootDirection_7;
	// UnityEngine.GameObject Enemy::weapon
	GameObject_t8 * ___weapon_8;
	// System.Int32 Enemy::selectedWeapon
	int32_t ___selectedWeapon_9;
	// System.Single Enemy::experience
	float ___experience_10;
	// UnityEngine.Animator Enemy::bothAnimator
	Animator_t49 * ___bothAnimator_11;
	// UnityEngine.Animator Enemy::torsoAnimator
	Animator_t49 * ___torsoAnimator_12;
	// UnityEngine.Animator Enemy::legAnimator
	Animator_t49 * ___legAnimator_13;
	// System.Boolean Enemy::isShooting
	bool ___isShooting_14;
	// System.Boolean Enemy::dead
	bool ___dead_15;
	// System.Single Enemy::fireRate
	float ___fireRate_16;
	// System.Single Enemy::time
	float ___time_17;
};
