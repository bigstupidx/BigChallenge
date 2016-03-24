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

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "UnityEngine_UnityEngine_Color1588175760.h"
#include "UnityEngine_UnityEngine_FullScreenMovieControlMode2792209848.h"
#include "UnityEngine_UnityEngine_FullScreenMovieScalingMode3702599394.h"

// System.Boolean UnityEngine.Handheld::PlayFullScreenMovie(System.String,UnityEngine.Color,UnityEngine.FullScreenMovieControlMode)
extern "C"  bool Handheld_PlayFullScreenMovie_m1055222372 (Il2CppObject * __this /* static, unused */, String_t* ___path, Color_t1588175760  ___bgColor, int32_t ___controlMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Handheld::INTERNAL_CALL_PlayFullScreenMovie(System.String,UnityEngine.Color&,UnityEngine.FullScreenMovieControlMode,UnityEngine.FullScreenMovieScalingMode)
extern "C"  bool Handheld_INTERNAL_CALL_PlayFullScreenMovie_m368534371 (Il2CppObject * __this /* static, unused */, String_t* ___path, Color_t1588175760 * ___bgColor, int32_t ___controlMode, int32_t ___scalingMode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
