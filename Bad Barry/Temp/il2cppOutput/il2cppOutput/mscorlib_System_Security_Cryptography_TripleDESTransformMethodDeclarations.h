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

// System.Security.Cryptography.TripleDESTransform
struct TripleDESTransform_t1695;
// System.Security.Cryptography.TripleDES
struct TripleDES_t983;
// System.Byte[]
struct ByteU5BU5D_t799;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.TripleDESTransform::.ctor(System.Security.Cryptography.TripleDES,System.Boolean,System.Byte[],System.Byte[])
extern "C" void TripleDESTransform__ctor_m10339 (TripleDESTransform_t1695 * __this, TripleDES_t983 * ___algo, bool ___encryption, ByteU5BU5D_t799* ___key, ByteU5BU5D_t799* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.TripleDESTransform::ECB(System.Byte[],System.Byte[])
extern "C" void TripleDESTransform_ECB_m10340 (TripleDESTransform_t1695 * __this, ByteU5BU5D_t799* ___input, ByteU5BU5D_t799* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.TripleDESTransform::GetStrongKey()
extern "C" ByteU5BU5D_t799* TripleDESTransform_GetStrongKey_m10341 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
