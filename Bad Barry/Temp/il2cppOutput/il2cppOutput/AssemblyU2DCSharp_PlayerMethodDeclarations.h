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
struct Player_t97;
// UnityEngine.AudioSource
struct AudioSource_t11;
// System.Collections.IEnumerator
struct IEnumerator_t132;

#include "codegen/il2cpp-codegen.h"

// System.Void Player::.ctor()
extern "C" void Player__ctor_m429 (Player_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Start()
extern "C" void Player_Start_m430 (Player_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::FixedUpdate()
extern "C" void Player_FixedUpdate_m431 (Player_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Update()
extern "C" void Player_Update_m432 (Player_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::SkillClicked()
extern "C" void Player_SkillClicked_m433 (Player_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::ChangeWeapon(System.Int32)
extern "C" void Player_ChangeWeapon_m434 (Player_t97 * __this, int32_t ___weapon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::getBullet(System.Int32,System.Int32,System.Int32)
extern "C" void Player_getBullet_m435 (Player_t97 * __this, int32_t ___type, int32_t ___minBullets, int32_t ___maxBullets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Shoot()
extern "C" void Player_Shoot_m436 (Player_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Heal(System.Int32)
extern "C" void Player_Heal_m437 (Player_t97 * __this, int32_t ___heal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::TakeDamage(System.Int32)
extern "C" void Player_TakeDamage_m438 (Player_t97 * __this, int32_t ___damage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::IncrementXp(System.Single)
extern "C" void Player_IncrementXp_m439 (Player_t97 * __this, float ___receivedXp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::LevelUp()
extern "C" void Player_LevelUp_m440 (Player_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::PauseGoToMap(UnityEngine.AudioSource)
extern "C" void Player_PauseGoToMap_m441 (Player_t97 * __this, AudioSource_t11 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::PauseGoToScore(UnityEngine.AudioSource)
extern "C" void Player_PauseGoToScore_m442 (Player_t97 * __this, AudioSource_t11 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Win()
extern "C" void Player_Win_m443 (Player_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Player::WinCamera()
extern "C" Object_t * Player_WinCamera_m444 (Player_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Player::Die()
extern "C" Object_t * Player_Die_m445 (Player_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Move()
extern "C" void Player_Move_m446 (Player_t97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
