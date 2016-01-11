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

// System.Runtime.Remoting.Messaging.MonoMethodMessage
struct MonoMethodMessage_t1510;
// System.Collections.IDictionary
struct IDictionary_t732;
// System.Object[]
struct ObjectU5BU5D_t142;
// System.Runtime.Remoting.Messaging.LogicalCallContext
struct LogicalCallContext_t1520;
// System.Reflection.MethodBase
struct MethodBase_t675;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t115;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Remoting_Messaging_CallType.h"

// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Properties()
extern "C" Object_t * MonoMethodMessage_get_Properties_m9258 (MonoMethodMessage_t1510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ArgCount()
extern "C" int32_t MonoMethodMessage_get_ArgCount_m9259 (MonoMethodMessage_t1510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Args()
extern "C" ObjectU5BU5D_t142* MonoMethodMessage_get_Args_m9260 (MonoMethodMessage_t1510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.LogicalCallContext System.Runtime.Remoting.Messaging.MonoMethodMessage::get_LogicalCallContext()
extern "C" LogicalCallContext_t1520 * MonoMethodMessage_get_LogicalCallContext_m9261 (MonoMethodMessage_t1510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodBase System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodBase()
extern "C" MethodBase_t675 * MonoMethodMessage_get_MethodBase_m9262 (MonoMethodMessage_t1510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodName()
extern "C" String_t* MonoMethodMessage_get_MethodName_m9263 (MonoMethodMessage_t1510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_MethodSignature()
extern "C" Object_t * MonoMethodMessage_get_MethodSignature_m9264 (MonoMethodMessage_t1510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_TypeName()
extern "C" String_t* MonoMethodMessage_get_TypeName_m9265 (MonoMethodMessage_t1510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Uri()
extern "C" String_t* MonoMethodMessage_get_Uri_m9266 (MonoMethodMessage_t1510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MonoMethodMessage::set_Uri(System.String)
extern "C" void MonoMethodMessage_set_Uri_m9267 (MonoMethodMessage_t1510 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::GetArg(System.Int32)
extern "C" Object_t * MonoMethodMessage_GetArg_m9268 (MonoMethodMessage_t1510 * __this, int32_t ___arg_num, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Runtime.Remoting.Messaging.MonoMethodMessage::get_Exception()
extern "C" Exception_t115 * MonoMethodMessage_get_Exception_m9269 (MonoMethodMessage_t1510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgCount()
extern "C" int32_t MonoMethodMessage_get_OutArgCount_m9270 (MonoMethodMessage_t1510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.MonoMethodMessage::get_OutArgs()
extern "C" ObjectU5BU5D_t142* MonoMethodMessage_get_OutArgs_m9271 (MonoMethodMessage_t1510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MonoMethodMessage::get_ReturnValue()
extern "C" Object_t * MonoMethodMessage_get_ReturnValue_m9272 (MonoMethodMessage_t1510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.CallType System.Runtime.Remoting.Messaging.MonoMethodMessage::get_CallType()
extern "C" int32_t MonoMethodMessage_get_CallType_m9273 (MonoMethodMessage_t1510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
