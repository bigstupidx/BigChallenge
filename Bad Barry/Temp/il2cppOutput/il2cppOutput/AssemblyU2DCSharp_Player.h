#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t6_94;
// UnityEngine.Animator
struct Animator_t6_134;
// HUDGame
struct HUDGame_t8_35;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Player
struct  Player_t8_43  : public MonoBehaviour_t6_88
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
	GameObject_t6_94 * ___weapon_9;
	// UnityEngine.Animator Player::bothAnimator
	Animator_t6_134 * ___bothAnimator_10;
	// UnityEngine.Animator Player::torsoAnimator
	Animator_t6_134 * ___torsoAnimator_11;
	// UnityEngine.Animator Player::legAnimator
	Animator_t6_134 * ___legAnimator_12;
	// System.Boolean Player::dead
	bool ___dead_13;
	// System.Boolean Player::isShooting
	bool ___isShooting_14;
	// System.Single Player::fireRate
	float ___fireRate_15;
	// System.Single Player::time
	float ___time_16;
	// System.Single Player::experience
	float ___experience_17;
	// System.Single Player::neededExperience
	float ___neededExperience_18;
	// System.Int32 Player::lvl
	int32_t ___lvl_19;
	// HUDGame Player::hudGame
	HUDGame_t8_35 * ___hudGame_20;
	// UnityEngine.GameObject Player::HUD
	GameObject_t6_94 * ___HUD_21;
	// System.Int32 Player::strength
	int32_t ___strength_22;
	// System.Int32 Player::agility
	int32_t ___agility_23;
	// System.Int32 Player::inteligence
	int32_t ___inteligence_24;
	// System.Int32 Player::vitality
	int32_t ___vitality_25;
};
