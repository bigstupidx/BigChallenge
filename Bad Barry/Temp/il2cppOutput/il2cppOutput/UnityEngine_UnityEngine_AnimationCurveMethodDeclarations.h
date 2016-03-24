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
struct AnimationCurve_t603;
struct AnimationCurve_t603_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t693;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m3446 (AnimationCurve_t603 * __this, KeyframeU5BU5D_t693* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m3447 (AnimationCurve_t603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m3448 (AnimationCurve_t603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m3449 (AnimationCurve_t603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m3450 (AnimationCurve_t603 * __this, KeyframeU5BU5D_t693* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t603_marshal(const AnimationCurve_t603& unmarshaled, AnimationCurve_t603_marshaled& marshaled);
extern "C" void AnimationCurve_t603_marshal_back(const AnimationCurve_t603_marshaled& marshaled, AnimationCurve_t603& unmarshaled);
extern "C" void AnimationCurve_t603_marshal_cleanup(AnimationCurve_t603_marshaled& marshaled);
