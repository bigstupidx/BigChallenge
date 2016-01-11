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

// System.MarshalByRefObject
struct MarshalByRefObject_t1017;
// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1168;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1551;
// System.Type
struct Type_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.MarshalByRefObject::.ctor()
extern "C" void MarshalByRefObject__ctor_m5854 (MarshalByRefObject_t1017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ServerIdentity System.MarshalByRefObject::get_ObjectIdentity()
extern "C" ServerIdentity_t1168 * MarshalByRefObject_get_ObjectIdentity_m6772 (MarshalByRefObject_t1017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MarshalByRefObject::set_ObjectIdentity(System.Runtime.Remoting.ServerIdentity)
extern "C" void MarshalByRefObject_set_ObjectIdentity_m6773 (MarshalByRefObject_t1017 * __this, ServerIdentity_t1168 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.MarshalByRefObject::CreateObjRef(System.Type)
extern "C" ObjRef_t1551 * MarshalByRefObject_CreateObjRef_m6774 (MarshalByRefObject_t1017 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.MarshalByRefObject::InitializeLifetimeService()
extern "C" Object_t * MarshalByRefObject_InitializeLifetimeService_m6775 (MarshalByRefObject_t1017 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
