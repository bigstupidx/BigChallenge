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

// System.Reflection.Emit.ILGenerator
struct ILGenerator_t1343;
// System.Reflection.Module
struct Module_t1349;
// System.Reflection.Emit.TokenGenerator
struct TokenGenerator_t1362;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t1364;
// System.Type
struct Type_t;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t683;
// System.Reflection.FieldInfo
struct FieldInfo_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t651;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Reflection_Emit_OpCode.h"
#include "mscorlib_System_Reflection_Emit_Label.h"

// System.Void System.Reflection.Emit.ILGenerator::.ctor(System.Reflection.Module,System.Reflection.Emit.TokenGenerator,System.Int32)
extern "C" void ILGenerator__ctor_m8459 (ILGenerator_t1343 * __this, Module_t1349 * ___m, Object_t * ___token_gen, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::.cctor()
extern "C" void ILGenerator__cctor_m8460 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::add_token_fixup(System.Reflection.MemberInfo)
extern "C" void ILGenerator_add_token_fixup_m8461 (ILGenerator_t1343 * __this, MemberInfo_t * ___mi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::make_room(System.Int32)
extern "C" void ILGenerator_make_room_m8462 (ILGenerator_t1343 * __this, int32_t ___nbytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::emit_int(System.Int32)
extern "C" void ILGenerator_emit_int_m8463 (ILGenerator_t1343 * __this, int32_t ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::ll_emit(System.Reflection.Emit.OpCode)
extern "C" void ILGenerator_ll_emit_m8464 (ILGenerator_t1343 * __this, OpCode_t1372  ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ILGenerator::target_len(System.Reflection.Emit.OpCode)
extern "C" int32_t ILGenerator_target_len_m8465 (Object_t * __this /* static, unused */, OpCode_t1372  ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.LocalBuilder System.Reflection.Emit.ILGenerator::DeclareLocal(System.Type)
extern "C" LocalBuilder_t1364 * ILGenerator_DeclareLocal_m8466 (ILGenerator_t1343 * __this, Type_t * ___localType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.LocalBuilder System.Reflection.Emit.ILGenerator::DeclareLocal(System.Type,System.Boolean)
extern "C" LocalBuilder_t1364 * ILGenerator_DeclareLocal_m8467 (ILGenerator_t1343 * __this, Type_t * ___localType, bool ___pinned, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Emit.Label System.Reflection.Emit.ILGenerator::DefineLabel()
extern "C" Label_t1363  ILGenerator_DefineLabel_m8468 (ILGenerator_t1343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode)
extern "C" void ILGenerator_Emit_m8469 (ILGenerator_t1343 * __this, OpCode_t1372  ___opcode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Byte)
extern "C" void ILGenerator_Emit_m8470 (ILGenerator_t1343 * __this, OpCode_t1372  ___opcode, uint8_t ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.ConstructorInfo)
extern "C" void ILGenerator_Emit_m8471 (ILGenerator_t1343 * __this, OpCode_t1372  ___opcode, ConstructorInfo_t683 * ___con, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.FieldInfo)
extern "C" void ILGenerator_Emit_m8472 (ILGenerator_t1343 * __this, OpCode_t1372  ___opcode, FieldInfo_t * ___field, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Int32)
extern "C" void ILGenerator_Emit_m8473 (ILGenerator_t1343 * __this, OpCode_t1372  ___opcode, int32_t ___arg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.Emit.Label)
extern "C" void ILGenerator_Emit_m8474 (ILGenerator_t1343 * __this, OpCode_t1372  ___opcode, Label_t1363  ___label, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.Emit.LocalBuilder)
extern "C" void ILGenerator_Emit_m8475 (ILGenerator_t1343 * __this, OpCode_t1372  ___opcode, LocalBuilder_t1364 * ___local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo)
extern "C" void ILGenerator_Emit_m8476 (ILGenerator_t1343 * __this, OpCode_t1372  ___opcode, MethodInfo_t * ___meth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Int32)
extern "C" void ILGenerator_Emit_m8477 (ILGenerator_t1343 * __this, OpCode_t1372  ___opcode, MethodInfo_t * ___method, int32_t ___token, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.String)
extern "C" void ILGenerator_Emit_m8478 (ILGenerator_t1343 * __this, OpCode_t1372  ___opcode, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::Emit(System.Reflection.Emit.OpCode,System.Type)
extern "C" void ILGenerator_Emit_m8479 (ILGenerator_t1343 * __this, OpCode_t1372  ___opcode, Type_t * ___cls, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::EmitCall(System.Reflection.Emit.OpCode,System.Reflection.MethodInfo,System.Type[])
extern "C" void ILGenerator_EmitCall_m8480 (ILGenerator_t1343 * __this, OpCode_t1372  ___opcode, MethodInfo_t * ___methodInfo, TypeU5BU5D_t651* ___optionalParameterTypes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::MarkLabel(System.Reflection.Emit.Label)
extern "C" void ILGenerator_MarkLabel_m8481 (ILGenerator_t1343 * __this, Label_t1363  ___loc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Reflection.Emit.ILGenerator::label_fixup()
extern "C" void ILGenerator_label_fixup_m8482 (ILGenerator_t1343 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Reflection.Emit.ILGenerator::Mono_GetCurrentOffset(System.Reflection.Emit.ILGenerator)
extern "C" int32_t ILGenerator_Mono_GetCurrentOffset_m8483 (Object_t * __this /* static, unused */, ILGenerator_t1343 * ___ig, const MethodInfo* method) IL2CPP_METHOD_ATTR;
