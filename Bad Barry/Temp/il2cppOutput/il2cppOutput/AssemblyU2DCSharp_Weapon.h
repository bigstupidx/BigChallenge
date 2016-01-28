#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t9;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t117;
// UnityEngine.AudioSource
struct AudioSource_t11;
// UnityEngine.Transform
struct Transform_t47;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Weapon
struct  Weapon_t116  : public MonoBehaviour_t2
{
	// UnityEngine.GameObject[] Weapon::weapons
	GameObjectU5BU5D_t9* ___weapons_2;
	// UnityEngine.AudioSource[] Weapon::weaponsSounds
	AudioSourceU5BU5D_t117* ___weaponsSounds_3;
	// UnityEngine.AudioSource[] Weapon::weaponsWithoutAmmo
	AudioSourceU5BU5D_t117* ___weaponsWithoutAmmo_4;
	// UnityEngine.AudioSource[] Weapon::weaponsUnlocking
	AudioSourceU5BU5D_t117* ___weaponsUnlocking_5;
	// UnityEngine.AudioSource Weapon::consumableItem
	AudioSource_t11 * ___consumableItem_6;
	// UnityEngine.AudioSource Weapon::knifeSound
	AudioSource_t11 * ___knifeSound_7;
	// UnityEngine.Transform Weapon::firePoint
	Transform_t47 * ___firePoint_8;
	// UnityEngine.Transform Weapon::bulletPrefab
	Transform_t47 * ___bulletPrefab_9;
};
