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
struct RegistryKey_t1178;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IO.IOException
struct IOException_t968;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_Microsoft_Win32_RegistryHive.h"
#include "mscorlib_System_IntPtr.h"

// System.Void Microsoft.Win32.RegistryKey::.ctor(Microsoft.Win32.RegistryHive)
extern "C" void RegistryKey__ctor_m6792 (RegistryKey_t1178 * __this, int32_t ___hiveId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.ctor(Microsoft.Win32.RegistryHive,System.IntPtr,System.Boolean)
extern "C" void RegistryKey__ctor_m6793 (RegistryKey_t1178 * __this, int32_t ___hiveId, IntPtr_t ___keyHandle, bool ___remoteRoot, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.ctor(System.Object,System.String,System.Boolean)
extern "C" void RegistryKey__ctor_m6794 (RegistryKey_t1178 * __this, Object_t * ___data, String_t* ___keyName, bool ___writable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::.cctor()
extern "C" void RegistryKey__cctor_m6795 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::System.IDisposable.Dispose()
extern "C" void RegistryKey_System_IDisposable_Dispose_m6796 (RegistryKey_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Finalize()
extern "C" void RegistryKey_Finalize_m6797 (RegistryKey_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::get_Name()
extern "C" String_t* RegistryKey_get_Name_m6798 (RegistryKey_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Flush()
extern "C" void RegistryKey_Flush_m6799 (RegistryKey_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::Close()
extern "C" void RegistryKey_Close_m6800 (RegistryKey_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::SetValue(System.String,System.Object)
extern "C" void RegistryKey_SetValue_m6801 (RegistryKey_t1178 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.RegistryKey::OpenSubKey(System.String,System.Boolean)
extern "C" RegistryKey_t1178 * RegistryKey_OpenSubKey_m6802 (RegistryKey_t1178 * __this, String_t* ___name, bool ___writable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::DeleteValue(System.String,System.Boolean)
extern "C" void RegistryKey_DeleteValue_m6803 (RegistryKey_t1178 * __this, String_t* ___name, bool ___throwOnMissingValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::ToString()
extern "C" String_t* RegistryKey_ToString_m6804 (RegistryKey_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.RegistryKey::get_IsRoot()
extern "C" bool RegistryKey_get_IsRoot_m6805 (RegistryKey_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.RegistryKey::get_IsWritable()
extern "C" bool RegistryKey_get_IsWritable_m6806 (RegistryKey_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryHive Microsoft.Win32.RegistryKey::get_Hive()
extern "C" int32_t RegistryKey_get_Hive_m6807 (RegistryKey_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Microsoft.Win32.RegistryKey::get_Handle()
extern "C" Object_t * RegistryKey_get_Handle_m6808 (RegistryKey_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::AssertKeyStillValid()
extern "C" void RegistryKey_AssertKeyStillValid_m6809 (RegistryKey_t1178 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.RegistryKey::AssertKeyNameLength(System.String)
extern "C" void RegistryKey_AssertKeyNameLength_m6810 (RegistryKey_t1178 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.IOException Microsoft.Win32.RegistryKey::CreateMarkedForDeletionException()
extern "C" IOException_t968 * RegistryKey_CreateMarkedForDeletionException_m6811 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.RegistryKey::GetHiveName(Microsoft.Win32.RegistryHive)
extern "C" String_t* RegistryKey_GetHiveName_m6812 (Object_t * __this /* static, unused */, int32_t ___hive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
