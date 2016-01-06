#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t43;
// UnityEngine.Transform
struct Transform_t36;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Weapon
struct  Weapon_t85  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject[] Weapon::weapons
	GameObjectU5BU5D_t43* ___weapons_2;
	// UnityEngine.Transform Weapon::firePoint
	Transform_t36 * ___firePoint_3;
	// UnityEngine.Transform Weapon::bulletPrefab
	Transform_t36 * ___bulletPrefab_4;
};
