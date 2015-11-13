#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3;
// UnityEngine.Animator
struct Animator_t34;
// UnityEngine.Transform
struct Transform_t44;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Enemy
struct  Enemy_t45  : public MonoBehaviour_t2
{
	// System.Int32 Enemy::life
	int32_t ___life_2;
	// System.Int32 Enemy::baseDamage
	int32_t ___baseDamage_3;
	// System.Int32 Enemy::shootDirection
	int32_t ___shootDirection_4;
	// UnityEngine.GameObject Enemy::weapon
	GameObject_t3 * ___weapon_5;
	// System.Single Enemy::experience
	float ___experience_6;
	// UnityEngine.Animator Enemy::bothAnimator
	Animator_t34 * ___bothAnimator_7;
	// UnityEngine.Animator Enemy::torsoAnimator
	Animator_t34 * ___torsoAnimator_8;
	// UnityEngine.Animator Enemy::legAnimator
	Animator_t34 * ___legAnimator_9;
	// UnityEngine.Transform Enemy::score
	Transform_t44 * ___score_10;
	// System.Boolean Enemy::isShooting
	bool ___isShooting_11;
	// System.Boolean Enemy::dead
	bool ___dead_12;
	// System.Single Enemy::fireRate
	float ___fireRate_13;
	// System.Single Enemy::time
	float ___time_14;
};
