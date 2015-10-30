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

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t866;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t603;
// System.String
struct String_t;
// System.Collections.ArrayList
struct ArrayList_t675;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Specialized.NameValueCollection::.ctor()
extern "C" void NameValueCollection__ctor_m4455 (NameValueCollection_t866 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NameValueCollection__ctor_m4456 (NameValueCollection_t866 * __this, SerializationInfo_t603 * ___info, StreamingContext_t604  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String)
extern "C" void NameValueCollection_Add_m4457 (NameValueCollection_t866 * __this, String_t* ___name, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32)
extern "C" String_t* NameValueCollection_Get_m4458 (NameValueCollection_t866 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::AsSingleString(System.Collections.ArrayList)
extern "C" String_t* NameValueCollection_AsSingleString_m4459 (Object_t * __this /* static, unused */, ArrayList_t675 * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32)
extern "C" String_t* NameValueCollection_GetKey_m4460 (NameValueCollection_t866 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::InvalidateCachedArrays()
extern "C" void NameValueCollection_InvalidateCachedArrays_m4461 (NameValueCollection_t866 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
