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

// System.Security.Cryptography.RC2Transform
struct RC2Transform_t1675;
// System.Security.Cryptography.RC2
struct RC2_t985;
// System.Byte[]
struct ByteU5BU5D_t802;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.RC2Transform::.ctor(System.Security.Cryptography.RC2,System.Boolean,System.Byte[],System.Byte[])
extern "C" void RC2Transform__ctor_m10154 (RC2Transform_t1675 * __this, RC2_t985 * ___rc2Algo, bool ___encryption, ByteU5BU5D_t802* ___key, ByteU5BU5D_t802* ___iv, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2Transform::.cctor()
extern "C" void RC2Transform__cctor_m10155 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.RC2Transform::ECB(System.Byte[],System.Byte[])
extern "C" void RC2Transform_ECB_m10156 (RC2Transform_t1675 * __this, ByteU5BU5D_t802* ___input, ByteU5BU5D_t802* ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
