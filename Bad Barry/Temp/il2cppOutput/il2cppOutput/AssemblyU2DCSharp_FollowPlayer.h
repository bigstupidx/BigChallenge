﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t44;
// UnityEngine.Animator
struct Animator_t34;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// FollowPlayer
struct  FollowPlayer_t46  : public MonoBehaviour_t2
{
	// System.Single FollowPlayer::speed
	float ___speed_2;
	// System.Single FollowPlayer::rangeMin
	float ___rangeMin_3;
	// System.Single FollowPlayer::rangeMax
	float ___rangeMax_4;
	// System.Int32 FollowPlayer::direction
	int32_t ___direction_5;
	// UnityEngine.Transform FollowPlayer::player
	Transform_t44 * ___player_6;
	// UnityEngine.Animator FollowPlayer::bothAnimator
	Animator_t34 * ___bothAnimator_7;
	// UnityEngine.Animator FollowPlayer::torsoAnimator
	Animator_t34 * ___torsoAnimator_8;
	// UnityEngine.Animator FollowPlayer::legAnimator
	Animator_t34 * ___legAnimator_9;
	// System.Single FollowPlayer::delay
	float ___delay_10;
	// System.Single FollowPlayer::distanceY
	float ___distanceY_11;
	// System.Single FollowPlayer::distanceX
	float ___distanceX_12;
	// System.Single FollowPlayer::maxError
	float ___maxError_13;
};
