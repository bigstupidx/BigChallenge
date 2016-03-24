#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3499186955;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t224472971;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// UnityEngine.Transform
struct Transform_t284553113;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Weapon
struct  Weapon_t2587012668  : public MonoBehaviour_t3012272455
{
public:
	// UnityEngine.GameObject[] Weapon::weapons
	GameObjectU5BU5D_t3499186955* ___weapons_2;
	// UnityEngine.AudioSource[] Weapon::weaponsSounds
	AudioSourceU5BU5D_t224472971* ___weaponsSounds_3;
	// UnityEngine.AudioSource[] Weapon::weaponsWithoutAmmo
	AudioSourceU5BU5D_t224472971* ___weaponsWithoutAmmo_4;
	// UnityEngine.AudioSource[] Weapon::weaponsUnlocking
	AudioSourceU5BU5D_t224472971* ___weaponsUnlocking_5;
	// UnityEngine.AudioSource Weapon::consumableItem
	AudioSource_t3628549054 * ___consumableItem_6;
	// UnityEngine.AudioSource Weapon::knifeSound
	AudioSource_t3628549054 * ___knifeSound_7;
	// UnityEngine.Transform Weapon::firePoint
	Transform_t284553113 * ___firePoint_8;
	// UnityEngine.Transform Weapon::bulletPrefab
	Transform_t284553113 * ___bulletPrefab_9;

public:
	inline static int32_t get_offset_of_weapons_2() { return static_cast<int32_t>(offsetof(Weapon_t2587012668, ___weapons_2)); }
	inline GameObjectU5BU5D_t3499186955* get_weapons_2() const { return ___weapons_2; }
	inline GameObjectU5BU5D_t3499186955** get_address_of_weapons_2() { return &___weapons_2; }
	inline void set_weapons_2(GameObjectU5BU5D_t3499186955* value)
	{
		___weapons_2 = value;
		Il2CppCodeGenWriteBarrier(&___weapons_2, value);
	}

	inline static int32_t get_offset_of_weaponsSounds_3() { return static_cast<int32_t>(offsetof(Weapon_t2587012668, ___weaponsSounds_3)); }
	inline AudioSourceU5BU5D_t224472971* get_weaponsSounds_3() const { return ___weaponsSounds_3; }
	inline AudioSourceU5BU5D_t224472971** get_address_of_weaponsSounds_3() { return &___weaponsSounds_3; }
	inline void set_weaponsSounds_3(AudioSourceU5BU5D_t224472971* value)
	{
		___weaponsSounds_3 = value;
		Il2CppCodeGenWriteBarrier(&___weaponsSounds_3, value);
	}

	inline static int32_t get_offset_of_weaponsWithoutAmmo_4() { return static_cast<int32_t>(offsetof(Weapon_t2587012668, ___weaponsWithoutAmmo_4)); }
	inline AudioSourceU5BU5D_t224472971* get_weaponsWithoutAmmo_4() const { return ___weaponsWithoutAmmo_4; }
	inline AudioSourceU5BU5D_t224472971** get_address_of_weaponsWithoutAmmo_4() { return &___weaponsWithoutAmmo_4; }
	inline void set_weaponsWithoutAmmo_4(AudioSourceU5BU5D_t224472971* value)
	{
		___weaponsWithoutAmmo_4 = value;
		Il2CppCodeGenWriteBarrier(&___weaponsWithoutAmmo_4, value);
	}

	inline static int32_t get_offset_of_weaponsUnlocking_5() { return static_cast<int32_t>(offsetof(Weapon_t2587012668, ___weaponsUnlocking_5)); }
	inline AudioSourceU5BU5D_t224472971* get_weaponsUnlocking_5() const { return ___weaponsUnlocking_5; }
	inline AudioSourceU5BU5D_t224472971** get_address_of_weaponsUnlocking_5() { return &___weaponsUnlocking_5; }
	inline void set_weaponsUnlocking_5(AudioSourceU5BU5D_t224472971* value)
	{
		___weaponsUnlocking_5 = value;
		Il2CppCodeGenWriteBarrier(&___weaponsUnlocking_5, value);
	}

	inline static int32_t get_offset_of_consumableItem_6() { return static_cast<int32_t>(offsetof(Weapon_t2587012668, ___consumableItem_6)); }
	inline AudioSource_t3628549054 * get_consumableItem_6() const { return ___consumableItem_6; }
	inline AudioSource_t3628549054 ** get_address_of_consumableItem_6() { return &___consumableItem_6; }
	inline void set_consumableItem_6(AudioSource_t3628549054 * value)
	{
		___consumableItem_6 = value;
		Il2CppCodeGenWriteBarrier(&___consumableItem_6, value);
	}

	inline static int32_t get_offset_of_knifeSound_7() { return static_cast<int32_t>(offsetof(Weapon_t2587012668, ___knifeSound_7)); }
	inline AudioSource_t3628549054 * get_knifeSound_7() const { return ___knifeSound_7; }
	inline AudioSource_t3628549054 ** get_address_of_knifeSound_7() { return &___knifeSound_7; }
	inline void set_knifeSound_7(AudioSource_t3628549054 * value)
	{
		___knifeSound_7 = value;
		Il2CppCodeGenWriteBarrier(&___knifeSound_7, value);
	}

	inline static int32_t get_offset_of_firePoint_8() { return static_cast<int32_t>(offsetof(Weapon_t2587012668, ___firePoint_8)); }
	inline Transform_t284553113 * get_firePoint_8() const { return ___firePoint_8; }
	inline Transform_t284553113 ** get_address_of_firePoint_8() { return &___firePoint_8; }
	inline void set_firePoint_8(Transform_t284553113 * value)
	{
		___firePoint_8 = value;
		Il2CppCodeGenWriteBarrier(&___firePoint_8, value);
	}

	inline static int32_t get_offset_of_bulletPrefab_9() { return static_cast<int32_t>(offsetof(Weapon_t2587012668, ___bulletPrefab_9)); }
	inline Transform_t284553113 * get_bulletPrefab_9() const { return ___bulletPrefab_9; }
	inline Transform_t284553113 ** get_address_of_bulletPrefab_9() { return &___bulletPrefab_9; }
	inline void set_bulletPrefab_9(Transform_t284553113 * value)
	{
		___bulletPrefab_9 = value;
		Il2CppCodeGenWriteBarrier(&___bulletPrefab_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
