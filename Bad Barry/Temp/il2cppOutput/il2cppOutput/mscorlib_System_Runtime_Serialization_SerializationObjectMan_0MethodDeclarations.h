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

// System.Runtime.Serialization.SerializationObjectManager
struct SerializationObjectManager_t1630;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.SerializationObjectManager::.ctor(System.Runtime.Serialization.StreamingContext)
extern "C" void SerializationObjectManager__ctor_m9989 (SerializationObjectManager_t1630 * __this, StreamingContext_t682  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationObjectManager::RegisterObject(System.Object)
extern "C" void SerializationObjectManager_RegisterObject_m9990 (SerializationObjectManager_t1630 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationObjectManager::RaiseOnSerializedEvent()
extern "C" void SerializationObjectManager_RaiseOnSerializedEvent_m9991 (SerializationObjectManager_t1630 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
