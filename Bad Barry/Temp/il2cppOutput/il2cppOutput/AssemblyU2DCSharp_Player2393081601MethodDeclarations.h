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
struct Player_t2393081601;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AudioSource3628549054.h"

// System.Void Player::.ctor()
extern "C"  void Player__ctor_m871706298 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Start()
extern "C"  void Player_Start_m4113811386 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::FixedUpdate()
extern "C"  void Player_FixedUpdate_m1277925557 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Update()
extern "C"  void Player_Update_m2979953555 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::SkillClicked()
extern "C"  void Player_SkillClicked_m3469404512 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::ChangeWeapon(System.Int32)
extern "C"  void Player_ChangeWeapon_m4090260871 (Player_t2393081601 * __this, int32_t ___weapon, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::getBullet(System.Int32,System.Int32,System.Int32)
extern "C"  void Player_getBullet_m3028112865 (Player_t2393081601 * __this, int32_t ___type, int32_t ___minBullets, int32_t ___maxBullets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Shoot()
extern "C"  void Player_Shoot_m3783101495 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Heal(System.Int32)
extern "C"  void Player_Heal_m4294192515 (Player_t2393081601 * __this, int32_t ___heal, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::TakeDamage(System.Int32)
extern "C"  void Player_TakeDamage_m4108359473 (Player_t2393081601 * __this, int32_t ___damage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::IncrementXp(System.Single)
extern "C"  void Player_IncrementXp_m680780908 (Player_t2393081601 * __this, float ___receivedXp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::LevelUp()
extern "C"  void Player_LevelUp_m2477308823 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::PauseGoToMap(UnityEngine.AudioSource)
extern "C"  void Player_PauseGoToMap_m3486751115 (Player_t2393081601 * __this, AudioSource_t3628549054 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::PauseGoToScore(UnityEngine.AudioSource)
extern "C"  void Player_PauseGoToScore_m2490070293 (Player_t2393081601 * __this, AudioSource_t3628549054 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Win()
extern "C"  void Player_Win_m2059051636 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Player::WinCamera()
extern "C"  Il2CppObject * Player_WinCamera_m3278405361 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Player::Die()
extern "C"  Il2CppObject * Player_Die_m247445712 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Player::Move()
extern "C"  void Player_Move_m3420605147 (Player_t2393081601 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
