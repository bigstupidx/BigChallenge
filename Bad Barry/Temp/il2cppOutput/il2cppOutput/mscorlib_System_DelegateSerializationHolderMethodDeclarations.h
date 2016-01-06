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

// System.DelegateSerializationHolder
struct DelegateSerializationHolder_t1700;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t640;
// System.Delegate
struct Delegate_t404;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.DelegateSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DelegateSerializationHolder__ctor_m10479 (DelegateSerializationHolder_t1700 * __this, SerializationInfo_t640 * ___info, StreamingContext_t641  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetDelegateData(System.Delegate,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DelegateSerializationHolder_GetDelegateData_m10480 (Object_t * __this /* static, unused */, Delegate_t404 * ___instance, SerializationInfo_t640 * ___info, StreamingContext_t641  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DelegateSerializationHolder_GetObjectData_m10481 (DelegateSerializationHolder_t1700 * __this, SerializationInfo_t640 * ___info, StreamingContext_t641  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DelegateSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * DelegateSerializationHolder_GetRealObject_m10482 (DelegateSerializationHolder_t1700 * __this, StreamingContext_t641  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
