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

// Microsoft.Win32.KeyHandler
struct KeyHandler_t1228;
// Microsoft.Win32.RegistryKey
struct RegistryKey_t1223;
// System.String
struct String_t;
// System.Security.SecurityElement
struct SecurityElement_t1292;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Microsoft.Win32.KeyHandler::.ctor(Microsoft.Win32.RegistryKey,System.String)
extern "C" void KeyHandler__ctor_m7078 (KeyHandler_t1228 * __this, RegistryKey_t1223 * ___rkey, String_t* ___basedir, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::.cctor()
extern "C" void KeyHandler__cctor_m7079 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::Load()
extern "C" void KeyHandler_Load_m7080 (KeyHandler_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::LoadKey(System.Security.SecurityElement)
extern "C" void KeyHandler_LoadKey_m7081 (KeyHandler_t1228 * __this, SecurityElement_t1292 * ___se, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.KeyHandler::Ensure(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C" RegistryKey_t1223 * KeyHandler_Ensure_m7082 (KeyHandler_t1228 * __this, RegistryKey_t1223 * ___rkey, String_t* ___extra, bool ___writable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.RegistryKey Microsoft.Win32.KeyHandler::Probe(Microsoft.Win32.RegistryKey,System.String,System.Boolean)
extern "C" RegistryKey_t1223 * KeyHandler_Probe_m7083 (KeyHandler_t1228 * __this, RegistryKey_t1223 * ___rkey, String_t* ___extra, bool ___writable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.KeyHandler::CombineName(Microsoft.Win32.RegistryKey,System.String)
extern "C" String_t* KeyHandler_CombineName_m7084 (Object_t * __this /* static, unused */, RegistryKey_t1223 * ___rkey, String_t* ___extra, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Microsoft.Win32.KeyHandler Microsoft.Win32.KeyHandler::Lookup(Microsoft.Win32.RegistryKey,System.Boolean)
extern "C" KeyHandler_t1228 * KeyHandler_Lookup_m7085 (Object_t * __this /* static, unused */, RegistryKey_t1223 * ___rkey, bool ___createNonExisting, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::Drop(Microsoft.Win32.RegistryKey)
extern "C" void KeyHandler_Drop_m7086 (Object_t * __this /* static, unused */, RegistryKey_t1223 * ___rkey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::SetValue(System.String,System.Object)
extern "C" void KeyHandler_SetValue_m7087 (KeyHandler_t1228 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::SetDirty()
extern "C" void KeyHandler_SetDirty_m7088 (KeyHandler_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::DirtyTimeout(System.Object)
extern "C" void KeyHandler_DirtyTimeout_m7089 (KeyHandler_t1228 * __this, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::Flush()
extern "C" void KeyHandler_Flush_m7090 (KeyHandler_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.KeyHandler::ValueExists(System.String)
extern "C" bool KeyHandler_ValueExists_m7091 (KeyHandler_t1228 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Microsoft.Win32.KeyHandler::get_IsMarkedForDeletion()
extern "C" bool KeyHandler_get_IsMarkedForDeletion_m7092 (KeyHandler_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::RemoveValue(System.String)
extern "C" void KeyHandler_RemoveValue_m7093 (KeyHandler_t1228 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::Finalize()
extern "C" void KeyHandler_Finalize_m7094 (KeyHandler_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::Save()
extern "C" void KeyHandler_Save_m7095 (KeyHandler_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Microsoft.Win32.KeyHandler::AssertNotMarkedForDeletion()
extern "C" void KeyHandler_AssertNotMarkedForDeletion_m7096 (KeyHandler_t1228 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.KeyHandler::get_UserStore()
extern "C" String_t* KeyHandler_get_UserStore_m7097 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Microsoft.Win32.KeyHandler::get_MachineStore()
extern "C" String_t* KeyHandler_get_MachineStore_m7098 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;