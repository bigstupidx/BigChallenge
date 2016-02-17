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

// Enemy
struct Enemy_t15;

#include "codegen/il2cpp-codegen.h"

// System.Void Enemy::.ctor()
extern "C" void Enemy__ctor_m222 (Enemy_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::Start()
extern "C" void Enemy_Start_m223 (Enemy_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::incrementLifeByLevel(System.Int32)
extern "C" void Enemy_incrementLifeByLevel_m224 (Enemy_t15 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::Update()
extern "C" void Enemy_Update_m225 (Enemy_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::TakeDamage(System.Int32)
extern "C" void Enemy_TakeDamage_m226 (Enemy_t15 * __this, int32_t ___damage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::Die()
extern "C" void Enemy_Die_m227 (Enemy_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Enemy::Shoot()
extern "C" void Enemy_Shoot_m228 (Enemy_t15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
