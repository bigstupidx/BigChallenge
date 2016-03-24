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

// LitJson.JsonWriter
struct JsonWriter_t3021344960;
// System.Char[]
struct CharU5BU5D_t3416858730;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "LitJson_LitJson_Condition1606128160.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_Decimal1688557254.h"

// System.Void LitJson.JsonWriter::.cctor()
extern "C"  void JsonWriter__cctor_m1158992267 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::.ctor()
extern "C"  void JsonWriter__ctor_m52938338 (JsonWriter_t3021344960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
extern "C"  void JsonWriter_DoValidation_m1443221920 (JsonWriter_t3021344960 * __this, int32_t ___cond, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Init()
extern "C"  void JsonWriter_Init_m784528306 (JsonWriter_t3021344960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
extern "C"  void JsonWriter_IntToHex_m3949697945 (Il2CppObject * __this /* static, unused */, int32_t ___n, CharU5BU5D_t3416858730* ___hex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Put(System.String)
extern "C"  void JsonWriter_Put_m1880069331 (JsonWriter_t3021344960 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutNewline()
extern "C"  void JsonWriter_PutNewline_m1237710887 (JsonWriter_t3021344960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
extern "C"  void JsonWriter_PutNewline_m2395463006 (JsonWriter_t3021344960 * __this, bool ___add_comma, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutString(System.String)
extern "C"  void JsonWriter_PutString_m306582274 (JsonWriter_t3021344960 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonWriter::ToString()
extern "C"  String_t* JsonWriter_ToString_m1656675505 (JsonWriter_t3021344960 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Decimal)
extern "C"  void JsonWriter_Write_m947894477 (JsonWriter_t3021344960 * __this, Decimal_t1688557254  ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Int32)
extern "C"  void JsonWriter_Write_m295913072 (JsonWriter_t3021344960 * __this, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.String)
extern "C"  void JsonWriter_Write_m1040069059 (JsonWriter_t3021344960 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.UInt64)
extern "C"  void JsonWriter_Write_m1580601148 (JsonWriter_t3021344960 * __this, uint64_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
