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

// System.MulticastDelegate
struct MulticastDelegate_t250;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t640;
// System.Object
struct Object_t;
// System.Delegate[]
struct DelegateU5BU5D_t1782;
// System.Delegate
struct Delegate_t404;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastDelegate::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastDelegate_GetObjectData_m6404 (MulticastDelegate_t250 * __this, SerializationInfo_t640 * ___info, StreamingContext_t641  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::Equals(System.Object)
extern "C" bool MulticastDelegate_Equals_m6405 (MulticastDelegate_t250 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.MulticastDelegate::GetHashCode()
extern "C" int32_t MulticastDelegate_GetHashCode_m6406 (MulticastDelegate_t250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate[] System.MulticastDelegate::GetInvocationList()
extern "C" DelegateU5BU5D_t1782* MulticastDelegate_GetInvocationList_m6407 (MulticastDelegate_t250 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::CombineImpl(System.Delegate)
extern "C" Delegate_t404 * MulticastDelegate_CombineImpl_m6408 (MulticastDelegate_t250 * __this, Delegate_t404 * ___follow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.MulticastDelegate::BaseEquals(System.MulticastDelegate)
extern "C" bool MulticastDelegate_BaseEquals_m6409 (MulticastDelegate_t250 * __this, MulticastDelegate_t250 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.MulticastDelegate System.MulticastDelegate::KPM(System.MulticastDelegate,System.MulticastDelegate,System.MulticastDelegate&)
extern "C" MulticastDelegate_t250 * MulticastDelegate_KPM_m6410 (Object_t * __this /* static, unused */, MulticastDelegate_t250 * ___needle, MulticastDelegate_t250 * ___haystack, MulticastDelegate_t250 ** ___tail, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.MulticastDelegate::RemoveImpl(System.Delegate)
extern "C" Delegate_t404 * MulticastDelegate_RemoveImpl_m6411 (MulticastDelegate_t250 * __this, Delegate_t404 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
