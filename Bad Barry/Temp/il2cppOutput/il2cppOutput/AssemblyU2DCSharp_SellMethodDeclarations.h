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

// Sell
struct Sell_t104;
// System.Collections.IEnumerator
struct IEnumerator_t132;
// System.String
struct String_t;
// UnityEngine.AudioSource
struct AudioSource_t11;

#include "codegen/il2cpp-codegen.h"

// System.Void Sell::.ctor()
extern "C" void Sell__ctor_m488 (Sell_t104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sell::Start()
extern "C" void Sell_Start_m489 (Sell_t104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sell::Update()
extern "C" void Sell_Update_m490 (Sell_t104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Sell::BlinkEndTutorial()
extern "C" Object_t * Sell_BlinkEndTutorial_m491 (Sell_t104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Sell::BlinkArrow()
extern "C" Object_t * Sell_BlinkArrow_m492 (Sell_t104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Sell::BlinkBackArrow()
extern "C" Object_t * Sell_BlinkBackArrow_m493 (Sell_t104 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Sell::ShowMessage(System.String)
extern "C" Object_t * Sell_ShowMessage_m494 (Sell_t104 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Sell::checkItemInInventory(System.Int32)
extern "C" bool Sell_checkItemInInventory_m495 (Sell_t104 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sell::onBuyButtonClicked(UnityEngine.AudioSource)
extern "C" void Sell_onBuyButtonClicked_m496 (Sell_t104 * __this, AudioSource_t11 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sell::goToMapScene(UnityEngine.AudioSource)
extern "C" void Sell_goToMapScene_m497 (Sell_t104 * __this, AudioSource_t11 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Sell::checkCoins(System.Int32)
extern "C" bool Sell_checkCoins_m498 (Sell_t104 * __this, int32_t ___coins, const MethodInfo* method) IL2CPP_METHOD_ATTR;
