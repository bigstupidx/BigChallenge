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

// LitJson.JsonReader
struct JsonReader_t758;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IO.TextReader
struct TextReader_t761;
// System.Int32[]
struct Int32U5BU5D_t61;

#include "codegen/il2cpp-codegen.h"
#include "LitJson_LitJson_JsonToken.h"
#include "LitJson_LitJson_ParserToken.h"

// LitJson.JsonToken LitJson.JsonReader::get_Token()
extern "C" int32_t JsonReader_get_Token_m3978 (JsonReader_t758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object LitJson.JsonReader::get_Value()
extern "C" Object_t * JsonReader_get_Value_m3979 (JsonReader_t758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.cctor()
extern "C" void JsonReader__cctor_m3980 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.String)
extern "C" void JsonReader__ctor_m3981 (JsonReader_t758 * __this, String_t* ___json_text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::.ctor(System.IO.TextReader,System.Boolean)
extern "C" void JsonReader__ctor_m3982 (JsonReader_t758 * __this, TextReader_t761 * ___reader, bool ___owned, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::PopulateParseTable()
extern "C" void JsonReader_PopulateParseTable_m3983 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::TableAddCol(LitJson.ParserToken,System.Int32,System.Int32[])
extern "C" void JsonReader_TableAddCol_m3984 (Object_t * __this /* static, unused */, int32_t ___row, int32_t ___col, Int32U5BU5D_t61* ___symbols, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::TableAddRow(LitJson.ParserToken)
extern "C" void JsonReader_TableAddRow_m3985 (Object_t * __this /* static, unused */, int32_t ___rule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::ProcessNumber(System.String)
extern "C" void JsonReader_ProcessNumber_m3986 (JsonReader_t758 * __this, String_t* ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::ProcessSymbol()
extern "C" void JsonReader_ProcessSymbol_m3987 (JsonReader_t758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::ReadToken()
extern "C" bool JsonReader_ReadToken_m3988 (JsonReader_t758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonReader::Close()
extern "C" void JsonReader_Close_m3989 (JsonReader_t758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LitJson.JsonReader::Read()
extern "C" bool JsonReader_Read_m3990 (JsonReader_t758 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;