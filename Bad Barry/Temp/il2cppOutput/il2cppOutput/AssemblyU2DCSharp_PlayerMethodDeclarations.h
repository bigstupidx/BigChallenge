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
struct Player_t40;
// System.Collections.IEnumerator
struct IEnumerator_t55;

#include "codegen/il2cpp-codegen.h"

// System.Void Player::.ctor()
extern "C" void Player__ctor_m166 (Player_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Start()
extern "C" void Player_Start_m167 (Player_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Update()
extern "C" void Player_Update_m168 (Player_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Shoot()
extern "C" void Player_Shoot_m169 (Player_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Heal(System.Int32)
extern "C" void Player_Heal_m170 (Player_t40 * __this, int32_t ___heal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::TakeDamage(System.Int32)
extern "C" void Player_TakeDamage_m171 (Player_t40 * __this, int32_t ___damage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Player::Die()
extern "C" Object_t * Player_Die_m172 (Player_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Move()
extern "C" void Player_Move_m173 (Player_t40 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
