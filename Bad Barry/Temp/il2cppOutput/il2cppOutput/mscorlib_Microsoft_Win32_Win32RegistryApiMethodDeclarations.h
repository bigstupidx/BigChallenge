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

// Microsoft.Win32.Win32RegistryApi
struct Win32RegistryApi_t1230;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t817;
// Microsoft.Win32.RegistryKey
struct RegistryKey_t1223;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_Microsoft_Win32_RegistryValueKind.h"

// System.Void Microsoft.Win32.Win32RegistryApi::.ctor()
extern "C" void Win32RegistryApi__ctor_m7109 (Win32RegistryApi_t1230 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegCloseKey(System.IntPtr)
extern "C" int32_t Win32RegistryApi_RegCloseKey_m7110 (Object_t * __this /* static, unused */, IntPtr_t ___keyHandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegFlushKey(System.IntPtr)
extern "C" int32_t Win32RegistryApi_RegFlushKey_m7111 (Object_t * __this /* static, unused */, IntPtr_t ___keyHandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegOpenKeyEx(System.IntPtr,System.String,System.IntPtr,System.Int32,System.IntPtr&)
extern "C" int32_t Win32RegistryApi_RegOpenKeyEx_m7112 (Object_t * __this /* static, unused */, IntPtr_t ___keyBase, String_t* ___keyName, IntPtr_t ___reserved, int32_t ___access, IntPtr_t* ___keyHandle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegDeleteValue(System.IntPtr,System.String)
extern "C" int32_t Win32RegistryApi_RegDeleteValue_m7113 (Object_t * __this /* static, unused */, IntPtr_t ___keyHandle, String_t* ___valueName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegSetValueEx(System.IntPtr,System.String,System.IntPtr,Microsoft.Win32.RegistryValueKind,System.String,System.Int32)
extern "C" int32_t Win32RegistryApi_RegSetValueEx_m7114 (Object_t * __this /* static, unused */, IntPtr_t ___keyBase, String_t* ___valueName, IntPtr_t ___reserved, int32_t ___type, String_t* ___data, int32_t ___rawDataLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegSetValueEx(System.IntPtr,System.String,System.IntPtr,Microsoft.Win32.RegistryValueKind,System.Byte[],System.Int32)
extern "C" int32_t Win32RegistryApi_RegSetValueEx_m7115 (Object_t * __this /* static, unused */, IntPtr_t ___keyBase, String_t* ___valueName, IntPtr_t ___reserved, int32_t ___type, ByteU5BU5D_t817* ___rawData, int32_t ___rawDataLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Microsoft.Win32.Win32RegistryApi::RegSetValueEx(System.IntPtr,System.String,System.IntPtr,Microsoft.Win32.RegistryValueKind,System.Int32&,System.Int32)
extern "C" int32_t Win32RegistryApi_RegSetValueEx_m7116 (Object_t * __this /* static, unused */, IntPtr_t ___keyBase, String_t* ___valueName, IntPtr_t ___reserved, int32_t ___type, int32_t* ___data, int32_t ___rawDataLength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr Microsoft.Win32.Win32RegistryApi::GetHandle(Microsoft.Win32.RegistryKey)
extern "C" IntPtr_t Win32RegistryApi_GetHandle_m7117 (Object_t * __this /* static, unused */, RegistryKey_t1223 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.Win32RegistryApi::IsHandleValid(Microsoft.Win32.RegistryKey)
extern "C" bool Win32RegistryApi_IsHandleValid_m7118 (Object_t * __this /* static, unused */, RegistryKey_t1223 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.Win32RegistryApi::SetValue(Microsoft.Win32.RegistryKey,System.String,System.Object)
extern "C" void Win32RegistryApi_SetValue_m7119 (Win32RegistryApi_t1230 * __this, RegistryKey_t1223 * ___rkey, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.Win32RegistryApi::OpenSubKey(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C" RegistryKey_t1223 * Win32RegistryApi_OpenSubKey_m7120 (Win32RegistryApi_t1230 * __this, RegistryKey_t1223 * ___rkey, String_t* ___keyName, bool ___writable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.Win32RegistryApi::Flush(Microsoft.Win32.RegistryKey)
extern "C" void Win32RegistryApi_Flush_m7121 (Win32RegistryApi_t1230 * __this, RegistryKey_t1223 * ___rkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.Win32RegistryApi::Close(Microsoft.Win32.RegistryKey)
extern "C" void Win32RegistryApi_Close_m7122 (Win32RegistryApi_t1230 * __this, RegistryKey_t1223 * ___rkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.Win32RegistryApi::DeleteValue(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C" void Win32RegistryApi_DeleteValue_m7123 (Win32RegistryApi_t1230 * __this, RegistryKey_t1223 * ___rkey, String_t* ___value, bool ___shouldThrowWhenKeyMissing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.Win32RegistryApi::GenerateException(System.Int32)
extern "C" void Win32RegistryApi_GenerateException_m7124 (Win32RegistryApi_t1230 * __this, int32_t ___errorCode, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.Win32RegistryApi::ToString(Microsoft.Win32.RegistryKey)
extern "C" String_t* Win32RegistryApi_ToString_m7125 (Win32RegistryApi_t1230 * __this, RegistryKey_t1223 * ___rkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.Win32RegistryApi::CombineName(Microsoft.Win32.RegistryKey,System.String)
extern "C" String_t* Win32RegistryApi_CombineName_m7126 (Object_t * __this /* static, unused */, RegistryKey_t1223 * ___rkey, String_t* ___localName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
