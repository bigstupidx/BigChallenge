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
struct JsonWriter_t688;
// System.Char[]
struct CharU5BU5D_t261;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "LitJson_LitJson_Condition.h"
#include "mscorlib_System_Decimal.h"

// System.Void LitJson.JsonWriter::.cctor()
extern "C" void JsonWriter__cctor_m3655 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::.ctor()
extern "C" void JsonWriter__ctor_m3656 (JsonWriter_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::DoValidation(LitJson.Condition)
extern "C" void JsonWriter_DoValidation_m3657 (JsonWriter_t688 * __this, int32_t ___cond, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Init()
extern "C" void JsonWriter_Init_m3658 (JsonWriter_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::IntToHex(System.Int32,System.Char[])
extern "C" void JsonWriter_IntToHex_m3659 (Object_t * __this /* static, unused */, int32_t ___n, CharU5BU5D_t261* ___hex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Put(System.String)
extern "C" void JsonWriter_Put_m3660 (JsonWriter_t688 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutNewline()
extern "C" void JsonWriter_PutNewline_m3661 (JsonWriter_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutNewline(System.Boolean)
extern "C" void JsonWriter_PutNewline_m3662 (JsonWriter_t688 * __this, bool ___add_comma, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::PutString(System.String)
extern "C" void JsonWriter_PutString_m3663 (JsonWriter_t688 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LitJson.JsonWriter::ToString()
extern "C" String_t* JsonWriter_ToString_m3664 (JsonWriter_t688 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Decimal)
extern "C" void JsonWriter_Write_m3665 (JsonWriter_t688 * __this, Decimal_t722  ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.Int32)
extern "C" void JsonWriter_Write_m3666 (JsonWriter_t688 * __this, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.String)
extern "C" void JsonWriter_Write_m3667 (JsonWriter_t688 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonWriter::Write(System.UInt64)
extern "C" void JsonWriter_Write_m3668 (JsonWriter_t688 * __this, uint64_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
