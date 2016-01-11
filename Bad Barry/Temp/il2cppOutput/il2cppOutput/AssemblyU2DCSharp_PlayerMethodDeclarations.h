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
struct Player_t80;
// System.Collections.IEnumerator
struct IEnumerator_t109;

#include "codegen/il2cpp-codegen.h"

// System.Void Player::.ctor()
extern "C" void Player__ctor_m326 (Player_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Start()
extern "C" void Player_Start_m327 (Player_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Update()
extern "C" void Player_Update_m328 (Player_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::ChangeWeapon(System.Int32)
extern "C" void Player_ChangeWeapon_m329 (Player_t80 * __this, int32_t ___weapon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::getBullet(System.Int32,System.Int32,System.Int32)
extern "C" void Player_getBullet_m330 (Player_t80 * __this, int32_t ___type, int32_t ___minBullets, int32_t ___maxBullets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Shoot()
extern "C" void Player_Shoot_m331 (Player_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Heal(System.Int32)
extern "C" void Player_Heal_m332 (Player_t80 * __this, int32_t ___heal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::TakeDamage(System.Int32)
extern "C" void Player_TakeDamage_m333 (Player_t80 * __this, int32_t ___damage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::IncrementXp(System.Single)
extern "C" void Player_IncrementXp_m334 (Player_t80 * __this, float ___receivedXp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::LevelUp()
extern "C" void Player_LevelUp_m335 (Player_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Player::Die()
extern "C" Object_t * Player_Die_m336 (Player_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Move()
extern "C" void Player_Move_m337 (Player_t80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
