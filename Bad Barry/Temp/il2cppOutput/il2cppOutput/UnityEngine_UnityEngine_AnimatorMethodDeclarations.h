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

// UnityEngine.Animator
struct Animator_t41;
// System.String
struct String_t;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t436;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AnimatorStateInfo.h"

// System.Boolean UnityEngine.Animator::GetBool(System.String)
extern "C" bool Animator_GetBool_m598 (Animator_t41 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
extern "C" void Animator_SetBool_m496 (Animator_t41 * __this, String_t* ___name, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::GetInteger(System.String)
extern "C" int32_t Animator_GetInteger_m487 (Animator_t41 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
extern "C" void Animator_SetInteger_m508 (Animator_t41 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTrigger(System.String)
extern "C" void Animator_SetTrigger_m539 (Animator_t41 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTrigger(System.String)
extern "C" void Animator_ResetTrigger_m2515 (Animator_t41 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimatorStateInfo UnityEngine.Animator::GetCurrentAnimatorStateInfo(System.Int32)
extern "C" AnimatorStateInfo_t106  Animator_GetCurrentAnimatorStateInfo_m599 (Animator_t41 * __this, int32_t ___layerIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RuntimeAnimatorController UnityEngine.Animator::get_runtimeAnimatorController()
extern "C" RuntimeAnimatorController_t436 * Animator_get_runtimeAnimatorController_m2514 (Animator_t41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::StringToHash(System.String)
extern "C" int32_t Animator_StringToHash_m3207 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetBoolString(System.String,System.Boolean)
extern "C" void Animator_SetBoolString_m3208 (Animator_t41 * __this, String_t* ___name, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Animator::GetBoolString(System.String)
extern "C" bool Animator_GetBoolString_m3209 (Animator_t41 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetIntegerString(System.String,System.Int32)
extern "C" void Animator_SetIntegerString_m3210 (Animator_t41 * __this, String_t* ___name, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Animator::GetIntegerString(System.String)
extern "C" int32_t Animator_GetIntegerString_m3211 (Animator_t41 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::SetTriggerString(System.String)
extern "C" void Animator_SetTriggerString_m3212 (Animator_t41 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Animator::ResetTriggerString(System.String)
extern "C" void Animator_ResetTriggerString_m3213 (Animator_t41 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
