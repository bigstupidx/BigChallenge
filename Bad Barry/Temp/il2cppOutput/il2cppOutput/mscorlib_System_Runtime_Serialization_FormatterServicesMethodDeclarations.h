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

// System.Object[]
struct ObjectU5BU5D_t144;
// System.Object
struct Object_t;
// System.Reflection.MemberInfo[]
struct MemberInfoU5BU5D_t1592;
// System.Type
struct Type_t;
// System.Collections.ArrayList
struct ArrayList_t803;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Object[] System.Runtime.Serialization.FormatterServices::GetObjectData(System.Object,System.Reflection.MemberInfo[])
extern "C" ObjectU5BU5D_t144* FormatterServices_GetObjectData_m9719 (Object_t * __this /* static, unused */, Object_t * ___obj, MemberInfoU5BU5D_t1592* ___members, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo[] System.Runtime.Serialization.FormatterServices::GetSerializableMembers(System.Type,System.Runtime.Serialization.StreamingContext)
extern "C" MemberInfoU5BU5D_t1592* FormatterServices_GetSerializableMembers_m9720 (Object_t * __this /* static, unused */, Type_t * ___type, StreamingContext_t654  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FormatterServices::GetFields(System.Type,System.Type,System.Collections.ArrayList)
extern "C" void FormatterServices_GetFields_m9721 (Object_t * __this /* static, unused */, Type_t * ___reflectedType, Type_t * ___type, ArrayList_t803 * ___fields, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.FormatterServices::GetUninitializedObject(System.Type)
extern "C" Object_t * FormatterServices_GetUninitializedObject_m9722 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Serialization.FormatterServices::GetSafeUninitializedObject(System.Type)
extern "C" Object_t * FormatterServices_GetSafeUninitializedObject_m9723 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
