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
struct Sell_t125;
// System.Collections.IEnumerator
struct IEnumerator_t156;
// System.String
struct String_t;
// UnityEngine.AudioSource
struct AudioSource_t24;

#include "codegen/il2cpp-codegen.h"

// System.Void Sell::.ctor()
extern "C" void Sell__ctor_m570 (Sell_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sell::.cctor()
extern "C" void Sell__cctor_m571 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sell::Start()
extern "C" void Sell_Start_m572 (Sell_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sell::Update()
extern "C" void Sell_Update_m573 (Sell_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Sell::BlinkEndTutorial()
extern "C" Object_t * Sell_BlinkEndTutorial_m574 (Sell_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Sell::BlinkArrow()
extern "C" Object_t * Sell_BlinkArrow_m575 (Sell_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Sell::BlinkBackArrow()
extern "C" Object_t * Sell_BlinkBackArrow_m576 (Sell_t125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Sell::ShowMessage(System.String)
extern "C" Object_t * Sell_ShowMessage_m577 (Sell_t125 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Sell::checkItemInInventory(System.Int32)
extern "C" bool Sell_checkItemInInventory_m578 (Sell_t125 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sell::onBuyButtonClicked(UnityEngine.AudioSource)
extern "C" void Sell_onBuyButtonClicked_m579 (Sell_t125 * __this, AudioSource_t24 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sell::goToMapScene(UnityEngine.AudioSource)
extern "C" void Sell_goToMapScene_m580 (Sell_t125 * __this, AudioSource_t24 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Sell::checkCoins(System.Int32)
extern "C" bool Sell_checkCoins_m581 (Sell_t125 * __this, int32_t ___coins, const MethodInfo* method) IL2CPP_METHOD_ATTR;
