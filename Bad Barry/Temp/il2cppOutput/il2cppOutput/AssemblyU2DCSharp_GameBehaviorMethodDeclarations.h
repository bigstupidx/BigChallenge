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

// GameBehavior
struct GameBehavior_t12;
// System.String
struct String_t;
// UnityEngine.AudioSource
struct AudioSource_t24;
// System.Collections.IEnumerator
struct IEnumerator_t156;
// System.Collections.Generic.List`1<ItemData>
struct List_1_t69;

#include "codegen/il2cpp-codegen.h"

// System.Void GameBehavior::.ctor()
extern "C" void GameBehavior__ctor_m253 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::_ReportAchievement(System.String,System.Single)
extern "C" void GameBehavior__ReportAchievement_m254 (Object_t * __this /* static, unused */, String_t* ___achievementID, float ___progress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::Start()
extern "C" void GameBehavior_Start_m255 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::ReportAchievement(System.String,System.Int32)
extern "C" void GameBehavior_ReportAchievement_m256 (GameBehavior_t12 * __this, String_t* ___id, int32_t ___percentage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::ReportScore(System.Int64,System.String)
extern "C" void GameBehavior_ReportScore_m257 (GameBehavior_t12 * __this, int64_t ___score, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::finishedHordeMode()
extern "C" void GameBehavior_finishedHordeMode_m258 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::Update()
extern "C" void GameBehavior_Update_m259 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::LevelCleared()
extern "C" void GameBehavior_LevelCleared_m260 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::incCoins(System.Int32)
extern "C" void GameBehavior_incCoins_m261 (GameBehavior_t12 * __this, int32_t ___newCoins, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::IncrementCoinHorde()
extern "C" void GameBehavior_IncrementCoinHorde_m262 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::incrementBullet(System.Int32,System.Int32,System.Int32)
extern "C" void GameBehavior_incrementBullet_m263 (GameBehavior_t12 * __this, int32_t ___weaponType, int32_t ___maxBullets, int32_t ___minBullets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::LeveledUp(System.Int32)
extern "C" void GameBehavior_LeveledUp_m264 (GameBehavior_t12 * __this, int32_t ___currentLvl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToAtributesScreen(UnityEngine.AudioSource)
extern "C" void GameBehavior_GoToAtributesScreen_m265 (GameBehavior_t12 * __this, AudioSource_t24 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToInventoryScene(UnityEngine.AudioSource)
extern "C" void GameBehavior_GoToInventoryScene_m266 (GameBehavior_t12 * __this, AudioSource_t24 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToStatisticsScreen(UnityEngine.AudioSource)
extern "C" void GameBehavior_GoToStatisticsScreen_m267 (GameBehavior_t12 * __this, AudioSource_t24 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToStoreScene(UnityEngine.AudioSource)
extern "C" void GameBehavior_GoToStoreScene_m268 (GameBehavior_t12 * __this, AudioSource_t24 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToMap()
extern "C" void GameBehavior_GoToMap_m269 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToScore(UnityEngine.AudioSource)
extern "C" void GameBehavior_GoToScore_m270 (GameBehavior_t12 * __this, AudioSource_t24 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToMainWithSound(UnityEngine.AudioSource)
extern "C" void GameBehavior_GoToMainWithSound_m271 (GameBehavior_t12 * __this, AudioSource_t24 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToMapWithSound(UnityEngine.AudioSource)
extern "C" void GameBehavior_GoToMapWithSound_m272 (GameBehavior_t12 * __this, AudioSource_t24 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToCredits(UnityEngine.AudioSource)
extern "C" void GameBehavior_GoToCredits_m273 (GameBehavior_t12 * __this, AudioSource_t24 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToMissionInventory(UnityEngine.AudioSource,System.Int32)
extern "C" void GameBehavior_GoToMissionInventory_m274 (GameBehavior_t12 * __this, AudioSource_t24 * ___audio, int32_t ___missionNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToMission(UnityEngine.AudioSource,System.Int32)
extern "C" void GameBehavior_GoToMission_m275 (GameBehavior_t12 * __this, AudioSource_t24 * ___audio, int32_t ___missionNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToLastScene()
extern "C" void GameBehavior_GoToLastScene_m276 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::Play()
extern "C" void GameBehavior_Play_m277 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameBehavior::PlayAudio(UnityEngine.AudioSource,System.String)
extern "C" Object_t * GameBehavior_PlayAudio_m278 (GameBehavior_t12 * __this, AudioSource_t24 * ___currentAudio, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameBehavior::getStrength()
extern "C" int32_t GameBehavior_getStrength_m279 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameBehavior::getAgility()
extern "C" int32_t GameBehavior_getAgility_m280 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameBehavior::getInteligence()
extern "C" int32_t GameBehavior_getInteligence_m281 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameBehavior::getVitality()
extern "C" int32_t GameBehavior_getVitality_m282 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ItemData> GameBehavior::getInventoryItems()
extern "C" List_1_t69 * GameBehavior_getInventoryItems_m283 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::setStrength(System.Int32)
extern "C" void GameBehavior_setStrength_m284 (GameBehavior_t12 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::setAgility(System.Int32)
extern "C" void GameBehavior_setAgility_m285 (GameBehavior_t12 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::setInteligence(System.Int32)
extern "C" void GameBehavior_setInteligence_m286 (GameBehavior_t12 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::setVitality(System.Int32)
extern "C" void GameBehavior_setVitality_m287 (GameBehavior_t12 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::setInventoryItems(System.Collections.Generic.List`1<ItemData>)
extern "C" void GameBehavior_setInventoryItems_m288 (GameBehavior_t12 * __this, List_1_t69 * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameBehavior::getEarnedCoins()
extern "C" int32_t GameBehavior_getEarnedCoins_m289 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::incrementStrength()
extern "C" void GameBehavior_incrementStrength_m290 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::incrementAgility()
extern "C" void GameBehavior_incrementAgility_m291 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::incrementInteligence()
extern "C" void GameBehavior_incrementInteligence_m292 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::incrementVitality()
extern "C" void GameBehavior_incrementVitality_m293 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::ReportScoreDetailed(System.Int64,System.String)
extern "C" void GameBehavior_ReportScoreDetailed_m294 (GameBehavior_t12 * __this, int64_t ___score, String_t* ___leaderboardID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::CheckWeaponAchievements()
extern "C" void GameBehavior_CheckWeaponAchievements_m295 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::CheckAtributesAchievements()
extern "C" void GameBehavior_CheckAtributesAchievements_m296 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::CheckAmmoAchievements()
extern "C" void GameBehavior_CheckAmmoAchievements_m297 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::CheckDeathAchievements()
extern "C" void GameBehavior_CheckDeathAchievements_m298 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::CheckCoinsAchievements()
extern "C" void GameBehavior_CheckCoinsAchievements_m299 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::CheckKnifeAchievements()
extern "C" void GameBehavior_CheckKnifeAchievements_m300 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::CheckHordeAchievements(System.Int32)
extern "C" void GameBehavior_CheckHordeAchievements_m301 (GameBehavior_t12 * __this, int32_t ___wave, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::save()
extern "C" void GameBehavior_save_m302 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::load()
extern "C" void GameBehavior_load_m303 (GameBehavior_t12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::<Start>m__0(System.Boolean)
extern "C" void GameBehavior_U3CStartU3Em__0_m304 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::<finishedHordeMode>m__1(System.Boolean)
extern "C" void GameBehavior_U3CfinishedHordeModeU3Em__1_m305 (GameBehavior_t12 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::<ReportScoreDetailed>m__2(System.Boolean)
extern "C" void GameBehavior_U3CReportScoreDetailedU3Em__2_m306 (Object_t * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::<CheckWeaponAchievements>m__3(System.Boolean)
extern "C" void GameBehavior_U3CCheckWeaponAchievementsU3Em__3_m307 (GameBehavior_t12 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::<CheckAtributesAchievements>m__4(System.Boolean)
extern "C" void GameBehavior_U3CCheckAtributesAchievementsU3Em__4_m308 (GameBehavior_t12 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::<CheckAmmoAchievements>m__5(System.Boolean)
extern "C" void GameBehavior_U3CCheckAmmoAchievementsU3Em__5_m309 (GameBehavior_t12 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::<CheckDeathAchievements>m__6(System.Boolean)
extern "C" void GameBehavior_U3CCheckDeathAchievementsU3Em__6_m310 (GameBehavior_t12 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::<CheckCoinsAchievements>m__7(System.Boolean)
extern "C" void GameBehavior_U3CCheckCoinsAchievementsU3Em__7_m311 (GameBehavior_t12 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::<CheckKnifeAchievements>m__8(System.Boolean)
extern "C" void GameBehavior_U3CCheckKnifeAchievementsU3Em__8_m312 (GameBehavior_t12 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
