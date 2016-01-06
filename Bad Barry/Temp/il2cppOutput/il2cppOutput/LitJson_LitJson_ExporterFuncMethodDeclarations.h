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
struct ExporterFunc_t687;
// System.Object
struct Object_t;
// LitJson.JsonWriter
struct JsonWriter_t688;
// System.IAsyncResult
struct IAsyncResult_t251;
// System.AsyncCallback
struct AsyncCallback_t252;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void LitJson.ExporterFunc::.ctor(System.Object,System.IntPtr)
extern "C" void ExporterFunc__ctor_m3601 (ExporterFunc_t687 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ExporterFunc::Invoke(System.Object,LitJson.JsonWriter)
extern "C" void ExporterFunc_Invoke_m3602 (ExporterFunc_t687 * __this, Object_t * ___obj, JsonWriter_t688 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ExporterFunc_t687(Il2CppObject* delegate, Object_t * ___obj, JsonWriter_t688 * ___writer);
// System.IAsyncResult LitJson.ExporterFunc::BeginInvoke(System.Object,LitJson.JsonWriter,System.AsyncCallback,System.Object)
extern "C" Object_t * ExporterFunc_BeginInvoke_m3603 (ExporterFunc_t687 * __this, Object_t * ___obj, JsonWriter_t688 * ___writer, AsyncCallback_t252 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LitJson.ExporterFunc::EndInvoke(System.IAsyncResult)
extern "C" void ExporterFunc_EndInvoke_m3604 (ExporterFunc_t687 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;