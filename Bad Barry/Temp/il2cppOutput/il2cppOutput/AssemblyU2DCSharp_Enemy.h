#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t39;
// UnityEngine.GameObject
struct GameObject_t40;
// UnityEngine.Animator
struct Animator_t41;
// UnityEngine.Transform
struct Transform_t37;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Enemy
struct  Enemy_t38  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject[] Enemy::bulletBox
	GameObjectU5BU5D_t39* ___bulletBox_2;
	// System.Int32 Enemy::life
	int32_t ___life_3;
	// System.Int32 Enemy::baseDamage
	int32_t ___baseDamage_4;
	// System.Int32 Enemy::shootDirection
	int32_t ___shootDirection_5;
	// UnityEngine.GameObject Enemy::weapon
	GameObject_t40 * ___weapon_6;
	// System.Int32 Enemy::selectedWeapon
	int32_t ___selectedWeapon_7;
	// System.Single Enemy::experience
	float ___experience_8;
	// UnityEngine.Animator Enemy::bothAnimator
	Animator_t41 * ___bothAnimator_9;
	// UnityEngine.Animator Enemy::torsoAnimator
	Animator_t41 * ___torsoAnimator_10;
	// UnityEngine.Animator Enemy::legAnimator
	Animator_t41 * ___legAnimator_11;
	// UnityEngine.Transform Enemy::score
	Transform_t37 * ___score_12;
	// System.Boolean Enemy::isShooting
	bool ___isShooting_13;
	// System.Boolean Enemy::dead
	bool ___dead_14;
	// System.Single Enemy::fireRate
	float ___fireRate_15;
	// System.Single Enemy::time
	float ___time_16;
};
