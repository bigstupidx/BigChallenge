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

// System.Reflection.MonoCMethod
struct MonoCMethod_t1413;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t676;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Exception
struct Exception_t115;
// System.Reflection.Binder
struct Binder_t668;
// System.Globalization.CultureInfo
struct CultureInfo_t670;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_BindingFlags.h"
#include "mscorlib_System_RuntimeMethodHandle.h"
#include "mscorlib_System_Reflection_MethodAttributes.h"
#include "mscorlib_System_Reflection_CallingConventions.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Reflection.MonoCMethod::.ctor()
extern "C" void MonoCMethod__ctor_m8813 (MonoCMethod_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoCMethod::GetParameters()
extern "C" ParameterInfoU5BU5D_t676* MonoCMethod_GetParameters_m8814 (MonoCMethod_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::InternalInvoke(System.Object,System.Object[],System.Exception&)
extern "C" Object_t * MonoCMethod_InternalInvoke_m8815 (MonoCMethod_t1413 * __this, Object_t * ___obj, ObjectU5BU5D_t142* ___parameters, Exception_t115 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Object,System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoCMethod_Invoke_m8816 (MonoCMethod_t1413 * __this, Object_t * ___obj, int32_t ___invokeAttr, Binder_t668 * ___binder, ObjectU5BU5D_t142* ___parameters, CultureInfo_t670 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Reflection.MonoCMethod::Invoke(System.Reflection.BindingFlags,System.Reflection.Binder,System.Object[],System.Globalization.CultureInfo)
extern "C" Object_t * MonoCMethod_Invoke_m8817 (MonoCMethod_t1413 * __this, int32_t ___invokeAttr, Binder_t668 * ___binder, ObjectU5BU5D_t142* ___parameters, CultureInfo_t670 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.RuntimeMethodHandle System.Reflection.MonoCMethod::get_MethodHandle()
extern "C" RuntimeMethodHandle_t1339  MonoCMethod_get_MethodHandle_m8818 (MonoCMethod_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoCMethod::get_Attributes()
extern "C" int32_t MonoCMethod_get_Attributes_m8819 (MonoCMethod_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoCMethod::get_CallingConvention()
extern "C" int32_t MonoCMethod_get_CallingConvention_m8820 (MonoCMethod_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_ReflectedType()
extern "C" Type_t * MonoCMethod_get_ReflectedType_m8821 (MonoCMethod_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoCMethod::get_DeclaringType()
extern "C" Type_t * MonoCMethod_get_DeclaringType_m8822 (MonoCMethod_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::get_Name()
extern "C" String_t* MonoCMethod_get_Name_m8823 (MonoCMethod_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Reflection.MonoCMethod::IsDefined(System.Type,System.Boolean)
extern "C" bool MonoCMethod_IsDefined_m8824 (MonoCMethod_t1413 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Boolean)
extern "C" ObjectU5BU5D_t142* MonoCMethod_GetCustomAttributes_m8825 (MonoCMethod_t1413 * __this, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Reflection.MonoCMethod::GetCustomAttributes(System.Type,System.Boolean)
extern "C" ObjectU5BU5D_t142* MonoCMethod_GetCustomAttributes_m8826 (MonoCMethod_t1413 * __this, Type_t * ___attributeType, bool ___inherit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Reflection.MonoCMethod::ToString()
extern "C" String_t* MonoCMethod_ToString_m8827 (MonoCMethod_t1413 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.MonoCMethod::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MonoCMethod_GetObjectData_m8828 (MonoCMethod_t1413 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
