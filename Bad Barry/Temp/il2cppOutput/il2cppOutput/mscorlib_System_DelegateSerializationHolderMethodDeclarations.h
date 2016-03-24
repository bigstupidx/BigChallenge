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
struct DelegateSerializationHolder_t1804;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t699;
// System.Delegate
struct Delegate_t463;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.DelegateSerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DelegateSerializationHolder__ctor_m11270 (DelegateSerializationHolder_t1804 * __this, SerializationInfo_t699 * ___info, StreamingContext_t700  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetDelegateData(System.Delegate,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DelegateSerializationHolder_GetDelegateData_m11271 (Object_t * __this /* static, unused */, Delegate_t463 * ___instance, SerializationInfo_t699 * ___info, StreamingContext_t700  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.DelegateSerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void DelegateSerializationHolder_GetObjectData_m11272 (DelegateSerializationHolder_t1804 * __this, SerializationInfo_t699 * ___info, StreamingContext_t700  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.DelegateSerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * DelegateSerializationHolder_GetRealObject_m11273 (DelegateSerializationHolder_t1804 * __this, StreamingContext_t700  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
