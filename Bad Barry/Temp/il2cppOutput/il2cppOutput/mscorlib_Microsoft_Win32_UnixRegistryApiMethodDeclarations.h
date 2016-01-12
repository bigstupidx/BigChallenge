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
struct UnixRegistryApi_t1184;
// System.String
struct String_t;
// Microsoft.Win32.RegistryKey
struct RegistryKey_t1178;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Microsoft.Win32.UnixRegistryApi::.ctor()
extern "C" void UnixRegistryApi__ctor_m6836 (UnixRegistryApi_t1184 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.UnixRegistryApi::ToUnix(System.String)
extern "C" String_t* UnixRegistryApi_ToUnix_m6837 (Object_t * __this /* static, unused */, String_t* ___keyname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.UnixRegistryApi::IsWellKnownKey(System.String,System.String)
extern "C" bool UnixRegistryApi_IsWellKnownKey_m6838 (Object_t * __this /* static, unused */, String_t* ___parentKeyName, String_t* ___keyname, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.UnixRegistryApi::OpenSubKey(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C" RegistryKey_t1178 * UnixRegistryApi_OpenSubKey_m6839 (UnixRegistryApi_t1184 * __this, RegistryKey_t1178 * ___rkey, String_t* ___keyname, bool ___writable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.UnixRegistryApi::Flush(Microsoft.Win32.RegistryKey)
extern "C" void UnixRegistryApi_Flush_m6840 (UnixRegistryApi_t1184 * __this, RegistryKey_t1178 * ___rkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.UnixRegistryApi::Close(Microsoft.Win32.RegistryKey)
extern "C" void UnixRegistryApi_Close_m6841 (UnixRegistryApi_t1184 * __this, RegistryKey_t1178 * ___rkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.UnixRegistryApi::SetValue(Microsoft.Win32.RegistryKey,System.String,System.Object)
extern "C" void UnixRegistryApi_SetValue_m6842 (UnixRegistryApi_t1184 * __this, RegistryKey_t1178 * ___rkey, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.UnixRegistryApi::DeleteValue(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C" void UnixRegistryApi_DeleteValue_m6843 (UnixRegistryApi_t1184 * __this, RegistryKey_t1178 * ___rkey, String_t* ___name, bool ___throw_if_missing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.UnixRegistryApi::ToString(Microsoft.Win32.RegistryKey)
extern "C" String_t* UnixRegistryApi_ToString_m6844 (UnixRegistryApi_t1184 * __this, RegistryKey_t1178 * ___rkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.UnixRegistryApi::CreateSubKey(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C" RegistryKey_t1178 * UnixRegistryApi_CreateSubKey_m6845 (UnixRegistryApi_t1184 * __this, RegistryKey_t1178 * ___rkey, String_t* ___keyname, bool ___writable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
