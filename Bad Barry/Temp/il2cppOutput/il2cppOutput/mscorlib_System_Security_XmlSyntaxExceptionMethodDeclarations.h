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

// System.Security.XmlSyntaxException
struct XmlSyntaxException_t1721;
// System.String
struct String_t;
// System.Exception
struct Exception_t145;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t681;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.XmlSyntaxException::.ctor()
extern "C" void XmlSyntaxException__ctor_m10450 (XmlSyntaxException_t1721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.XmlSyntaxException::.ctor(System.String)
extern "C" void XmlSyntaxException__ctor_m10451 (XmlSyntaxException_t1721 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.XmlSyntaxException::.ctor(System.String,System.Exception)
extern "C" void XmlSyntaxException__ctor_m10452 (XmlSyntaxException_t1721 * __this, String_t* ___message, Exception_t145 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.XmlSyntaxException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void XmlSyntaxException__ctor_m10453 (XmlSyntaxException_t1721 * __this, SerializationInfo_t681 * ___info, StreamingContext_t682  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
