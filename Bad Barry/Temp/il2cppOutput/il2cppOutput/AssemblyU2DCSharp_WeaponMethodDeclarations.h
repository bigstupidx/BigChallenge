#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Weapon
struct Weapon_t116;

#include "codegen/il2cpp-codegen.h"

// System.Void Weapon::.ctor()
extern "C" void Weapon__ctor_m544 (Weapon_t116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Weapon::Awake()
extern "C" void Weapon_Awake_m545 (Weapon_t116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Weapon::Update()
extern "C" void Weapon_Update_m546 (Weapon_t116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Weapon::Shoot(System.Int32,System.Int32,System.Int32)
extern "C" void Weapon_Shoot_m547 (Weapon_t116 * __this, int32_t ___direction, int32_t ___baseDamage, int32_t ___weapon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Weapon::GunWithoutAmmo(System.Int32)
extern "C" void Weapon_GunWithoutAmmo_m548 (Weapon_t116 * __this, int32_t ___weapon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Weapon::UnlockingWeapon(System.Int32)
extern "C" void Weapon_UnlockingWeapon_m549 (Weapon_t116 * __this, int32_t ___weapon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Weapon::PlayKnifeSound()
extern "C" void Weapon_PlayKnifeSound_m550 (Weapon_t116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Weapon::PlayItemSound()
extern "C" void Weapon_PlayItemSound_m551 (Weapon_t116 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
