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

// Mono.Security.StrongName
struct StrongName_t1235;
// System.Byte[]
struct ByteU5BU5D_t772;
// System.Security.Cryptography.RSA
struct RSA_t823;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.StrongName::.ctor(System.Byte[])
extern "C" void StrongName__ctor_m7251 (StrongName_t1235 * __this, ByteU5BU5D_t772* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.StrongName::.ctor(System.Security.Cryptography.RSA)
extern "C" void StrongName__ctor_m7252 (StrongName_t1235 * __this, RSA_t823 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.StrongName::.cctor()
extern "C" void StrongName__cctor_m7253 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.StrongName::InvalidateCache()
extern "C" void StrongName_InvalidateCache_m7254 (StrongName_t1235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.StrongName::set_RSA(System.Security.Cryptography.RSA)
extern "C" void StrongName_set_RSA_m7255 (StrongName_t1235 * __this, RSA_t823 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKey()
extern "C" ByteU5BU5D_t772* StrongName_get_PublicKey_m7256 (StrongName_t1235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.StrongName::get_PublicKeyToken()
extern "C" ByteU5BU5D_t772* StrongName_get_PublicKeyToken_m7257 (StrongName_t1235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.StrongName::get_TokenAlgorithm()
extern "C" String_t* StrongName_get_TokenAlgorithm_m7258 (StrongName_t1235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
