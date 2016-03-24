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

// Microsoft.Win32.UnixRegistryApi
struct UnixRegistryApi_t3952804238;
// System.String
struct String_t;
// Microsoft.Win32.RegistryKey
struct RegistryKey_t2574322811;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String968488902.h"
#include "mscorlib_Microsoft_Win32_RegistryKey2574322811.h"
#include "mscorlib_System_Object837106420.h"

// System.Void Microsoft.Win32.UnixRegistryApi::.ctor()
extern "C"  void UnixRegistryApi__ctor_m396302418 (UnixRegistryApi_t3952804238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.UnixRegistryApi::ToUnix(System.String)
extern "C"  String_t* UnixRegistryApi_ToUnix_m2713600112 (Il2CppObject * __this /* static, unused */, String_t* ___keyname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.UnixRegistryApi::IsWellKnownKey(System.String,System.String)
extern "C"  bool UnixRegistryApi_IsWellKnownKey_m444577338 (Il2CppObject * __this /* static, unused */, String_t* ___parentKeyName, String_t* ___keyname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.UnixRegistryApi::OpenSubKey(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C"  RegistryKey_t2574322811 * UnixRegistryApi_OpenSubKey_m2867838997 (UnixRegistryApi_t3952804238 * __this, RegistryKey_t2574322811 * ___rkey, String_t* ___keyname, bool ___writable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.UnixRegistryApi::Flush(Microsoft.Win32.RegistryKey)
extern "C"  void UnixRegistryApi_Flush_m258029199 (UnixRegistryApi_t3952804238 * __this, RegistryKey_t2574322811 * ___rkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.UnixRegistryApi::Close(Microsoft.Win32.RegistryKey)
extern "C"  void UnixRegistryApi_Close_m618293275 (UnixRegistryApi_t3952804238 * __this, RegistryKey_t2574322811 * ___rkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.UnixRegistryApi::SetValue(Microsoft.Win32.RegistryKey,System.String,System.Object)
extern "C"  void UnixRegistryApi_SetValue_m387295308 (UnixRegistryApi_t3952804238 * __this, RegistryKey_t2574322811 * ___rkey, String_t* ___name, Il2CppObject * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.UnixRegistryApi::DeleteValue(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C"  void UnixRegistryApi_DeleteValue_m4236243284 (UnixRegistryApi_t3952804238 * __this, RegistryKey_t2574322811 * ___rkey, String_t* ___name, bool ___throw_if_missing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.UnixRegistryApi::ToString(Microsoft.Win32.RegistryKey)
extern "C"  String_t* UnixRegistryApi_ToString_m1162573768 (UnixRegistryApi_t3952804238 * __this, RegistryKey_t2574322811 * ___rkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.UnixRegistryApi::CreateSubKey(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C"  RegistryKey_t2574322811 * UnixRegistryApi_CreateSubKey_m2590559111 (UnixRegistryApi_t3952804238 * __this, RegistryKey_t2574322811 * ___rkey, String_t* ___keyname, bool ___writable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
