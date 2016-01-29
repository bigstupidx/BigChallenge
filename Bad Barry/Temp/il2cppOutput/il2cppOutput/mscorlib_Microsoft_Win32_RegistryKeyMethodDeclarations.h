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

// Microsoft.Win32.RegistryKey
struct RegistryKey_t1208;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IO.IOException
struct IOException_t998;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Microsoft_Win32_RegistryHive.h"
#include "mscorlib_System_IntPtr.h"

// System.Void Microsoft.Win32.RegistryKey::.ctor(Microsoft.Win32.RegistryHive)
extern "C" void RegistryKey__ctor_m6973 (RegistryKey_t1208 * __this, int32_t ___hiveId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.ctor(Microsoft.Win32.RegistryHive,System.IntPtr,System.Boolean)
extern "C" void RegistryKey__ctor_m6974 (RegistryKey_t1208 * __this, int32_t ___hiveId, IntPtr_t ___keyHandle, bool ___remoteRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.ctor(System.Object,System.String,System.Boolean)
extern "C" void RegistryKey__ctor_m6975 (RegistryKey_t1208 * __this, Object_t * ___data, String_t* ___keyName, bool ___writable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.cctor()
extern "C" void RegistryKey__cctor_m6976 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::System.IDisposable.Dispose()
extern "C" void RegistryKey_System_IDisposable_Dispose_m6977 (RegistryKey_t1208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Finalize()
extern "C" void RegistryKey_Finalize_m6978 (RegistryKey_t1208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::get_Name()
extern "C" String_t* RegistryKey_get_Name_m6979 (RegistryKey_t1208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Flush()
extern "C" void RegistryKey_Flush_m6980 (RegistryKey_t1208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Close()
extern "C" void RegistryKey_Close_m6981 (RegistryKey_t1208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::SetValue(System.String,System.Object)
extern "C" void RegistryKey_SetValue_m6982 (RegistryKey_t1208 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.RegistryKey::OpenSubKey(System.String,System.Boolean)
extern "C" RegistryKey_t1208 * RegistryKey_OpenSubKey_m6983 (RegistryKey_t1208 * __this, String_t* ___name, bool ___writable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::DeleteValue(System.String,System.Boolean)
extern "C" void RegistryKey_DeleteValue_m6984 (RegistryKey_t1208 * __this, String_t* ___name, bool ___throwOnMissingValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::ToString()
extern "C" String_t* RegistryKey_ToString_m6985 (RegistryKey_t1208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.RegistryKey::get_IsRoot()
extern "C" bool RegistryKey_get_IsRoot_m6986 (RegistryKey_t1208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.RegistryKey::get_IsWritable()
extern "C" bool RegistryKey_get_IsWritable_m6987 (RegistryKey_t1208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryHive Microsoft.Win32.RegistryKey::get_Hive()
extern "C" int32_t RegistryKey_get_Hive_m6988 (RegistryKey_t1208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Microsoft.Win32.RegistryKey::get_Handle()
extern "C" Object_t * RegistryKey_get_Handle_m6989 (RegistryKey_t1208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::AssertKeyStillValid()
extern "C" void RegistryKey_AssertKeyStillValid_m6990 (RegistryKey_t1208 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::AssertKeyNameLength(System.String)
extern "C" void RegistryKey_AssertKeyNameLength_m6991 (RegistryKey_t1208 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.IOException Microsoft.Win32.RegistryKey::CreateMarkedForDeletionException()
extern "C" IOException_t998 * RegistryKey_CreateMarkedForDeletionException_m6992 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::GetHiveName(Microsoft.Win32.RegistryHive)
extern "C" String_t* RegistryKey_GetHiveName_m6993 (Object_t * __this /* static, unused */, int32_t ___hive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
