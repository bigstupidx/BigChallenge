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

// System.Security.Cryptography.CryptographicException
struct CryptographicException_t656;
// System.String
struct String_t;
// System.Exception
struct Exception_t62;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t603;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.Cryptography.CryptographicException::.ctor()
extern "C" void CryptographicException__ctor_m8854 (CryptographicException_t656 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String)
extern "C" void CryptographicException__ctor_m3341 (CryptographicException_t656 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String,System.Exception)
extern "C" void CryptographicException__ctor_m4292 (CryptographicException_t656 * __this, String_t* ___message, Exception_t62 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.String,System.String)
extern "C" void CryptographicException__ctor_m3350 (CryptographicException_t656 * __this, String_t* ___format, String_t* ___insert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.CryptographicException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void CryptographicException__ctor_m8855 (CryptographicException_t656 * __this, SerializationInfo_t603 * ___info, StreamingContext_t604  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
