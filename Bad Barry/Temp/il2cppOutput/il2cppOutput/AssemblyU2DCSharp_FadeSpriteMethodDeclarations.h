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
struct FadeSprite_t101;
// System.Collections.IEnumerator
struct IEnumerator_t156;

#include "codegen/il2cpp-codegen.h"

// System.Void FadeSprite::.ctor()
extern "C" void FadeSprite__ctor_m439 (FadeSprite_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FadeSprite::get_isVisible()
extern "C" bool FadeSprite_get_isVisible_m440 (FadeSprite_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FadeSprite::get_isHidden()
extern "C" bool FadeSprite_get_isHidden_m441 (FadeSprite_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FadeSprite::get_fadeSpeed()
extern "C" float FadeSprite_get_fadeSpeed_m442 (FadeSprite_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FadeSprite::set_fadeSpeed(System.Single)
extern "C" void FadeSprite_set_fadeSpeed_m443 (FadeSprite_t101 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FadeSprite::get_minAlpha()
extern "C" float FadeSprite_get_minAlpha_m444 (FadeSprite_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FadeSprite::set_minAlpha(System.Single)
extern "C" void FadeSprite_set_minAlpha_m445 (FadeSprite_t101 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FadeSprite::get_maxAlpha()
extern "C" float FadeSprite_get_maxAlpha_m446 (FadeSprite_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FadeSprite::set_maxAlpha(System.Single)
extern "C" void FadeSprite_set_maxAlpha_m447 (FadeSprite_t101 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FadeSprite::get_continuous()
extern "C" bool FadeSprite_get_continuous_m448 (FadeSprite_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FadeSprite::set_continuous(System.Boolean)
extern "C" void FadeSprite_set_continuous_m449 (FadeSprite_t101 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FadeSprite::Start()
extern "C" void FadeSprite_Start_m450 (FadeSprite_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator FadeSprite::FadeIn()
extern "C" Object_t * FadeSprite_FadeIn_m451 (FadeSprite_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator FadeSprite::FadeOut()
extern "C" Object_t * FadeSprite_FadeOut_m452 (FadeSprite_t101 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
