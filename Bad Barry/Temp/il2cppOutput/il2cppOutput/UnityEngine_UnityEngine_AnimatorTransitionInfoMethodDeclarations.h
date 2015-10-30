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
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo.h"

// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern "C" bool AnimatorTransitionInfo_IsName_m2871 (AnimatorTransitionInfo_t509 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern "C" bool AnimatorTransitionInfo_IsUserName_m2872 (AnimatorTransitionInfo_t509 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m2873 (AnimatorTransitionInfo_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m2874 (AnimatorTransitionInfo_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m2875 (AnimatorTransitionInfo_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m2876 (AnimatorTransitionInfo_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C" bool AnimatorTransitionInfo_get_anyState_m2877 (AnimatorTransitionInfo_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C" bool AnimatorTransitionInfo_get_entry_m2878 (AnimatorTransitionInfo_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C" bool AnimatorTransitionInfo_get_exit_m2879 (AnimatorTransitionInfo_t509 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimatorTransitionInfo_t509_marshal(const AnimatorTransitionInfo_t509& unmarshaled, AnimatorTransitionInfo_t509_marshaled& marshaled);
extern "C" void AnimatorTransitionInfo_t509_marshal_back(const AnimatorTransitionInfo_t509_marshaled& marshaled, AnimatorTransitionInfo_t509& unmarshaled);
extern "C" void AnimatorTransitionInfo_t509_marshal_cleanup(AnimatorTransitionInfo_t509_marshaled& marshaled);
