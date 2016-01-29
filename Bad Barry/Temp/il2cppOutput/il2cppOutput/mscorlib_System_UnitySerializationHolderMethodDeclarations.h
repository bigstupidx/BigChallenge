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
struct UnitySerializationHolder_t1841;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t684;
// System.Type
struct Type_t;
// System.DBNull
struct DBNull_t1782;
// System.Reflection.Module
struct Module_t1379;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.UnitySerializationHolder::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder__ctor_m11592 (UnitySerializationHolder_t1841 * __this, SerializationInfo_t684 * ___info, StreamingContext_t685  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetTypeData(System.Type,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetTypeData_m11593 (Object_t * __this /* static, unused */, Type_t * ___instance, SerializationInfo_t684 * ___info, StreamingContext_t685  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetDBNullData(System.DBNull,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetDBNullData_m11594 (Object_t * __this /* static, unused */, DBNull_t1782 * ___instance, SerializationInfo_t684 * ___info, StreamingContext_t685  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetModuleData(System.Reflection.Module,System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetModuleData_m11595 (Object_t * __this /* static, unused */, Module_t1379 * ___instance, SerializationInfo_t684 * ___info, StreamingContext_t685  ___ctx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.UnitySerializationHolder::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void UnitySerializationHolder_GetObjectData_m11596 (UnitySerializationHolder_t1841 * __this, SerializationInfo_t684 * ___info, StreamingContext_t685  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.UnitySerializationHolder::GetRealObject(System.Runtime.Serialization.StreamingContext)
extern "C" Object_t * UnitySerializationHolder_GetRealObject_m11597 (UnitySerializationHolder_t1841 * __this, StreamingContext_t685  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
