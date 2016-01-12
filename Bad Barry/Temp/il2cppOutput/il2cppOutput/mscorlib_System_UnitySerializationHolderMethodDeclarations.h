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

// System.UnitySerializationHolder
struct UnitySerializationHolder_t1811;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t1752;
// System.Reflection.Module
struct Module_t1349;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m11411 (UnitySerializationHolder_t1811 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m11412 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t653 * ___info, StreamingContext_t654  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m11413 (Object_t * __this /* static, unused */, DBNull_t1752 * ___instance, SerializationInfo_t653 * ___info, StreamingContext_t654  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m11414 (Object_t * __this /* static, unused */, Module_t1349 * ___instance, SerializationInfo_t653 * ___info, StreamingContext_t654  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m11415 (UnitySerializationHolder_t1811 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m11416 (UnitySerializationHolder_t1811 * __this, StreamingContext_t654  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
