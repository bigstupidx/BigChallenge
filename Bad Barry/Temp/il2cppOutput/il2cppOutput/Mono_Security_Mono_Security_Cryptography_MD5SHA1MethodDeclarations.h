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

// Mono.Security.Cryptography.MD5SHA1
struct MD5SHA1_t898;
// System.Byte[]
struct ByteU5BU5D_t817;
// System.Security.Cryptography.RSA
struct RSA_t868;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.MD5SHA1::.ctor()
extern "C" void MD5SHA1__ctor_m4572 (MD5SHA1_t898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::Initialize()
extern "C" void MD5SHA1_Initialize_m4573 (MD5SHA1_t898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::HashFinal()
extern "C" ByteU5BU5D_t817* MD5SHA1_HashFinal_m4574 (MD5SHA1_t898 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.MD5SHA1::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void MD5SHA1_HashCore_m4575 (MD5SHA1_t898 * __this, ByteU5BU5D_t817* ___array, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.MD5SHA1::CreateSignature(System.Security.Cryptography.RSA)
extern "C" ByteU5BU5D_t817* MD5SHA1_CreateSignature_m4576 (MD5SHA1_t898 * __this, RSA_t868 * ___rsa, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Cryptography.MD5SHA1::VerifySignature(System.Security.Cryptography.RSA,System.Byte[])
extern "C" bool MD5SHA1_VerifySignature_m4577 (MD5SHA1_t898 * __this, RSA_t868 * ___rsa, ByteU5BU5D_t817* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;