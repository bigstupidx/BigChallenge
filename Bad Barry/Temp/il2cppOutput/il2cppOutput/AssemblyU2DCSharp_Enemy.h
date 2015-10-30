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
struct Animator_t37;
// UnityEngine.Transform
struct Transform_t35;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Enemy
struct  Enemy_t36  : public MonoBehaviour_t2
{
	// System.Int32 Enemy::life
	int32_t ___life_2;
	// System.Int32 Enemy::baseDamage
	int32_t ___baseDamage_3;
	// System.Int32 Enemy::shootDirection
	int32_t ___shootDirection_4;
	// UnityEngine.GameObject Enemy::weapon
	GameObject_t3 * ___weapon_5;
	// UnityEngine.Animator Enemy::bothAnimator
	Animator_t37 * ___bothAnimator_6;
	// UnityEngine.Animator Enemy::torsoAnimator
	Animator_t37 * ___torsoAnimator_7;
	// UnityEngine.Animator Enemy::legAnimator
	Animator_t37 * ___legAnimator_8;
	// UnityEngine.Transform Enemy::score
	Transform_t35 * ___score_9;
	// System.Boolean Enemy::isShooting
	bool ___isShooting_10;
	// System.Boolean Enemy::dead
	bool ___dead_11;
	// System.Single Enemy::fireRate
	float ___fireRate_12;
	// System.Single Enemy::time
	float ___time_13;
};
