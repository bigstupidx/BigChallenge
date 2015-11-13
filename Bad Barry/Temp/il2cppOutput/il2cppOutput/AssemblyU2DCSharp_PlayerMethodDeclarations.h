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

// Player
struct Player_t62;
// System.Collections.IEnumerator
struct IEnumerator_t76;

#include "codegen/il2cpp-codegen.h"

// System.Void Player::.ctor()
extern "C" void Player__ctor_m284 (Player_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Start()
extern "C" void Player_Start_m285 (Player_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Update()
extern "C" void Player_Update_m286 (Player_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Shoot()
extern "C" void Player_Shoot_m287 (Player_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Heal(System.Int32)
extern "C" void Player_Heal_m288 (Player_t62 * __this, int32_t ___heal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::TakeDamage(System.Int32)
extern "C" void Player_TakeDamage_m289 (Player_t62 * __this, int32_t ___damage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::IncrementXp(System.Single)
extern "C" void Player_IncrementXp_m290 (Player_t62 * __this, float ___receivedXp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::LevelUp()
extern "C" void Player_LevelUp_m291 (Player_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Player::Die()
extern "C" Object_t * Player_Die_m292 (Player_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Move()
extern "C" void Player_Move_m293 (Player_t62 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
