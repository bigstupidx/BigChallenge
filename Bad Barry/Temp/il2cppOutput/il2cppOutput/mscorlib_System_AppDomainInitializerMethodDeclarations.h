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

// System.AppDomainInitializer
struct AppDomainInitializer_t1668;
// System.Object
struct Object_t;
// System.String[]
struct StringU5BU5D_t573;
// System.IAsyncResult
struct IAsyncResult_t228;
// System.AsyncCallback
struct AsyncCallback_t229;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_String.h"

// System.Void System.AppDomainInitializer::.ctor(System.Object,System.IntPtr)
extern "C" void AppDomainInitializer__ctor_m10870 (AppDomainInitializer_t1668 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::Invoke(System.String[])
extern "C" void AppDomainInitializer_Invoke_m10871 (AppDomainInitializer_t1668 * __this, StringU5BU5D_t573* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_AppDomainInitializer_t1668(Il2CppObject* delegate, StringU5BU5D_t573* ___args);
// System.IAsyncResult System.AppDomainInitializer::BeginInvoke(System.String[],System.AsyncCallback,System.Object)
extern "C" Object_t * AppDomainInitializer_BeginInvoke_m10872 (AppDomainInitializer_t1668 * __this, StringU5BU5D_t573* ___args, AsyncCallback_t229 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomainInitializer::EndInvoke(System.IAsyncResult)
extern "C" void AppDomainInitializer_EndInvoke_m10873 (AppDomainInitializer_t1668 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
