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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t14;
// UnityEngine.GameObject
struct GameObject_t13;
// UnityEngine.Animator
struct Animator_t54;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Enemy
struct  Enemy_t7  : public MonoBehaviour_t2
{
	// System.Int32 Enemy::coinsWhenDie
	int32_t ___coinsWhenDie_2;
	// GameBehavior Enemy::behave
	GameBehavior_t4 * ___behave_3;
	// UnityEngine.GameObject[] Enemy::bulletBox
	GameObjectU5BU5D_t14* ___bulletBox_4;
	// System.Int32 Enemy::lvl
	int32_t ___lvl_5;
	// System.Int32 Enemy::life
	int32_t ___life_6;
	// System.Int32 Enemy::baseDamage
	int32_t ___baseDamage_7;
	// System.Int32 Enemy::shootDirection
	int32_t ___shootDirection_8;
	// UnityEngine.GameObject Enemy::weapon
	GameObject_t13 * ___weapon_9;
	// System.Int32 Enemy::selectedWeapon
	int32_t ___selectedWeapon_10;
	// System.Single Enemy::experience
	float ___experience_11;
	// UnityEngine.Animator Enemy::bothAnimator
	Animator_t54 * ___bothAnimator_12;
	// UnityEngine.Animator Enemy::torsoAnimator
	Animator_t54 * ___torsoAnimator_13;
	// UnityEngine.Animator Enemy::legAnimator
	Animator_t54 * ___legAnimator_14;
	// System.Boolean Enemy::isShooting
	bool ___isShooting_15;
	// System.Boolean Enemy::dead
	bool ___dead_16;
	// System.Single Enemy::fireRate
	float ___fireRate_17;
	// System.Single Enemy::time
	float ___time_18;
};
