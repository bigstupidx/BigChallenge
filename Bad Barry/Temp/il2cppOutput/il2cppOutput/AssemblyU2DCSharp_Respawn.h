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

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Respawn
struct  Respawn_t41  : public MonoBehaviour_t2
{
	// System.Single Respawn::respawn_time
	float ___respawn_time_2;
	// System.Single Respawn::timer
	float ___timer_3;
	// UnityEngine.GameObject Respawn::inimigo
	GameObject_t3 * ___inimigo_4;
};
