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

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Player
struct  Player_t40  : public MonoBehaviour_t2
{
	// System.Int32 Player::life
	int32_t ___life_2;
	// System.Int32 Player::maxLife
	int32_t ___maxLife_3;
	// System.Int32 Player::armor
	int32_t ___armor_4;
	// System.Single Player::speed
	float ___speed_5;
	// System.Int32 Player::baseDamage
	int32_t ___baseDamage_6;
	// System.Int32 Player::direction
	int32_t ___direction_7;
	// System.Int32 Player::shootDirection
	int32_t ___shootDirection_8;
	// UnityEngine.GameObject Player::weapon
	GameObject_t3 * ___weapon_9;
	// UnityEngine.Animator Player::bothAnimator
	Animator_t37 * ___bothAnimator_10;
	// UnityEngine.Animator Player::torsoAnimator
	Animator_t37 * ___torsoAnimator_11;
	// UnityEngine.Animator Player::legAnimator
	Animator_t37 * ___legAnimator_12;
	// System.Boolean Player::dead
	bool ___dead_13;
	// System.Single Player::fireRate
	float ___fireRate_14;
	// System.Single Player::time
	float ___time_15;
};
