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

// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t852;
// Mono.Security.ASN1
struct ASN1_t847;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t851;
// System.Byte[]
struct ByteU5BU5D_t817;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.PKCS7/EncryptedData::.ctor()
extern "C" void EncryptedData__ctor_m4297 (EncryptedData_t852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/EncryptedData::.ctor(Mono.Security.ASN1)
extern "C" void EncryptedData__ctor_m4298 (EncryptedData_t852 * __this, ASN1_t847 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.PKCS7/EncryptedData::get_EncryptionAlgorithm()
extern "C" ContentInfo_t851 * EncryptedData_get_EncryptionAlgorithm_m4299 (EncryptedData_t852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.PKCS7/EncryptedData::get_EncryptedContent()
extern "C" ByteU5BU5D_t817* EncryptedData_get_EncryptedContent_m4300 (EncryptedData_t852 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;