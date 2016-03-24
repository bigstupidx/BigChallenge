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

// LitJson.WrapperFactory
struct WrapperFactory_t3863042620;
// System.Object
struct Il2CppObject;
// LitJson.IJsonWrapper
struct IJsonWrapper_t3273732007;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void LitJson.WrapperFactory::.ctor(System.Object,System.IntPtr)
extern "C"  void WrapperFactory__ctor_m1067507964 (WrapperFactory_t3863042620 * __this, Il2CppObject * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.WrapperFactory::Invoke()
extern "C"  Il2CppObject * WrapperFactory_Invoke_m650811940 (WrapperFactory_t3863042620 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Il2CppObject * pinvoke_delegate_wrapper_WrapperFactory_t3863042620(Il2CppObject* delegate);
// System.IAsyncResult LitJson.WrapperFactory::BeginInvoke(System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * WrapperFactory_BeginInvoke_m1958095341 (WrapperFactory_t3863042620 * __this, AsyncCallback_t1363551830 * ___callback, Il2CppObject * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LitJson.IJsonWrapper LitJson.WrapperFactory::EndInvoke(System.IAsyncResult)
extern "C"  Il2CppObject * WrapperFactory_EndInvoke_m419990618 (WrapperFactory_t3863042620 * __this, Il2CppObject * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
