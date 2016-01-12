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

// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t1344;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t1368;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t651;
// System.Reflection.Assembly
struct Assembly_t1133;
// System.Reflection.Module
struct Module_t1349;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t683;
// System.Reflection.Binder
struct Binder_t668;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t669;
// System.Object[]
struct ObjectU5BU5D_t144;
// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t1342;
// System.Type[][]
struct TypeU5BU5DU5BU5D_t1346;
// System.Reflection.Emit.MethodBuilder
struct MethodBuilder_t1354;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1846;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1847;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1420;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t670;
// System.String[]
struct StringU5BU5D_t85;
// System.Exception
struct Exception_t115;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_TypeAttributes.h"
#include "mscorlib_System_Reflection_Emit_PackingSize.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_Reflection_CallingConventions.h"
#include "mscorlib_System_Reflection_MethodAttributes.h"
#include "mscorlib_System_RuntimeTypeHandle.h"

// System.Void System.Reflection.Emit.TypeBuilder::.ctor(System.Reflection.Emit.ModuleBuilder,System.Reflection.TypeAttributes,System.Int32)
extern "C" void TypeBuilder__ctor_m8572 (TypeBuilder_t1344 * __this, ModuleBuilder_t1368 * ___mb, int32_t ___attr, int32_t ___table_idx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::.ctor(System.Reflection.Emit.ModuleBuilder,System.String,System.Reflection.TypeAttributes,System.Type,System.Type[],System.Reflection.Emit.PackingSize,System.Int32,System.Type)
extern "C" void TypeBuilder__ctor_m8573 (TypeBuilder_t1344 * __this, ModuleBuilder_t1368 * ___mb, String_t* ___name, int32_t ___attr, Type_t * ___parent, TypeU5BU5D_t651* ___interfaces, int32_t ___packing_size, int32_t ___type_size, Type_t * ___nesting_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::GetAttributeFlagsImpl()
extern "C" int32_t TypeBuilder_GetAttributeFlagsImpl_m8574 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::setup_internal_class(System.Reflection.Emit.TypeBuilder)
extern "C" void TypeBuilder_setup_internal_class_m8575 (TypeBuilder_t1344 * __this, TypeBuilder_t1344 * ___tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::create_generic_class()
extern "C" void TypeBuilder_create_generic_class_m8576 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.Emit.TypeBuilder::get_Assembly()
extern "C" Assembly_t1133 * TypeBuilder_get_Assembly_m8577 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_AssemblyQualifiedName()
extern "C" String_t* TypeBuilder_get_AssemblyQualifiedName_m8578 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_BaseType()
extern "C" Type_t * TypeBuilder_get_BaseType_m8579 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_DeclaringType()
extern "C" Type_t * TypeBuilder_get_DeclaringType_m8580 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_UnderlyingSystemType()
extern "C" Type_t * TypeBuilder_get_UnderlyingSystemType_m8581 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::GetFullName()
extern "C" String_t* TypeBuilder_GetFullName_m8582 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_FullName()
extern "C" String_t* TypeBuilder_get_FullName_m8583 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.Emit.TypeBuilder::get_Module()
extern "C" Module_t1349 * TypeBuilder_get_Module_m8584 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Name()
extern "C" String_t* TypeBuilder_get_Name_m8585 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::get_Namespace()
extern "C" String_t* TypeBuilder_get_Namespace_m8586 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::get_ReflectedType()
extern "C" Type_t * TypeBuilder_get_ReflectedType_m8587 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.Emit.TypeBuilder::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t683 * TypeBuilder_GetConstructorImpl_m8588 (TypeBuilder_t1344 * __this, int32_t ___bindingAttr, Binder_t668 * ___binder, int32_t ___callConvention, TypeU5BU5D_t651* ___types, ParameterModifierU5BU5D_t669* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsDefined(System.Type,System.Boolean)
extern "C" bool TypeBuilder_IsDefined_m8589 (TypeBuilder_t1344 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t144* TypeBuilder_GetCustomAttributes_m8590 (TypeBuilder_t1344 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.Emit.TypeBuilder::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t144* TypeBuilder_GetCustomAttributes_m8591 (TypeBuilder_t1344 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineConstructor(System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[])
extern "C" ConstructorBuilder_t1342 * TypeBuilder_DefineConstructor_m8592 (TypeBuilder_t1344 * __this, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t651* ___parameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineConstructor(System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type[],System.Type[][],System.Type[][])
extern "C" ConstructorBuilder_t1342 * TypeBuilder_DefineConstructor_m8593 (TypeBuilder_t1344 * __this, int32_t ___attributes, int32_t ___callingConvention, TypeU5BU5D_t651* ___parameterTypes, TypeU5BU5DU5BU5D_t1346* ___requiredCustomModifiers, TypeU5BU5DU5BU5D_t1346* ___optionalCustomModifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.ConstructorBuilder System.Reflection.Emit.TypeBuilder::DefineDefaultConstructor(System.Reflection.MethodAttributes)
extern "C" ConstructorBuilder_t1342 * TypeBuilder_DefineDefaultConstructor_m8594 (TypeBuilder_t1344 * __this, int32_t ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::append_method(System.Reflection.Emit.MethodBuilder)
extern "C" void TypeBuilder_append_method_m8595 (TypeBuilder_t1344 * __this, MethodBuilder_t1354 * ___mb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.TypeBuilder::DefineMethod(System.String,System.Reflection.MethodAttributes,System.Type,System.Type[])
extern "C" MethodBuilder_t1354 * TypeBuilder_DefineMethod_m8596 (TypeBuilder_t1344 * __this, String_t* ___name, int32_t ___attributes, Type_t * ___returnType, TypeU5BU5D_t651* ___parameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.TypeBuilder::DefineMethod(System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[])
extern "C" MethodBuilder_t1354 * TypeBuilder_DefineMethod_m8597 (TypeBuilder_t1344 * __this, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t651* ___parameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.MethodBuilder System.Reflection.Emit.TypeBuilder::DefineMethod(System.String,System.Reflection.MethodAttributes,System.Reflection.CallingConventions,System.Type,System.Type[],System.Type[],System.Type[],System.Type[][],System.Type[][])
extern "C" MethodBuilder_t1354 * TypeBuilder_DefineMethod_m8598 (TypeBuilder_t1344 * __this, String_t* ___name, int32_t ___attributes, int32_t ___callingConvention, Type_t * ___returnType, TypeU5BU5D_t651* ___returnTypeRequiredCustomModifiers, TypeU5BU5D_t651* ___returnTypeOptionalCustomModifiers, TypeU5BU5D_t651* ___parameterTypes, TypeU5BU5DU5BU5D_t1346* ___parameterTypeRequiredCustomModifiers, TypeU5BU5DU5BU5D_t1346* ___parameterTypeOptionalCustomModifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::DefineMethodOverride(System.Reflection.MethodInfo,System.Reflection.MethodInfo)
extern "C" void TypeBuilder_DefineMethodOverride_m8599 (TypeBuilder_t1344 * __this, MethodInfo_t * ___methodInfoBody, MethodInfo_t * ___methodInfoDeclaration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::create_runtime_class(System.Reflection.Emit.TypeBuilder)
extern "C" Type_t * TypeBuilder_create_runtime_class_m8600 (TypeBuilder_t1344 * __this, TypeBuilder_t1344 * ___tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::is_nested_in(System.Type)
extern "C" bool TypeBuilder_is_nested_in_m8601 (TypeBuilder_t1344 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::has_ctor_method()
extern "C" bool TypeBuilder_has_ctor_method_m8602 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::CreateType()
extern "C" Type_t * TypeBuilder_CreateType_m8603 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1846* TypeBuilder_GetConstructors_m8604 (TypeBuilder_t1344 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.Emit.TypeBuilder::GetConstructorsInternal(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1846* TypeBuilder_GetConstructorsInternal_m8605 (TypeBuilder_t1344 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetElementType()
extern "C" Type_t * TypeBuilder_GetElementType_m8606 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.Emit.TypeBuilder::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * TypeBuilder_GetEvent_m8607 (TypeBuilder_t1344 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.Emit.TypeBuilder::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * TypeBuilder_GetField_m8608 (TypeBuilder_t1344 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.Emit.TypeBuilder::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t1847* TypeBuilder_GetFields_m8609 (TypeBuilder_t1344 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetInterfaces()
extern "C" TypeU5BU5D_t651* TypeBuilder_GetInterfaces_m8610 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethodsByName(System.String,System.Reflection.BindingFlags,System.Boolean,System.Type)
extern "C" MethodInfoU5BU5D_t1420* TypeBuilder_GetMethodsByName_m8611 (TypeBuilder_t1344 * __this, String_t* ___name, int32_t ___bindingAttr, bool ___ignoreCase, Type_t * ___reflected_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.Emit.TypeBuilder::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t1420* TypeBuilder_GetMethods_m8612 (TypeBuilder_t1344 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.Emit.TypeBuilder::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * TypeBuilder_GetMethodImpl_m8613 (TypeBuilder_t1344 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t668 * ___binder, int32_t ___callConvention, TypeU5BU5D_t651* ___types, ParameterModifierU5BU5D_t669* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.Emit.TypeBuilder::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * TypeBuilder_GetPropertyImpl_m8614 (TypeBuilder_t1344 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t668 * ___binder, Type_t * ___returnType, TypeU5BU5D_t651* ___types, ParameterModifierU5BU5D_t669* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::HasElementTypeImpl()
extern "C" bool TypeBuilder_HasElementTypeImpl_m8615 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.Emit.TypeBuilder::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * TypeBuilder_InvokeMember_m8616 (TypeBuilder_t1344 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t668 * ___binder, Object_t * ___target, ObjectU5BU5D_t144* ___args, ParameterModifierU5BU5D_t669* ___modifiers, CultureInfo_t670 * ___culture, StringU5BU5D_t85* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsArrayImpl()
extern "C" bool TypeBuilder_IsArrayImpl_m8617 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsByRefImpl()
extern "C" bool TypeBuilder_IsByRefImpl_m8618 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPointerImpl()
extern "C" bool TypeBuilder_IsPointerImpl_m8619 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsPrimitiveImpl()
extern "C" bool TypeBuilder_IsPrimitiveImpl_m8620 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsValueTypeImpl()
extern "C" bool TypeBuilder_IsValueTypeImpl_m8621 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::MakeGenericType(System.Type[])
extern "C" Type_t * TypeBuilder_MakeGenericType_m8622 (TypeBuilder_t1344 * __this, TypeU5BU5D_t651* ___typeArguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.Emit.TypeBuilder::get_TypeHandle()
extern "C" RuntimeTypeHandle_t1146  TypeBuilder_get_TypeHandle_m8623 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::SetParent(System.Type)
extern "C" void TypeBuilder_SetParent_m8624 (TypeBuilder_t1344 * __this, Type_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.TypeBuilder::get_next_table_index(System.Object,System.Int32,System.Boolean)
extern "C" int32_t TypeBuilder_get_next_table_index_m8625 (TypeBuilder_t1344 * __this, Object_t * ___obj, int32_t ___table, bool ___inc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsCompilerContext()
extern "C" bool TypeBuilder_get_IsCompilerContext_m8626 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_is_created()
extern "C" bool TypeBuilder_get_is_created_m8627 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Reflection.Emit.TypeBuilder::not_supported()
extern "C" Exception_t115 * TypeBuilder_not_supported_m8628 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_not_created()
extern "C" void TypeBuilder_check_not_created_m8629 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_created()
extern "C" void TypeBuilder_check_created_m8630 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.TypeBuilder::check_name(System.String,System.String)
extern "C" void TypeBuilder_check_name_m8631 (TypeBuilder_t1344 * __this, String_t* ___argName, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.Emit.TypeBuilder::ToString()
extern "C" String_t* TypeBuilder_ToString_m8632 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableFrom(System.Type)
extern "C" bool TypeBuilder_IsAssignableFrom_m8633 (TypeBuilder_t1344 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsSubclassOf(System.Type)
extern "C" bool TypeBuilder_IsSubclassOf_m8634 (TypeBuilder_t1344 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::IsAssignableTo(System.Type)
extern "C" bool TypeBuilder_IsAssignableTo_m8635 (TypeBuilder_t1344 * __this, Type_t * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.Emit.TypeBuilder::GetGenericArguments()
extern "C" TypeU5BU5D_t651* TypeBuilder_GetGenericArguments_m8636 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.Emit.TypeBuilder::GetGenericTypeDefinition()
extern "C" Type_t * TypeBuilder_GetGenericTypeDefinition_m8637 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_ContainsGenericParameters()
extern "C" bool TypeBuilder_get_ContainsGenericParameters_m8638 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericParameter()
extern "C" bool TypeBuilder_get_IsGenericParameter_m8639 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericTypeDefinition()
extern "C" bool TypeBuilder_get_IsGenericTypeDefinition_m8640 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.Emit.TypeBuilder::get_IsGenericType()
extern "C" bool TypeBuilder_get_IsGenericType_m8641 (TypeBuilder_t1344 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
