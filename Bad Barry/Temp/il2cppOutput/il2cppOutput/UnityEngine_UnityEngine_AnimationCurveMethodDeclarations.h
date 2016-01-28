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
struct AnimationCurve_t585;
struct AnimationCurve_t585_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t675;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m3361 (AnimationCurve_t585 * __this, KeyframeU5BU5D_t675* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m3362 (AnimationCurve_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m3363 (AnimationCurve_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m3364 (AnimationCurve_t585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m3365 (AnimationCurve_t585 * __this, KeyframeU5BU5D_t675* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t585_marshal(const AnimationCurve_t585& unmarshaled, AnimationCurve_t585_marshaled& marshaled);
extern "C" void AnimationCurve_t585_marshal_back(const AnimationCurve_t585_marshaled& marshaled, AnimationCurve_t585& unmarshaled);
extern "C" void AnimationCurve_t585_marshal_cleanup(AnimationCurve_t585_marshaled& marshaled);
