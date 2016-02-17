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

// LitJson.JsonException
struct JsonException_t744;
// System.Exception
struct Exception_t170;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "LitJson_LitJson_ParserToken.h"

// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
extern "C" void JsonException__ctor_m3955 (JsonException_t744 * __this, int32_t ___token, Exception_t170 * ___inner_exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.Int32)
extern "C" void JsonException__ctor_m3956 (JsonException_t744 * __this, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.String)
extern "C" void JsonException__ctor_m3957 (JsonException_t744 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
