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

// System.Security.XmlSyntaxException
struct XmlSyntaxException_t1694;
// System.String
struct String_t;
// System.Exception
struct Exception_t115;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Security.XmlSyntaxException::.ctor()
extern "C" void XmlSyntaxException__ctor_m10272 (XmlSyntaxException_t1694 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.XmlSyntaxException::.ctor(System.String)
extern "C" void XmlSyntaxException__ctor_m10273 (XmlSyntaxException_t1694 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.XmlSyntaxException::.ctor(System.String,System.Exception)
extern "C" void XmlSyntaxException__ctor_m10274 (XmlSyntaxException_t1694 * __this, String_t* ___message, Exception_t115 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.XmlSyntaxException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void XmlSyntaxException__ctor_m10275 (XmlSyntaxException_t1694 * __this, SerializationInfo_t653 * ___info, StreamingContext_t654  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
