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

// LitJson.ExporterFunc
struct ExporterFunc_t282942218;
// System.Object
struct Il2CppObject;
// LitJson.JsonWriter
struct JsonWriter_t3021344960;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "LitJson_LitJson_JsonWriter3021344960.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
extern "C"  void ExporterFunc__ctor_m657802314 (ExporterFunc_t282942218 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
extern "C"  void ExporterFunc_Invoke_m4274113196 (ExporterFunc_t282942218 * __this, Il2CppObject * ___obj, JsonWriter_t3021344960 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ExporterFunc_t282942218(Il2CppObject* delegate, Il2CppObject * ___obj, JsonWriter_t3021344960 * ___writer);
// System.IAsyncResult LitJson.ExporterFunc::BeginInvoke(System.Object,LitJson.JsonWriter,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * ExporterFunc_BeginInvoke_m641377751 (ExporterFunc_t282942218 * __this, Il2CppObject * ___obj, JsonWriter_t3021344960 * ___writer, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ExporterFunc::EndInvoke(System.IAsyncResult)
extern "C"  void ExporterFunc_EndInvoke_m1771727706 (ExporterFunc_t282942218 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
