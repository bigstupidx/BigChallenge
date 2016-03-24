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
struct Sell_t2573170;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// System.String
struct String_t;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_AudioSource3628549054.h"

// System.Void Sell::.ctor()
extern "C"  void Sell__ctor_m981993321 (Sell_t2573170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sell::.cctor()
extern "C"  void Sell__cctor_m4189892964 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sell::Start()
extern "C"  void Sell_Start_m4224098409 (Sell_t2573170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sell::Update()
extern "C"  void Sell_Update_m2103883972 (Sell_t2573170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Sell::BlinkEndTutorial()
extern "C"  Il2CppObject * Sell_BlinkEndTutorial_m827942176 (Sell_t2573170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Sell::BlinkArrow()
extern "C"  Il2CppObject * Sell_BlinkArrow_m1870961744 (Sell_t2573170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Sell::BlinkBackArrow()
extern "C"  Il2CppObject * Sell_BlinkBackArrow_m246020713 (Sell_t2573170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Sell::ShowMessage(System.String)
extern "C"  Il2CppObject * Sell_ShowMessage_m2845957401 (Sell_t2573170 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Sell::checkItemInInventory(System.Int32)
extern "C"  bool Sell_checkItemInInventory_m1917703580 (Sell_t2573170 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sell::onBuyButtonClicked(UnityEngine.AudioSource)
extern "C"  void Sell_onBuyButtonClicked_m1455583823 (Sell_t2573170 * __this, AudioSource_t3628549054 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Sell::goToMapScene(UnityEngine.AudioSource)
extern "C"  void Sell_goToMapScene_m3181436650 (Sell_t2573170 * __this, AudioSource_t3628549054 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Sell::checkCoins(System.Int32)
extern "C"  bool Sell_checkCoins_m3608845306 (Sell_t2573170 * __this, int32_t ___coins, const MethodInfo* method) IL2CPP_METHOD_ATTR;
