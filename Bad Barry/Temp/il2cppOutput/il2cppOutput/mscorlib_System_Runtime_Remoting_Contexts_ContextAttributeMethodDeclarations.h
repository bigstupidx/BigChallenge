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

// System.Runtime.Remoting.Contexts.ContextAttribute
struct ContextAttribute_t1486;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1494;
// System.Runtime.Remoting.Activation.IConstructionCallMessage
struct IConstructionCallMessage_t1851;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::.ctor(System.String)
extern "C" void ContextAttribute__ctor_m9181 (ContextAttribute_t1486 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Contexts.ContextAttribute::get_Name()
extern "C" String_t* ContextAttribute_get_Name_m9182 (ContextAttribute_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::Equals(System.Object)
extern "C" bool ContextAttribute_Equals_m9183 (ContextAttribute_t1486 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::Freeze(System.Runtime.Remoting.Contexts.Context)
extern "C" void ContextAttribute_Freeze_m9184 (ContextAttribute_t1486 * __this, Context_t1494 * ___newContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Contexts.ContextAttribute::GetHashCode()
extern "C" int32_t ContextAttribute_GetHashCode_m9185 (ContextAttribute_t1486 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Contexts.ContextAttribute::GetPropertiesForNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" void ContextAttribute_GetPropertiesForNewContext_m9186 (ContextAttribute_t1486 * __this, Object_t * ___ctorMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::IsContextOK(System.Runtime.Remoting.Contexts.Context,System.Runtime.Remoting.Activation.IConstructionCallMessage)
extern "C" bool ContextAttribute_IsContextOK_m9187 (ContextAttribute_t1486 * __this, Context_t1494 * ___ctx, Object_t * ___ctorMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Contexts.ContextAttribute::IsNewContextOK(System.Runtime.Remoting.Contexts.Context)
extern "C" bool ContextAttribute_IsNewContextOK_m9188 (ContextAttribute_t1486 * __this, Context_t1494 * ___newCtx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
