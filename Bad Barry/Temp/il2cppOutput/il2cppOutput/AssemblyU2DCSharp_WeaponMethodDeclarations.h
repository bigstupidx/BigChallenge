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
struct Weapon_t85;

#include "codegen/il2cpp-codegen.h"

// System.Void Weapon::.ctor()
extern "C" void Weapon__ctor_m361 (Weapon_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Weapon::Awake()
extern "C" void Weapon_Awake_m362 (Weapon_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Weapon::Update()
extern "C" void Weapon_Update_m363 (Weapon_t85 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Weapon::Shoot(System.Int32,System.Int32,System.Int32)
extern "C" void Weapon_Shoot_m364 (Weapon_t85 * __this, int32_t ___direction, int32_t ___baseDamage, int32_t ___weapon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
