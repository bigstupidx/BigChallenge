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

// System.ApplicationException
struct ApplicationException_t725;
// System.String
struct String_t;
// System.Exception
struct Exception_t145;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t684;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ApplicationException::.ctor()
extern "C" void ApplicationException__ctor_m10841 (ApplicationException_t725 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor(System.String)
extern "C" void ApplicationException__ctor_m3986 (ApplicationException_t725 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor(System.String,System.Exception)
extern "C" void ApplicationException__ctor_m3985 (ApplicationException_t725 * __this, String_t* ___message, Exception_t145 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ApplicationException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ApplicationException__ctor_m10842 (ApplicationException_t725 * __this, SerializationInfo_t684 * ___info, StreamingContext_t685  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
