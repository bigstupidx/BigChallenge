#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t35;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Weapon
struct  Weapon_t43  : public MonoBehaviour_t2
{
	// System.Int32 Weapon::minDamage
	int32_t ___minDamage_2;
	// System.Int32 Weapon::maxDamage
	int32_t ___maxDamage_3;
	// System.Int32 Weapon::bulletSpeed
	int32_t ___bulletSpeed_4;
	// System.Single Weapon::fireRate
	float ___fireRate_5;
	// UnityEngine.Transform Weapon::firePoint
	Transform_t35 * ___firePoint_6;
	// UnityEngine.Transform Weapon::bulletPrefab
	Transform_t35 * ___bulletPrefab_7;
};
