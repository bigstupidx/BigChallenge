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

// System.Runtime.Serialization.ObjectIDGenerator
struct ObjectIDGenerator_t1647;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Runtime.Serialization.ObjectIDGenerator::.ctor()
extern "C" void ObjectIDGenerator__ctor_m9990 (ObjectIDGenerator_t1647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectIDGenerator::.cctor()
extern "C" void ObjectIDGenerator__cctor_m9991 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::GetId(System.Object,System.Boolean&)
extern "C" int64_t ObjectIDGenerator_GetId_m9992 (ObjectIDGenerator_t1647 * __this, Object_t * ___obj, bool* ___firstTime, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Runtime.Serialization.ObjectIDGenerator::get_NextId()
extern "C" int64_t ObjectIDGenerator_get_NextId_m9993 (ObjectIDGenerator_t1647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;