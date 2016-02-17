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
struct RegistryKey_t1228;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IO.IOException
struct IOException_t1018;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Microsoft_Win32_RegistryHive.h"
#include "mscorlib_System_IntPtr.h"

// System.Void Microsoft.Win32.RegistryKey::.ctor(Microsoft.Win32.RegistryHive)
extern "C" void RegistryKey__ctor_m7075 (RegistryKey_t1228 * __this, int32_t ___hiveId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.ctor(Microsoft.Win32.RegistryHive,System.IntPtr,System.Boolean)
extern "C" void RegistryKey__ctor_m7076 (RegistryKey_t1228 * __this, int32_t ___hiveId, IntPtr_t ___keyHandle, bool ___remoteRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.ctor(System.Object,System.String,System.Boolean)
extern "C" void RegistryKey__ctor_m7077 (RegistryKey_t1228 * __this, Object_t * ___data, String_t* ___keyName, bool ___writable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.cctor()
extern "C" void RegistryKey__cctor_m7078 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::System.IDisposable.Dispose()
extern "C" void RegistryKey_System_IDisposable_Dispose_m7079 (RegistryKey_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Finalize()
extern "C" void RegistryKey_Finalize_m7080 (RegistryKey_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::get_Name()
extern "C" String_t* RegistryKey_get_Name_m7081 (RegistryKey_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Flush()
extern "C" void RegistryKey_Flush_m7082 (RegistryKey_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Close()
extern "C" void RegistryKey_Close_m7083 (RegistryKey_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::SetValue(System.String,System.Object)
extern "C" void RegistryKey_SetValue_m7084 (RegistryKey_t1228 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.RegistryKey::OpenSubKey(System.String,System.Boolean)
extern "C" RegistryKey_t1228 * RegistryKey_OpenSubKey_m7085 (RegistryKey_t1228 * __this, String_t* ___name, bool ___writable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::DeleteValue(System.String,System.Boolean)
extern "C" void RegistryKey_DeleteValue_m7086 (RegistryKey_t1228 * __this, String_t* ___name, bool ___throwOnMissingValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::ToString()
extern "C" String_t* RegistryKey_ToString_m7087 (RegistryKey_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.RegistryKey::get_IsRoot()
extern "C" bool RegistryKey_get_IsRoot_m7088 (RegistryKey_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.RegistryKey::get_IsWritable()
extern "C" bool RegistryKey_get_IsWritable_m7089 (RegistryKey_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryHive Microsoft.Win32.RegistryKey::get_Hive()
extern "C" int32_t RegistryKey_get_Hive_m7090 (RegistryKey_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Microsoft.Win32.RegistryKey::get_Handle()
extern "C" Object_t * RegistryKey_get_Handle_m7091 (RegistryKey_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::AssertKeyStillValid()
extern "C" void RegistryKey_AssertKeyStillValid_m7092 (RegistryKey_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::AssertKeyNameLength(System.String)
extern "C" void RegistryKey_AssertKeyNameLength_m7093 (RegistryKey_t1228 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.IOException Microsoft.Win32.RegistryKey::CreateMarkedForDeletionException()
extern "C" IOException_t1018 * RegistryKey_CreateMarkedForDeletionException_m7094 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::GetHiveName(Microsoft.Win32.RegistryHive)
extern "C" String_t* RegistryKey_GetHiveName_m7095 (Object_t * __this /* static, unused */, int32_t ___hive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
