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

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1218;
// System.String
struct String_t;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1544;
// System.Type
struct Type_t;
// System.Runtime.Remoting.Lifetime.ILease
struct ILease_t1558;
// System.Runtime.Remoting.ObjRef
struct ObjRef_t1610;
// System.MarshalByRefObject
struct MarshalByRefObject_t1067;
// System.Runtime.Remoting.Lifetime.Lease
struct Lease_t1559;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Remoting.ServerIdentity::.ctor(System.String,System.Runtime.Remoting.Contexts.Context,System.Type)
extern "C" void ServerIdentity__ctor_m9840 (ServerIdentity_t1218 * __this, String_t* ___objectUri, Context_t1544 * ___context, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.ServerIdentity::get_ObjectType()
extern "C" Type_t * ServerIdentity_get_ObjectType_m9841 (ServerIdentity_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::StartTrackingLifetime(System.Runtime.Remoting.Lifetime.ILease)
extern "C" void ServerIdentity_StartTrackingLifetime_m9842 (ServerIdentity_t1218 * __this, Object_t * ___lease, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::OnLifetimeExpired()
extern "C" void ServerIdentity_OnLifetimeExpired_m9843 (ServerIdentity_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.ObjRef System.Runtime.Remoting.ServerIdentity::CreateObjRef(System.Type)
extern "C" ObjRef_t1610 * ServerIdentity_CreateObjRef_m9844 (ServerIdentity_t1218 * __this, Type_t * ___requestedType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::AttachServerObject(System.MarshalByRefObject,System.Runtime.Remoting.Contexts.Context)
extern "C" void ServerIdentity_AttachServerObject_m9845 (ServerIdentity_t1218 * __this, MarshalByRefObject_t1067 * ___serverObject, Context_t1544 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Lifetime.Lease System.Runtime.Remoting.ServerIdentity::get_Lease()
extern "C" Lease_t1559 * ServerIdentity_get_Lease_m9846 (ServerIdentity_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ServerIdentity::DisposeServerObject()
extern "C" void ServerIdentity_DisposeServerObject_m9847 (ServerIdentity_t1218 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
