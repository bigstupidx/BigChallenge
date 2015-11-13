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

// HUDGame
struct HUDGame_t48;
// Player
struct Player_t62;

#include "codegen/il2cpp-codegen.h"

// System.Void HUDGame::.ctor()
extern "C" void HUDGame__ctor_m209 (HUDGame_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HUDGame::.cctor()
extern "C" void HUDGame__cctor_m210 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HUDGame::Start()
extern "C" void HUDGame_Start_m211 (HUDGame_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HUDGame::Update()
extern "C" void HUDGame_Update_m212 (HUDGame_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HUDGame::initLife(Player)
extern "C" void HUDGame_initLife_m213 (HUDGame_t48 * __this, Player_t62 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HUDGame::takeDamage(Player)
extern "C" void HUDGame_takeDamage_m214 (HUDGame_t48 * __this, Player_t62 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HUDGame::incrementXp(Player)
extern "C" void HUDGame_incrementXp_m215 (HUDGame_t48 * __this, Player_t62 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HUDGame::playerDead(Player)
extern "C" void HUDGame_playerDead_m216 (HUDGame_t48 * __this, Player_t62 * ___player, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HUDGame::showMenu()
extern "C" void HUDGame_showMenu_m217 (HUDGame_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HUDGame::levelUp()
extern "C" void HUDGame_levelUp_m218 (HUDGame_t48 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
