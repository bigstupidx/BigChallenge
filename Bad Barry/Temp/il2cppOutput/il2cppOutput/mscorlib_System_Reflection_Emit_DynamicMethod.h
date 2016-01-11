#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t651;
// System.Reflection.Module
struct Module_t1340;
// System.Reflection.Emit.ILGenerator
struct ILGenerator_t1334;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Reflection.MonoMethod
struct MonoMethod_t;
// System.Reflection.Emit.ParameterBuilder[]
struct ParameterBuilderU5BU5D_t1336;

#include "mscorlib_System_Reflection_MethodInfo.h"
#include "mscorlib_System_RuntimeMethodHandle.h"
#include "mscorlib_System_Reflection_MethodAttributes.h"
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Reflection.Emit.DynamicMethod
struct  DynamicMethod_t1338  : public MethodInfo_t
{
	// System.RuntimeMethodHandle System.Reflection.Emit.DynamicMethod::mhandle
	RuntimeMethodHandle_t1339  ___mhandle_0;
	// System.String System.Reflection.Emit.DynamicMethod::name
	String_t* ___name_1;
	// System.Type System.Reflection.Emit.DynamicMethod::returnType
	Type_t * ___returnType_2;
	// System.Type[] System.Reflection.Emit.DynamicMethod::parameters
	TypeU5BU5D_t651* ___parameters_3;
	// System.Reflection.MethodAttributes System.Reflection.Emit.DynamicMethod::attributes
	int32_t ___attributes_4;
	// System.Reflection.CallingConventions System.Reflection.Emit.DynamicMethod::callingConvention
	int32_t ___callingConvention_5;
	// System.Reflection.Module System.Reflection.Emit.DynamicMethod::module
	Module_t1340 * ___module_6;
	// System.Reflection.Emit.ILGenerator System.Reflection.Emit.DynamicMethod::ilgen
	ILGenerator_t1334 * ___ilgen_7;
	// System.Object[] System.Reflection.Emit.DynamicMethod::refs
	ObjectU5BU5D_t142* ___refs_8;
	// System.Reflection.MonoMethod System.Reflection.Emit.DynamicMethod::method
	MonoMethod_t * ___method_9;
	// System.Reflection.Emit.ParameterBuilder[] System.Reflection.Emit.DynamicMethod::pinfo
	ParameterBuilderU5BU5D_t1336* ___pinfo_10;
	// System.Boolean System.Reflection.Emit.DynamicMethod::creating
	bool ___creating_11;
};
