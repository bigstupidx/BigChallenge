﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t1413;
// System.Reflection.Emit.AssemblyBuilder
struct AssemblyBuilder_t1382;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1389;
// System.Type[]
struct TypeU5BU5D_t697;
// System.Reflection.Emit.TypeBuilder[]
struct TypeBuilderU5BU5D_t1414;
// System.Object
struct Object_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t1407;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_TypeAttributes.h"
#include "mscorlib_System_Reflection_Emit_PackingSize.h"

// System.Void System.Reflection.Emit.ModuleBuilder::.ctor(System.Reflection.Emit.AssemblyBuilder,System.String,System.String,System.Boolean,System.Boolean)
extern "C" void ModuleBuilder__ctor_m8788 (ModuleBuilder_t1413 * __this, AssemblyBuilder_t1382 * ___assb, String_t* ___name, String_t* ___fullyqname, bool ___emitSymbolInfo, bool ___transient, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::.cctor()
extern "C" void ModuleBuilder__cctor_m8789 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::basic_init(System.Reflection.Emit.ModuleBuilder)
extern "C" void ModuleBuilder_basic_init_m8790 (Object_t * __this /* static, unused */, ModuleBuilder_t1413 * ___ab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::set_wrappers_type(System.Reflection.Emit.ModuleBuilder,System.Type)
extern "C" void ModuleBuilder_set_wrappers_type_m8791 (Object_t * __this /* static, unused */, ModuleBuilder_t1413 * ___mb, Type_t * ___ab, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.ModuleBuilder::IsTransient()
extern "C" bool ModuleBuilder_IsTransient_m8792 (ModuleBuilder_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::DefineType(System.String,System.Reflection.TypeAttributes,System.Type)
extern "C" TypeBuilder_t1389 * ModuleBuilder_DefineType_m8793 (ModuleBuilder_t1413 * __this, String_t* ___name, int32_t ___attr, Type_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::AddType(System.Reflection.Emit.TypeBuilder)
extern "C" void ModuleBuilder_AddType_m8794 (ModuleBuilder_t1413 * __this, TypeBuilder_t1389 * ___tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::DefineType(System.String,System.Reflection.TypeAttributes,System.Type,System.Type[],System.Reflection.Emit.PackingSize,System.Int32)
extern "C" TypeBuilder_t1389 * ModuleBuilder_DefineType_m8795 (ModuleBuilder_t1413 * __this, String_t* ___name, int32_t ___attr, Type_t * ___parent, TypeU5BU5D_t697* ___interfaces, int32_t ___packingSize, int32_t ___typesize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::DefineType(System.String,System.Reflection.TypeAttributes,System.Type,System.Type[])
extern "C" TypeBuilder_t1389 * ModuleBuilder_DefineType_m8796 (ModuleBuilder_t1413 * __this, String_t* ___name, int32_t ___attr, Type_t * ___parent, TypeU5BU5D_t697* ___interfaces, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ModuleBuilder::GetType(System.String)
extern "C" Type_t * ModuleBuilder_GetType_m8797 (ModuleBuilder_t1413 * __this, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::search_in_array(System.Reflection.Emit.TypeBuilder[],System.Int32,System.String)
extern "C" TypeBuilder_t1389 * ModuleBuilder_search_in_array_m8798 (ModuleBuilder_t1413 * __this, TypeBuilderU5BU5D_t1414* ___arr, int32_t ___validElementsInArray, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::search_nested_in_array(System.Reflection.Emit.TypeBuilder[],System.Int32,System.String)
extern "C" TypeBuilder_t1389 * ModuleBuilder_search_nested_in_array_m8799 (ModuleBuilder_t1413 * __this, TypeBuilderU5BU5D_t1414* ___arr, int32_t ___validElementsInArray, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ModuleBuilder::create_modified_type(System.Reflection.Emit.TypeBuilder,System.String)
extern "C" Type_t * ModuleBuilder_create_modified_type_m8800 (Object_t * __this /* static, unused */, TypeBuilder_t1389 * ___tb, String_t* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ModuleBuilder::GetMaybeNested(System.Reflection.Emit.TypeBuilder,System.String)
extern "C" TypeBuilder_t1389 * ModuleBuilder_GetMaybeNested_m8801 (ModuleBuilder_t1413 * __this, TypeBuilder_t1389 * ___t, String_t* ___className, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.ModuleBuilder::GetType(System.String,System.Boolean,System.Boolean)
extern "C" Type_t * ModuleBuilder_GetType_m8802 (ModuleBuilder_t1413 * __this, String_t* ___className, bool ___throwOnError, bool ___ignoreCase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C" int32_t ModuleBuilder_get_next_table_index_m8803 (ModuleBuilder_t1413 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.ModuleBuilder::GetTypes()
extern "C" TypeU5BU5D_t697* ModuleBuilder_GetTypes_m8804 (ModuleBuilder_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::getUSIndex(System.Reflection.Emit.ModuleBuilder,System.String)
extern "C" int32_t ModuleBuilder_getUSIndex_m8805 (Object_t * __this /* static, unused */, ModuleBuilder_t1413 * ___mb, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::getToken(System.Reflection.Emit.ModuleBuilder,System.Object)
extern "C" int32_t ModuleBuilder_getToken_m8806 (Object_t * __this /* static, unused */, ModuleBuilder_t1413 * ___mb, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::getMethodToken(System.Reflection.Emit.ModuleBuilder,System.Reflection.MethodInfo,System.Type[])
extern "C" int32_t ModuleBuilder_getMethodToken_m8807 (Object_t * __this /* static, unused */, ModuleBuilder_t1413 * ___mb, MethodInfo_t * ___method, TypeU5BU5D_t697* ___opt_param_types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::GetToken(System.String)
extern "C" int32_t ModuleBuilder_GetToken_m8808 (ModuleBuilder_t1413 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::GetToken(System.Reflection.MemberInfo)
extern "C" int32_t ModuleBuilder_GetToken_m8809 (ModuleBuilder_t1413 * __this, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ModuleBuilder::GetToken(System.Reflection.MethodInfo,System.Type[])
extern "C" int32_t ModuleBuilder_GetToken_m8810 (ModuleBuilder_t1413 * __this, MethodInfo_t * ___method, TypeU5BU5D_t697* ___opt_param_types, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::RegisterToken(System.Object,System.Int32)
extern "C" void ModuleBuilder_RegisterToken_m8811 (ModuleBuilder_t1413 * __this, Object_t * ___obj, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.TokenGenerator System.Reflection.Emit.ModuleBuilder::GetTokenGenerator()
extern "C" Object_t * ModuleBuilder_GetTokenGenerator_m8812 (ModuleBuilder_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.ModuleBuilder::get_FileName()
extern "C" String_t* ModuleBuilder_get_FileName_m8813 (ModuleBuilder_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ModuleBuilder::CreateGlobalType()
extern "C" void ModuleBuilder_CreateGlobalType_m8814 (ModuleBuilder_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;