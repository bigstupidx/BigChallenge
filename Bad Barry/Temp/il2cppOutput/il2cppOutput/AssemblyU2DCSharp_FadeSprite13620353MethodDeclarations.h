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

// FadeSprite
struct FadeSprite_t13620353;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;

#include "codegen/il2cpp-codegen.h"

// System.Void FadeSprite::.ctor()
extern "C"  void FadeSprite__ctor_m4270605626 (FadeSprite_t13620353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FadeSprite::get_isVisible()
extern "C"  bool FadeSprite_get_isVisible_m3640960707 (FadeSprite_t13620353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FadeSprite::get_isHidden()
extern "C"  bool FadeSprite_get_isHidden_m3132153947 (FadeSprite_t13620353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FadeSprite::get_fadeSpeed()
extern "C"  float FadeSprite_get_fadeSpeed_m2573095982 (FadeSprite_t13620353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FadeSprite::set_fadeSpeed(System.Single)
extern "C"  void FadeSprite_set_fadeSpeed_m2825281509 (FadeSprite_t13620353 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FadeSprite::get_minAlpha()
extern "C"  float FadeSprite_get_minAlpha_m644874539 (FadeSprite_t13620353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FadeSprite::set_minAlpha(System.Single)
extern "C"  void FadeSprite_set_minAlpha_m4048351672 (FadeSprite_t13620353 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FadeSprite::get_maxAlpha()
extern "C"  float FadeSprite_get_maxAlpha_m2467842521 (FadeSprite_t13620353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FadeSprite::set_maxAlpha(System.Single)
extern "C"  void FadeSprite_set_maxAlpha_m991474634 (FadeSprite_t13620353 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FadeSprite::get_continuous()
extern "C"  bool FadeSprite_get_continuous_m637077430 (FadeSprite_t13620353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FadeSprite::set_continuous(System.Boolean)
extern "C"  void FadeSprite_set_continuous_m1160954989 (FadeSprite_t13620353 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FadeSprite::Start()
extern "C"  void FadeSprite_Start_m3217743418 (FadeSprite_t13620353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator FadeSprite::FadeIn()
extern "C"  Il2CppObject * FadeSprite_FadeIn_m2923862355 (FadeSprite_t13620353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator FadeSprite::FadeOut()
extern "C"  Il2CppObject * FadeSprite_FadeOut_m451242498 (FadeSprite_t13620353 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
