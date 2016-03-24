#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t13;
// UnityEngine.Animator
struct Animator_t54;
// HUDGame
struct HUDGame_t75;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "mscorlib_System_DateTime.h"

// Player
struct  Player_t113  : public MonoBehaviour_t2
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
	GameObject_t13 * ___weapon_9;
	// UnityEngine.Animator Player::bothAnimator
	Animator_t54 * ___bothAnimator_10;
	// UnityEngine.Animator Player::torsoAnimator
	Animator_t54 * ___torsoAnimator_11;
	// UnityEngine.Animator Player::legAnimator
	Animator_t54 * ___legAnimator_12;
	// System.Boolean Player::dead
	bool ___dead_13;
	// System.Boolean Player::isShooting
	bool ___isShooting_14;
	// System.Single Player::fireRate
	float ___fireRate_15;
	// System.Single Player::knifeRate
	float ___knifeRate_16;
	// System.Single Player::time
	float ___time_17;
	// System.Single Player::timeToKnife
	float ___timeToKnife_18;
	// System.Single Player::experience
	float ___experience_19;
	// System.Single Player::neededExperience
	float ___neededExperience_20;
	// System.Int32 Player::lvl
	int32_t ___lvl_21;
	// HUDGame Player::hudGame
	HUDGame_t75 * ___hudGame_22;
	// UnityEngine.GameObject Player::HUD
	GameObject_t13 * ___HUD_23;
	// System.Int32 Player::strength
	int32_t ___strength_24;
	// System.Int32 Player::agility
	int32_t ___agility_25;
	// System.Int32 Player::inteligence
	int32_t ___inteligence_26;
	// System.Int32 Player::vitality
	int32_t ___vitality_27;
	// UnityEngine.GameObject Player::knifeRange
	GameObject_t13 * ___knifeRange_28;
	// UnityEngine.GameObject Player::canvasDeath
	GameObject_t13 * ___canvasDeath_29;
	// UnityEngine.GameObject Player::infinityImage
	GameObject_t13 * ___infinityImage_30;
	// System.DateTime Player::lastDateTime
	DateTime_t63  ___lastDateTime_31;
	// System.Boolean Player::skillActivate
	bool ___skillActivate_32;
	// System.Single Player::timeToStopSkill
	float ___timeToStopSkill_33;
	// System.Single Player::reloadingTime
	float ___reloadingTime_34;
	// System.Single Player::skillTimer
	float ___skillTimer_35;
	// System.Boolean Player::reloading
	bool ___reloading_36;
	// System.Single Player::reloadingTimer
	float ___reloadingTimer_37;
	// System.DateTime Player::currentTime
	DateTime_t63  ___currentTime_38;
	// System.Single Player::extraTime
	float ___extraTime_39;
	// System.Int32 Player::mission
	int32_t ___mission_40;
};
