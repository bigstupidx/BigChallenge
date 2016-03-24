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
struct JsonException_t3636936012;
// System.Exception
struct Exception_t1967233988;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "LitJson_LitJson_ParserToken2310927903.h"
#include "mscorlib_System_Exception1967233988.h"
#include "mscorlib_System_String968488902.h"

// System.Void LitJson.JsonException::.ctor(LitJson.ParserToken,System.Exception)
extern "C"  void JsonException__ctor_m1122554673 (JsonException_t3636936012 * __this, int32_t ___token, Exception_t1967233988 * ___inner_exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.Int32)
extern "C"  void JsonException__ctor_m3681649971 (JsonException_t3636936012 * __this, int32_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.JsonException::.ctor(System.String)
extern "C"  void JsonException__ctor_m2918697824 (JsonException_t3636936012 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
