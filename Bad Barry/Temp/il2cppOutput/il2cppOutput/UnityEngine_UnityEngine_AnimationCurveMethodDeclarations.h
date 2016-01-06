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

// UnityEngine.AnimationCurve
struct AnimationCurve_t545;
struct AnimationCurve_t545_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t634;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m3112 (AnimationCurve_t545 * __this, KeyframeU5BU5D_t634* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m3113 (AnimationCurve_t545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m3114 (AnimationCurve_t545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m3115 (AnimationCurve_t545 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m3116 (AnimationCurve_t545 * __this, KeyframeU5BU5D_t634* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t545_marshal(const AnimationCurve_t545& unmarshaled, AnimationCurve_t545_marshaled& marshaled);
extern "C" void AnimationCurve_t545_marshal_back(const AnimationCurve_t545_marshaled& marshaled, AnimationCurve_t545& unmarshaled);
extern "C" void AnimationCurve_t545_marshal_cleanup(AnimationCurve_t545_marshaled& marshaled);
