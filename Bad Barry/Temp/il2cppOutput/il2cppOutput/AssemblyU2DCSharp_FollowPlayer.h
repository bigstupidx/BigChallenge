#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t47;
// UnityEngine.Animator
struct Animator_t49;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// FollowPlayer
struct  FollowPlayer_t50  : public MonoBehaviour_t2
{
	// System.Boolean FollowPlayer::active
	bool ___active_2;
	// System.Single FollowPlayer::speed
	float ___speed_3;
	// System.Single FollowPlayer::rangeMin
	float ___rangeMin_4;
	// System.Single FollowPlayer::rangeMax
	float ___rangeMax_5;
	// System.Int32 FollowPlayer::direction
	int32_t ___direction_6;
	// UnityEngine.Transform FollowPlayer::player
	Transform_t47 * ___player_7;
	// UnityEngine.Animator FollowPlayer::bothAnimator
	Animator_t49 * ___bothAnimator_8;
	// UnityEngine.Animator FollowPlayer::torsoAnimator
	Animator_t49 * ___torsoAnimator_9;
	// UnityEngine.Animator FollowPlayer::legAnimator
	Animator_t49 * ___legAnimator_10;
	// System.Single FollowPlayer::delay
	float ___delay_11;
	// System.Single FollowPlayer::distanceY
	float ___distanceY_12;
	// System.Single FollowPlayer::distanceX
	float ___distanceX_13;
	// System.Single FollowPlayer::rangeShoot
	float ___rangeShoot_14;
};
