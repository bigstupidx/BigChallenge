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

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t794;
// Mono.Security.ASN1
struct ASN1_t789;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t793;
// System.Byte[]
struct ByteU5BU5D_t759;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m3960 (EncryptedData_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m3961 (EncryptedData_t794 * __this, ASN1_t789 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t793 * EncryptedData_get_EncryptionAlgorithm_m3962 (EncryptedData_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t759* EncryptedData_get_EncryptedContent_m3963 (EncryptedData_t794 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
