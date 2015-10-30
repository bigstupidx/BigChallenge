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

// System.AsyncCallback
struct AsyncCallback_t208;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t207;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.AsyncCallback::.ctor(System.Object,System.IntPtr)
extern "C" void AsyncCallback__ctor_m4355 (AsyncCallback_t208 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AsyncCallback::Invoke(System.IAsyncResult)
extern "C" void AsyncCallback_Invoke_m6214 (AsyncCallback_t208 * __this, Object_t * ___ar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AsyncCallback_t208(Il2CppObject* delegate, Object_t * ___ar);
// System.IAsyncResult System.AsyncCallback::BeginInvoke(System.IAsyncResult,System.AsyncCallback,System.Object)
extern "C" Object_t * AsyncCallback_BeginInvoke_m4353 (AsyncCallback_t208 * __this, Object_t * ___ar, AsyncCallback_t208 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AsyncCallback::EndInvoke(System.IAsyncResult)
extern "C" void AsyncCallback_EndInvoke_m6215 (AsyncCallback_t208 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
