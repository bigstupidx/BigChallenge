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

// BulletScript
struct  BulletScript_t42  : public MonoBehaviour_t2
{
	// System.Single BulletScript::speed
	float ___speed_2;
	// System.Int32 BulletScript::maxDamage
	int32_t ___maxDamage_3;
	// System.Int32 BulletScript::minDamage
	int32_t ___minDamage_4;
	// System.Int32 BulletScript::baseDamage
	int32_t ___baseDamage_5;
	// System.Int32 BulletScript::direction
	int32_t ___direction_6;
	// UnityEngine.GameObject BulletScript::origin
	GameObject_t3 * ___origin_7;
};
