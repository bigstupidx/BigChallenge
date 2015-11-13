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

// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t226;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t228;
// System.AsyncCallback
struct AsyncCallback_t229;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void UnityEngine.UI.InputField/OnValidateInput::.ctor(System.Object,System.IntPtr)
extern "C" void OnValidateInput__ctor_m1089 (OnValidateInput_t226 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField/OnValidateInput::Invoke(System.String,System.Int32,System.Char)
extern "C" uint16_t OnValidateInput_Invoke_m1090 (OnValidateInput_t226 * __this, String_t* ___text, int32_t ___charIndex, uint16_t ___addedChar, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" uint16_t pinvoke_delegate_wrapper_OnValidateInput_t226(Il2CppObject* delegate, String_t* ___text, int32_t ___charIndex, uint16_t ___addedChar);
// System.IAsyncResult UnityEngine.UI.InputField/OnValidateInput::BeginInvoke(System.String,System.Int32,System.Char,System.AsyncCallback,System.Object)
extern "C" Object_t * OnValidateInput_BeginInvoke_m1091 (OnValidateInput_t226 * __this, String_t* ___text, int32_t ___charIndex, uint16_t ___addedChar, AsyncCallback_t229 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField/OnValidateInput::EndInvoke(System.IAsyncResult)
extern "C" uint16_t OnValidateInput_EndInvoke_m1092 (OnValidateInput_t226 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
