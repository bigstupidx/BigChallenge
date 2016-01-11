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

// System.Reflection.TypeDelegator
struct TypeDelegator_t1428;
// System.Reflection.Assembly
struct Assembly_t1133;
// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Reflection.Module
struct Module_t1340;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t683;
// System.Reflection.Binder
struct Binder_t668;
// System.Type[]
struct TypeU5BU5D_t651;
// System.Reflection.ParameterModifier[]
struct ParameterModifierU5BU5D_t669;
// System.Reflection.ConstructorInfo[]
struct ConstructorInfoU5BU5D_t1835;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.FieldInfo[]
struct FieldInfoU5BU5D_t1836;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Reflection.MethodInfo[]
struct MethodInfoU5BU5D_t1411;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t670;
// System.String[]
struct StringU5BU5D_t85;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "mscorlib_System_Reflection_TypeAttributes.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Void System.Reflection.TypeDelegator::.ctor()
extern "C" void TypeDelegator__ctor_m8898 (TypeDelegator_t1428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.Reflection.TypeDelegator::get_Assembly()
extern "C" Assembly_t1133 * TypeDelegator_get_Assembly_m8899 (TypeDelegator_t1428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.TypeDelegator::get_AssemblyQualifiedName()
extern "C" String_t* TypeDelegator_get_AssemblyQualifiedName_m8900 (TypeDelegator_t1428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.TypeDelegator::get_BaseType()
extern "C" Type_t * TypeDelegator_get_BaseType_m8901 (TypeDelegator_t1428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.TypeDelegator::get_FullName()
extern "C" String_t* TypeDelegator_get_FullName_m8902 (TypeDelegator_t1428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Module System.Reflection.TypeDelegator::get_Module()
extern "C" Module_t1340 * TypeDelegator_get_Module_m8903 (TypeDelegator_t1428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.TypeDelegator::get_Name()
extern "C" String_t* TypeDelegator_get_Name_m8904 (TypeDelegator_t1428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.TypeDelegator::get_Namespace()
extern "C" String_t* TypeDelegator_get_Namespace_m8905 (TypeDelegator_t1428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeTypeHandle System.Reflection.TypeDelegator::get_TypeHandle()
extern "C" RuntimeTypeHandle_t1146  TypeDelegator_get_TypeHandle_m8906 (TypeDelegator_t1428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.TypeDelegator::get_UnderlyingSystemType()
extern "C" Type_t * TypeDelegator_get_UnderlyingSystemType_m8907 (TypeDelegator_t1428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.TypeAttributes System.Reflection.TypeDelegator::GetAttributeFlagsImpl()
extern "C" int32_t TypeDelegator_GetAttributeFlagsImpl_m8908 (TypeDelegator_t1428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo System.Reflection.TypeDelegator::GetConstructorImpl(System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" ConstructorInfo_t683 * TypeDelegator_GetConstructorImpl_m8909 (TypeDelegator_t1428 * __this, int32_t ___bindingAttr, Binder_t668 * ___binder, int32_t ___callConvention, TypeU5BU5D_t651* ___types, ParameterModifierU5BU5D_t669* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ConstructorInfo[] System.Reflection.TypeDelegator::GetConstructors(System.Reflection.BindingFlags)
extern "C" ConstructorInfoU5BU5D_t1835* TypeDelegator_GetConstructors_m8910 (TypeDelegator_t1428 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.TypeDelegator::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t142* TypeDelegator_GetCustomAttributes_m8911 (TypeDelegator_t1428 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.TypeDelegator::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t142* TypeDelegator_GetCustomAttributes_m8912 (TypeDelegator_t1428 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.TypeDelegator::GetElementType()
extern "C" Type_t * TypeDelegator_GetElementType_m8913 (TypeDelegator_t1428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.Reflection.TypeDelegator::GetEvent(System.String,System.Reflection.BindingFlags)
extern "C" EventInfo_t * TypeDelegator_GetEvent_m8914 (TypeDelegator_t1428 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo System.Reflection.TypeDelegator::GetField(System.String,System.Reflection.BindingFlags)
extern "C" FieldInfo_t * TypeDelegator_GetField_m8915 (TypeDelegator_t1428 * __this, String_t* ___name, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.FieldInfo[] System.Reflection.TypeDelegator::GetFields(System.Reflection.BindingFlags)
extern "C" FieldInfoU5BU5D_t1836* TypeDelegator_GetFields_m8916 (TypeDelegator_t1428 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type[] System.Reflection.TypeDelegator::GetInterfaces()
extern "C" TypeU5BU5D_t651* TypeDelegator_GetInterfaces_m8917 (TypeDelegator_t1428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.Reflection.TypeDelegator::GetMethodImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Reflection.CallingConventions,System.Type[],System.Reflection.ParameterModifier[])
extern "C" MethodInfo_t * TypeDelegator_GetMethodImpl_m8918 (TypeDelegator_t1428 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t668 * ___binder, int32_t ___callConvention, TypeU5BU5D_t651* ___types, ParameterModifierU5BU5D_t669* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo[] System.Reflection.TypeDelegator::GetMethods(System.Reflection.BindingFlags)
extern "C" MethodInfoU5BU5D_t1411* TypeDelegator_GetMethods_m8919 (TypeDelegator_t1428 * __this, int32_t ___bindingAttr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.Reflection.TypeDelegator::GetPropertyImpl(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Type,System.Type[],System.Reflection.ParameterModifier[])
extern "C" PropertyInfo_t * TypeDelegator_GetPropertyImpl_m8920 (TypeDelegator_t1428 * __this, String_t* ___name, int32_t ___bindingAttr, Binder_t668 * ___binder, Type_t * ___returnType, TypeU5BU5D_t651* ___types, ParameterModifierU5BU5D_t669* ___modifiers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::HasElementTypeImpl()
extern "C" bool TypeDelegator_HasElementTypeImpl_m8921 (TypeDelegator_t1428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.TypeDelegator::InvokeMember(System.String,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object,System.Object[],System.Reflection.ParameterModifier[],System.Globalization.CultureInfo,System.String[])
extern "C" Object_t * TypeDelegator_InvokeMember_m8922 (TypeDelegator_t1428 * __this, String_t* ___name, int32_t ___invokeAttr, Binder_t668 * ___binder, Object_t * ___target, ObjectU5BU5D_t142* ___args, ParameterModifierU5BU5D_t669* ___modifiers, CultureInfo_t670 * ___culture, StringU5BU5D_t85* ___namedParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsArrayImpl()
extern "C" bool TypeDelegator_IsArrayImpl_m8923 (TypeDelegator_t1428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsByRefImpl()
extern "C" bool TypeDelegator_IsByRefImpl_m8924 (TypeDelegator_t1428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsDefined(System.Type,System.Boolean)
extern "C" bool TypeDelegator_IsDefined_m8925 (TypeDelegator_t1428 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsPointerImpl()
extern "C" bool TypeDelegator_IsPointerImpl_m8926 (TypeDelegator_t1428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsPrimitiveImpl()
extern "C" bool TypeDelegator_IsPrimitiveImpl_m8927 (TypeDelegator_t1428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.TypeDelegator::IsValueTypeImpl()
extern "C" bool TypeDelegator_IsValueTypeImpl_m8928 (TypeDelegator_t1428 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
