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
struct Weapon_t64;

#include "codegen/il2cpp-codegen.h"

// System.Void Weapon::.ctor()
extern "C" void Weapon__ctor_m299 (Weapon_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Weapon::Awake()
extern "C" void Weapon_Awake_m300 (Weapon_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Weapon::Update()
extern "C" void Weapon_Update_m301 (Weapon_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Weapon::Shoot(System.Int32,System.Int32)
extern "C" void Weapon_Shoot_m302 (Weapon_t64 * __this, int32_t ___direction, int32_t ___baseDamage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
