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
struct GameBehavior_t1830462596;
// System.String
struct String_t;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.Collections.Generic.List`1<ItemData>
struct List_1_t2038637174;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_AudioSource3628549054.h"

// System.Void GameBehavior::.ctor()
extern "C"  void GameBehavior__ctor_m977543831 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::_ReportAchievement(System.String,System.Single)
extern "C"  void GameBehavior__ReportAchievement_m1786703454 (Il2CppObject * __this /* static, unused */, String_t* ___achievementID, float ___progress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::Start()
extern "C"  void GameBehavior_Start_m4219648919 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::ReportAchievement(System.String,System.Int32)
extern "C"  void GameBehavior_ReportAchievement_m4281152869 (GameBehavior_t1830462596 * __this, String_t* ___id, int32_t ___percentage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::ReportScore(System.Int64,System.String)
extern "C"  void GameBehavior_ReportScore_m605145793 (GameBehavior_t1830462596 * __this, int64_t ___score, String_t* ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::finishedHordeMode()
extern "C"  void GameBehavior_finishedHordeMode_m4265289746 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::Update()
extern "C"  void GameBehavior_Update_m1965949782 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::LevelCleared()
extern "C"  void GameBehavior_LevelCleared_m3602526549 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::incCoins(System.Int32)
extern "C"  void GameBehavior_incCoins_m2644017986 (GameBehavior_t1830462596 * __this, int32_t ___newCoins, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::IncrementCoinHorde()
extern "C"  void GameBehavior_IncrementCoinHorde_m321811225 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::incrementBullet(System.Int32,System.Int32,System.Int32)
extern "C"  void GameBehavior_incrementBullet_m2741972695 (GameBehavior_t1830462596 * __this, int32_t ___weaponType, int32_t ___maxBullets, int32_t ___minBullets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::LeveledUp(System.Int32)
extern "C"  void GameBehavior_LeveledUp_m2268476452 (GameBehavior_t1830462596 * __this, int32_t ___currentLvl, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToAtributesScreen(UnityEngine.AudioSource)
extern "C"  void GameBehavior_GoToAtributesScreen_m3341679317 (GameBehavior_t1830462596 * __this, AudioSource_t3628549054 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToInventoryScene(UnityEngine.AudioSource)
extern "C"  void GameBehavior_GoToInventoryScene_m1756258488 (GameBehavior_t1830462596 * __this, AudioSource_t3628549054 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToStatisticsScreen(UnityEngine.AudioSource)
extern "C"  void GameBehavior_GoToStatisticsScreen_m1938010745 (GameBehavior_t1830462596 * __this, AudioSource_t3628549054 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToStoreScene(UnityEngine.AudioSource)
extern "C"  void GameBehavior_GoToStoreScene_m2411825661 (GameBehavior_t1830462596 * __this, AudioSource_t3628549054 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToMap()
extern "C"  void GameBehavior_GoToMap_m1951200590 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToScore(UnityEngine.AudioSource)
extern "C"  void GameBehavior_GoToScore_m3842886260 (GameBehavior_t1830462596 * __this, AudioSource_t3628549054 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToMainWithSound(UnityEngine.AudioSource)
extern "C"  void GameBehavior_GoToMainWithSound_m3464194454 (GameBehavior_t1830462596 * __this, AudioSource_t3628549054 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToMapWithSound(UnityEngine.AudioSource)
extern "C"  void GameBehavior_GoToMapWithSound_m3118792251 (GameBehavior_t1830462596 * __this, AudioSource_t3628549054 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToCredits(UnityEngine.AudioSource)
extern "C"  void GameBehavior_GoToCredits_m2605555116 (GameBehavior_t1830462596 * __this, AudioSource_t3628549054 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToMissionInventory(UnityEngine.AudioSource,System.Int32)
extern "C"  void GameBehavior_GoToMissionInventory_m3002047487 (GameBehavior_t1830462596 * __this, AudioSource_t3628549054 * ___audio, int32_t ___missionNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToMission(UnityEngine.AudioSource,System.Int32)
extern "C"  void GameBehavior_GoToMission_m645897757 (GameBehavior_t1830462596 * __this, AudioSource_t3628549054 * ___audio, int32_t ___missionNumber, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::GoToLastScene()
extern "C"  void GameBehavior_GoToLastScene_m3680597064 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::Play()
extern "C"  void GameBehavior_Play_m319941121 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameBehavior::PlayAudio(UnityEngine.AudioSource,System.String)
extern "C"  Il2CppObject * GameBehavior_PlayAudio_m1136709221 (GameBehavior_t1830462596 * __this, AudioSource_t3628549054 * ___currentAudio, String_t* ___levelName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameBehavior::getStrength()
extern "C"  int32_t GameBehavior_getStrength_m2905178622 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameBehavior::getAgility()
extern "C"  int32_t GameBehavior_getAgility_m3149836170 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameBehavior::getInteligence()
extern "C"  int32_t GameBehavior_getInteligence_m2989478916 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameBehavior::getVitality()
extern "C"  int32_t GameBehavior_getVitality_m603011743 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<ItemData> GameBehavior::getInventoryItems()
extern "C"  List_1_t2038637174 * GameBehavior_getInventoryItems_m3779358719 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::setStrength(System.Int32)
extern "C"  void GameBehavior_setStrength_m4236508201 (GameBehavior_t1830462596 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::setAgility(System.Int32)
extern "C"  void GameBehavior_setAgility_m3033198785 (GameBehavior_t1830462596 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::setInteligence(System.Int32)
extern "C"  void GameBehavior_setInteligence_m2565557051 (GameBehavior_t1830462596 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::setVitality(System.Int32)
extern "C"  void GameBehavior_setVitality_m2917059402 (GameBehavior_t1830462596 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::setInventoryItems(System.Collections.Generic.List`1<ItemData>)
extern "C"  void GameBehavior_setInventoryItems_m3087714932 (GameBehavior_t1830462596 * __this, List_1_t2038637174 * ___items, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GameBehavior::getEarnedCoins()
extern "C"  int32_t GameBehavior_getEarnedCoins_m2350112656 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::incrementStrength()
extern "C"  void GameBehavior_incrementStrength_m1865662117 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::incrementAgility()
extern "C"  void GameBehavior_incrementAgility_m2562114051 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::incrementInteligence()
extern "C"  void GameBehavior_incrementInteligence_m1467482621 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::incrementVitality()
extern "C"  void GameBehavior_incrementVitality_m3858462534 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::ReportScoreDetailed(System.Int64,System.String)
extern "C"  void GameBehavior_ReportScoreDetailed_m3418200465 (GameBehavior_t1830462596 * __this, int64_t ___score, String_t* ___leaderboardID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::CheckWeaponAchievements()
extern "C"  void GameBehavior_CheckWeaponAchievements_m102421309 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::CheckAtributesAchievements()
extern "C"  void GameBehavior_CheckAtributesAchievements_m3607835054 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::CheckAmmoAchievements()
extern "C"  void GameBehavior_CheckAmmoAchievements_m704427887 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::CheckDeathAchievements()
extern "C"  void GameBehavior_CheckDeathAchievements_m1180457053 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::CheckCoinsAchievements()
extern "C"  void GameBehavior_CheckCoinsAchievements_m1052121451 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::CheckKnifeAchievements()
extern "C"  void GameBehavior_CheckKnifeAchievements_m4041770702 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::CheckHordeAchievements(System.Int32)
extern "C"  void GameBehavior_CheckHordeAchievements_m3261842374 (GameBehavior_t1830462596 * __this, int32_t ___wave, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::save()
extern "C"  void GameBehavior_save_m1312409066 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::load()
extern "C"  void GameBehavior_load_m1124307731 (GameBehavior_t1830462596 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::<Start>m__0(System.Boolean)
extern "C"  void GameBehavior_U3CStartU3Em__0_m227532743 (Il2CppObject * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::<finishedHordeMode>m__1(System.Boolean)
extern "C"  void GameBehavior_U3CfinishedHordeModeU3Em__1_m2617039725 (GameBehavior_t1830462596 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::<ReportScoreDetailed>m__2(System.Boolean)
extern "C"  void GameBehavior_U3CReportScoreDetailedU3Em__2_m2512038685 (Il2CppObject * __this /* static, unused */, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::<CheckWeaponAchievements>m__3(System.Boolean)
extern "C"  void GameBehavior_U3CCheckWeaponAchievementsU3Em__3_m2666984292 (GameBehavior_t1830462596 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::<CheckAtributesAchievements>m__4(System.Boolean)
extern "C"  void GameBehavior_U3CCheckAtributesAchievementsU3Em__4_m1751144460 (GameBehavior_t1830462596 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::<CheckAmmoAchievements>m__5(System.Boolean)
extern "C"  void GameBehavior_U3CCheckAmmoAchievementsU3Em__5_m422376180 (GameBehavior_t1830462596 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::<CheckDeathAchievements>m__6(System.Boolean)
extern "C"  void GameBehavior_U3CCheckDeathAchievementsU3Em__6_m1492756223 (GameBehavior_t1830462596 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::<CheckCoinsAchievements>m__7(System.Boolean)
extern "C"  void GameBehavior_U3CCheckCoinsAchievementsU3Em__7_m3860978994 (GameBehavior_t1830462596 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameBehavior::<CheckKnifeAchievements>m__8(System.Boolean)
extern "C"  void GameBehavior_U3CCheckKnifeAchievementsU3Em__8_m2671121648 (GameBehavior_t1830462596 * __this, bool ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
