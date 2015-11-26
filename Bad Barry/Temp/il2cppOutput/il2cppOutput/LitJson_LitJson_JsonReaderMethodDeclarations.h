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
struct JsonReader_t5_15;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t1_143;
// System.Int32[]
struct Int32U5BU5D_t1_159;

#include "codegen/il2cpp-codegen.h"
#include "LitJson_LitJson_JsonToken.h"
#include "LitJson_LitJson_ParserToken.h"

// LitJson.JsonToken LitJson.JsonReader::get_Token()
extern "C" int32_t JsonReader_get_Token_m5_96 (JsonReader_t5_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonReader::get_Value()
extern "C" Object_t * JsonReader_get_Value_m5_97 (JsonReader_t5_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.cctor()
extern "C" void JsonReader__cctor_m5_98 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.String)
extern "C" void JsonReader__ctor_m5_99 (JsonReader_t5_15 * __this, String_t* ___json_text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
extern "C" void JsonReader__ctor_m5_100 (JsonReader_t5_15 * __this, TextReader_t1_143 * ___reader, bool ___owned, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::PopulateParseTable()
extern "C" void JsonReader_PopulateParseTable_m5_101 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
extern "C" void JsonReader_TableAddCol_m5_102 (Object_t * __this /* static, unused */, int32_t ___row, int32_t ___col, Int32U5BU5D_t1_159* ___symbols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
extern "C" void JsonReader_TableAddRow_m5_103 (Object_t * __this /* static, unused */, int32_t ___rule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
extern "C" void JsonReader_ProcessNumber_m5_104 (JsonReader_t5_15 * __this, String_t* ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::ProcessSymbol()
extern "C" void JsonReader_ProcessSymbol_m5_105 (JsonReader_t5_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::ReadToken()
extern "C" bool JsonReader_ReadToken_m5_106 (JsonReader_t5_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::Close()
extern "C" void JsonReader_Close_m5_107 (JsonReader_t5_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::Read()
extern "C" bool JsonReader_Read_m5_108 (JsonReader_t5_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
