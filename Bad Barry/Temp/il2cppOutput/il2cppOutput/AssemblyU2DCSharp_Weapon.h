#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t6_66;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Weapon
struct  Weapon_t8_45  : public MonoBehaviour_t6_88
{
	// System.Int32 Weapon::minDamage
	int32_t ___minDamage_2;
	// System.Int32 Weapon::maxDamage
	int32_t ___maxDamage_3;
	// System.Int32 Weapon::bulletSpeed
	int32_t ___bulletSpeed_4;
	// System.Single Weapon::fireRate
	float ___fireRate_5;
	// System.Single Weapon::xValueUp
	float ___xValueUp_6;
	// System.Single Weapon::yValueUp
	float ___yValueUp_7;
	// System.Single Weapon::xValueRight
	float ___xValueRight_8;
	// System.Single Weapon::yValueRight
	float ___yValueRight_9;
	// System.Single Weapon::xValueLeft
	float ___xValueLeft_10;
	// System.Single Weapon::yValueLeft
	float ___yValueLeft_11;
	// System.Single Weapon::xValueDown
	float ___xValueDown_12;
	// System.Single Weapon::yValueDown
	float ___yValueDown_13;
	// UnityEngine.Transform Weapon::firePoint
	Transform_t6_66 * ___firePoint_14;
	// UnityEngine.Transform Weapon::bulletPrefab
	Transform_t6_66 * ___bulletPrefab_15;
};
