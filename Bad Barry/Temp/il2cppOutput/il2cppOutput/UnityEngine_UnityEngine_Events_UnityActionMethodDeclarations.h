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

// UnityEngine.Events.UnityAction
struct UnityAction_t222;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t251;
// System.AsyncCallback
struct AsyncCallback_t252;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
extern "C" void UnityAction__ctor_m2187 (UnityAction_t222 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction::Invoke()
extern "C" void UnityAction_Invoke_m2203 (UnityAction_t222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_UnityAction_t222(Il2CppObject* delegate);
// System.IAsyncResult UnityEngine.Events.UnityAction::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * UnityAction_BeginInvoke_m3465 (UnityAction_t222 * __this, AsyncCallback_t252 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Events.UnityAction::EndInvoke(System.IAsyncResult)
extern "C" void UnityAction_EndInvoke_m3466 (UnityAction_t222 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;