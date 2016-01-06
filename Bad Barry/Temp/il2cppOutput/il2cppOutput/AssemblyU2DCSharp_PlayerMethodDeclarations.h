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
struct Player_t75;
// System.Collections.IEnumerator
struct IEnumerator_t99;

#include "codegen/il2cpp-codegen.h"

// System.Void Player::.ctor()
extern "C" void Player__ctor_m311 (Player_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Start()
extern "C" void Player_Start_m312 (Player_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Update()
extern "C" void Player_Update_m313 (Player_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::ChangeWeapon(System.Int32)
extern "C" void Player_ChangeWeapon_m314 (Player_t75 * __this, int32_t ___weapon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Shoot()
extern "C" void Player_Shoot_m315 (Player_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Heal(System.Int32)
extern "C" void Player_Heal_m316 (Player_t75 * __this, int32_t ___heal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::TakeDamage(System.Int32)
extern "C" void Player_TakeDamage_m317 (Player_t75 * __this, int32_t ___damage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::IncrementXp(System.Single)
extern "C" void Player_IncrementXp_m318 (Player_t75 * __this, float ___receivedXp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::LevelUp()
extern "C" void Player_LevelUp_m319 (Player_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Player::Die()
extern "C" Object_t * Player_Die_m320 (Player_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Move()
extern "C" void Player_Move_m321 (Player_t75 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
