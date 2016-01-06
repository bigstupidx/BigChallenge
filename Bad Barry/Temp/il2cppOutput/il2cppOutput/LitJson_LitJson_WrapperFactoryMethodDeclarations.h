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

// LitJson.WrapperFactory
struct WrapperFactory_t690;
// System.Object
struct Object_t;
// LitJson.IJsonWrapper
struct IJsonWrapper_t691;
// System.IAsyncResult
struct IAsyncResult_t251;
// System.AsyncCallback
struct AsyncCallback_t252;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void LitJson.WrapperFactory::.ctor(System.Object,System.IntPtr)
extern "C" void WrapperFactory__ctor_m3609 (WrapperFactory_t690 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.WrapperFactory::Invoke()
extern "C" Object_t * WrapperFactory_Invoke_m3610 (WrapperFactory_t690 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Object_t * pinvoke_delegate_wrapper_WrapperFactory_t690(Il2CppObject* delegate);
// System.IAsyncResult LitJson.WrapperFactory::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * WrapperFactory_BeginInvoke_m3611 (WrapperFactory_t690 * __this, AsyncCallback_t252 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.WrapperFactory::EndInvoke(System.IAsyncResult)
extern "C" Object_t * WrapperFactory_EndInvoke_m3612 (WrapperFactory_t690 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;