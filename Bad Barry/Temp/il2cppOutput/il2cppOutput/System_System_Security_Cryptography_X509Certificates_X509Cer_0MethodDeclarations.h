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

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t962;
// System.Byte[]
struct ByteU5BU5D_t772;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t1028;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t1024;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t921;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t1019;
// System.String
struct String_t;
// System.Security.Cryptography.Oid
struct Oid_t1021;
// Mono.Security.ASN1
struct ASN1_t802;
// System.Text.StringBuilder
struct StringBuilder_t393;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t829;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "System_System_Security_Cryptography_X509Certificates_X509Nam.h"
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509K.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[])
extern "C" void X509Certificate2__ctor_m4899 (X509Certificate2_t962 * __this, ByteU5BU5D_t772* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.cctor()
extern "C" void X509Certificate2__cctor_m5167 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection System.Security.Cryptography.X509Certificates.X509Certificate2::get_Extensions()
extern "C" X509ExtensionCollection_t1028 * X509Certificate2_get_Extensions_m5168 (X509Certificate2_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_IssuerName()
extern "C" X500DistinguishedName_t1024 * X509Certificate2_get_IssuerName_m5169 (X509Certificate2_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotAfter()
extern "C" DateTime_t48  X509Certificate2_get_NotAfter_m5170 (X509Certificate2_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotBefore()
extern "C" DateTime_t48  X509Certificate2_get_NotBefore_m5171 (X509Certificate2_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2::get_PrivateKey()
extern "C" AsymmetricAlgorithm_t921 * X509Certificate2_get_PrivateKey_m4904 (X509Certificate2_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::get_PublicKey()
extern "C" PublicKey_t1019 * X509Certificate2_get_PublicKey_m5172 (X509Certificate2_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_SerialNumber()
extern "C" String_t* X509Certificate2_get_SerialNumber_m5173 (X509Certificate2_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::get_SignatureAlgorithm()
extern "C" Oid_t1021 * X509Certificate2_get_SignatureAlgorithm_m5174 (X509Certificate2_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_SubjectName()
extern "C" X500DistinguishedName_t1024 * X509Certificate2_get_SubjectName_m5175 (X509Certificate2_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_Thumbprint()
extern "C" String_t* X509Certificate2_get_Thumbprint_m5176 (X509Certificate2_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2::get_Version()
extern "C" int32_t X509Certificate2_get_Version_m5177 (X509Certificate2_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType,System.Boolean)
extern "C" String_t* X509Certificate2_GetNameInfo_m5178 (X509Certificate2_t962 * __this, int32_t ___nameType, bool ___forIssuer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 System.Security.Cryptography.X509Certificates.X509Certificate2::Find(System.Byte[],Mono.Security.ASN1)
extern "C" ASN1_t802 * X509Certificate2_Find_m5179 (X509Certificate2_t962 * __this, ByteU5BU5D_t772* ___oid, ASN1_t802 * ___dn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetValueAsString(Mono.Security.ASN1)
extern "C" String_t* X509Certificate2_GetValueAsString_m5180 (X509Certificate2_t962 * __this, ASN1_t802 * ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::ImportPkcs12(System.Byte[],System.String)
extern "C" void X509Certificate2_ImportPkcs12_m5181 (X509Certificate2_t962 * __this, ByteU5BU5D_t772* ___rawData, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate2_Import_m5182 (X509Certificate2_t962 * __this, ByteU5BU5D_t772* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Reset()
extern "C" void X509Certificate2_Reset_m5183 (X509Certificate2_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString()
extern "C" String_t* X509Certificate2_ToString_m5184 (X509Certificate2_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString(System.Boolean)
extern "C" String_t* X509Certificate2_ToString_m5185 (X509Certificate2_t962 * __this, bool ___verbose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::AppendBuffer(System.Text.StringBuilder,System.Byte[])
extern "C" void X509Certificate2_AppendBuffer_m5186 (Object_t * __this /* static, unused */, StringBuilder_t393 * ___sb, ByteU5BU5D_t772* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2::Verify()
extern "C" bool X509Certificate2_Verify_m5187 (X509Certificate2_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2::get_MonoCertificate()
extern "C" X509Certificate_t829 * X509Certificate2_get_MonoCertificate_m5188 (X509Certificate2_t962 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
