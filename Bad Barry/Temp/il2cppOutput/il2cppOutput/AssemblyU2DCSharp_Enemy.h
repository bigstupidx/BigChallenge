#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t38;
// UnityEngine.Animator
struct Animator_t39;
// UnityEngine.Transform
struct Transform_t36;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Enemy
struct  Enemy_t37  : public MonoBehaviour_t2
{
	// System.Int32 Enemy::life
	int32_t ___life_2;
	// System.Int32 Enemy::baseDamage
	int32_t ___baseDamage_3;
	// System.Int32 Enemy::shootDirection
	int32_t ___shootDirection_4;
	// UnityEngine.GameObject Enemy::weapon
	GameObject_t38 * ___weapon_5;
	// System.Int32 Enemy::selectedWeapon
	int32_t ___selectedWeapon_6;
	// System.Single Enemy::experience
	float ___experience_7;
	// UnityEngine.Animator Enemy::bothAnimator
	Animator_t39 * ___bothAnimator_8;
	// UnityEngine.Animator Enemy::torsoAnimator
	Animator_t39 * ___torsoAnimator_9;
	// UnityEngine.Animator Enemy::legAnimator
	Animator_t39 * ___legAnimator_10;
	// UnityEngine.Transform Enemy::score
	Transform_t36 * ___score_11;
	// System.Boolean Enemy::isShooting
	bool ___isShooting_12;
	// System.Boolean Enemy::dead
	bool ___dead_13;
	// System.Single Enemy::fireRate
	float ___fireRate_14;
	// System.Single Enemy::time
	float ___time_15;
};
