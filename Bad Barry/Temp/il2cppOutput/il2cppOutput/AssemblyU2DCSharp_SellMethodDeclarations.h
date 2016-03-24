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
struct Sell_t119;
// System.Collections.IEnumerator
struct IEnumerator_t150;
// System.String
struct String_t;
// UnityEngine.AudioSource
struct AudioSource_t16;

#include "codegen/il2cpp-codegen.h"

// System.Void Sell::.ctor()
extern "C" void Sell__ctor_m545 (Sell_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sell::.cctor()
extern "C" void Sell__cctor_m546 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sell::Start()
extern "C" void Sell_Start_m547 (Sell_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sell::Update()
extern "C" void Sell_Update_m548 (Sell_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Sell::BlinkEndTutorial()
extern "C" Object_t * Sell_BlinkEndTutorial_m549 (Sell_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Sell::BlinkArrow()
extern "C" Object_t * Sell_BlinkArrow_m550 (Sell_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Sell::BlinkBackArrow()
extern "C" Object_t * Sell_BlinkBackArrow_m551 (Sell_t119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Sell::ShowMessage(System.String)
extern "C" Object_t * Sell_ShowMessage_m552 (Sell_t119 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Sell::checkItemInInventory(System.Int32)
extern "C" bool Sell_checkItemInInventory_m553 (Sell_t119 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sell::onBuyButtonClicked(UnityEngine.AudioSource)
extern "C" void Sell_onBuyButtonClicked_m554 (Sell_t119 * __this, AudioSource_t16 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sell::goToMapScene(UnityEngine.AudioSource)
extern "C" void Sell_goToMapScene_m555 (Sell_t119 * __this, AudioSource_t16 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Sell::checkCoins(System.Int32)
extern "C" bool Sell_checkCoins_m556 (Sell_t119 * __this, int32_t ___coins, const MethodInfo* method) IL2CPP_METHOD_ATTR;
