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

// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1241;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t772;
// Mono.Security.ASN1
struct ASN1_t1230;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.PKCS7/ContentInfo::.ctor()
extern "C" void ContentInfo__ctor_m7313 (ContentInfo_t1241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.String)
extern "C" void ContentInfo__ctor_m7314 (ContentInfo_t1241 * __this, String_t* ___oid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(System.Byte[])
extern "C" void ContentInfo__ctor_m7315 (ContentInfo_t1241 * __this, ByteU5BU5D_t772* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::.ctor(Mono.Security.ASN1)
extern "C" void ContentInfo__ctor_m7316 (ContentInfo_t1241 * __this, ASN1_t1230 * ___asn1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_ASN1()
extern "C" ASN1_t1230 * ContentInfo_get_ASN1_m7317 (ContentInfo_t1241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::get_Content()
extern "C" ASN1_t1230 * ContentInfo_get_Content_m7318 (ContentInfo_t1241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::set_Content(Mono.Security.ASN1)
extern "C" void ContentInfo_set_Content_m7319 (ContentInfo_t1241 * __this, ASN1_t1230 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.PKCS7/ContentInfo::get_ContentType()
extern "C" String_t* ContentInfo_get_ContentType_m7320 (ContentInfo_t1241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.PKCS7/ContentInfo::set_ContentType(System.String)
extern "C" void ContentInfo_set_ContentType_m7321 (ContentInfo_t1241 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.PKCS7/ContentInfo::GetASN1()
extern "C" ASN1_t1230 * ContentInfo_GetASN1_m7322 (ContentInfo_t1241 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
