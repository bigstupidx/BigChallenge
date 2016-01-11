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
// System.Reflection.Emit.MethodBuilder[]
struct MethodBuilderU5BU5D_t1371;
// System.Reflection.Emit.ConstructorBuilder[]
struct ConstructorBuilderU5BU5D_t1372;
// System.Reflection.Emit.FieldBuilder[]
struct FieldBuilderU5BU5D_t1373;
// System.Reflection.Emit.TypeBuilder[]
struct TypeBuilderU5BU5D_t1360;
// System.Reflection.Emit.ModuleBuilder
struct ModuleBuilder_t1359;
// System.Reflection.Emit.GenericTypeParameterBuilder[]
struct GenericTypeParameterBuilderU5BU5D_t1357;

#include "mscorlib_System_Type.h"
#include "mscorlib_System_Reflection_TypeAttributes.h"
#include "mscorlib_System_Reflection_Emit_PackingSize.h"

// System.Reflection.Emit.TypeBuilder
struct  TypeBuilder_t1335  : public Type_t
{
	// System.String System.Reflection.Emit.TypeBuilder::tname
	String_t* ___tname_8;
	// System.String System.Reflection.Emit.TypeBuilder::nspace
	String_t* ___nspace_9;
	// System.Type System.Reflection.Emit.TypeBuilder::parent
	Type_t * ___parent_10;
	// System.Type System.Reflection.Emit.TypeBuilder::nesting_type
	Type_t * ___nesting_type_11;
	// System.Type[] System.Reflection.Emit.TypeBuilder::interfaces
	TypeU5BU5D_t651* ___interfaces_12;
	// System.Int32 System.Reflection.Emit.TypeBuilder::num_methods
	int32_t ___num_methods_13;
	// System.Reflection.Emit.MethodBuilder[] System.Reflection.Emit.TypeBuilder::methods
	MethodBuilderU5BU5D_t1371* ___methods_14;
	// System.Reflection.Emit.ConstructorBuilder[] System.Reflection.Emit.TypeBuilder::ctors
	ConstructorBuilderU5BU5D_t1372* ___ctors_15;
	// System.Reflection.Emit.FieldBuilder[] System.Reflection.Emit.TypeBuilder::fields
	FieldBuilderU5BU5D_t1373* ___fields_16;
	// System.Reflection.Emit.TypeBuilder[] System.Reflection.Emit.TypeBuilder::subtypes
	TypeBuilderU5BU5D_t1360* ___subtypes_17;
	// System.Reflection.TypeAttributes System.Reflection.Emit.TypeBuilder::attrs
	int32_t ___attrs_18;
	// System.Int32 System.Reflection.Emit.TypeBuilder::table_idx
	int32_t ___table_idx_19;
	// System.Reflection.Emit.ModuleBuilder System.Reflection.Emit.TypeBuilder::pmodule
	ModuleBuilder_t1359 * ___pmodule_20;
	// System.Int32 System.Reflection.Emit.TypeBuilder::class_size
	int32_t ___class_size_21;
	// System.Reflection.Emit.PackingSize System.Reflection.Emit.TypeBuilder::packing_size
	int32_t ___packing_size_22;
	// System.Reflection.Emit.GenericTypeParameterBuilder[] System.Reflection.Emit.TypeBuilder::generic_params
	GenericTypeParameterBuilderU5BU5D_t1357* ___generic_params_23;
	// System.Type System.Reflection.Emit.TypeBuilder::created
	Type_t * ___created_24;
	// System.String System.Reflection.Emit.TypeBuilder::fullname
	String_t* ___fullname_25;
	// System.Boolean System.Reflection.Emit.TypeBuilder::createTypeCalled
	bool ___createTypeCalled_26;
	// System.Type System.Reflection.Emit.TypeBuilder::underlying_type
	Type_t * ___underlying_type_27;
};
