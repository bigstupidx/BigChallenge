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

// LitJson.JsonReader
struct JsonReader_t2865939728;
// System.Object
struct Il2CppObject;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1534522647;
// System.Int32[]
struct Int32U5BU5D_t1809983122;

#include "codegen/il2cpp-codegen.h"
#include "LitJson_LitJson_JsonToken1374409462.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_System_IO_TextReader1534522647.h"
#include "LitJson_LitJson_ParserToken2310927903.h"

// LitJson.JsonToken LitJson.JsonReader::get_Token()
extern "C"  int32_t JsonReader_get_Token_m340664751 (JsonReader_t2865939728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonReader::get_Value()
extern "C"  Il2CppObject * JsonReader_get_Value_m950067043 (JsonReader_t2865939728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.cctor()
extern "C"  void JsonReader__cctor_m1442341339 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.String)
extern "C"  void JsonReader__ctor_m2087739440 (JsonReader_t2865939728 * __this, String_t* ___json_text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
extern "C"  void JsonReader__ctor_m3780280964 (JsonReader_t2865939728 * __this, TextReader_t1534522647 * ___reader, bool ___owned, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::PopulateParseTable()
extern "C"  void JsonReader_PopulateParseTable_m360057175 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
extern "C"  void JsonReader_TableAddCol_m3371401192 (Il2CppObject * __this /* static, unused */, int32_t ___row, int32_t ___col, Int32U5BU5D_t1809983122* ___symbols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
extern "C"  void JsonReader_TableAddRow_m123437648 (Il2CppObject * __this /* static, unused */, int32_t ___rule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
extern "C"  void JsonReader_ProcessNumber_m3141853498 (JsonReader_t2865939728 * __this, String_t* ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::ProcessSymbol()
extern "C"  void JsonReader_ProcessSymbol_m3890791767 (JsonReader_t2865939728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::ReadToken()
extern "C"  bool JsonReader_ReadToken_m1885543997 (JsonReader_t2865939728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::Close()
extern "C"  void JsonReader_Close_m1080201512 (JsonReader_t2865939728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::Read()
extern "C"  bool JsonReader_Read_m3716278654 (JsonReader_t2865939728 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
