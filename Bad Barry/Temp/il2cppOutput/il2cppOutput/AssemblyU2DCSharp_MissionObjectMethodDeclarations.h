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

// MissionObject
struct MissionObject_t38;
// UnityEngine.Collider2D
struct Collider2D_t134;

#include "codegen/il2cpp-codegen.h"

// System.Void MissionObject::.ctor()
extern "C" void MissionObject__ctor_m155 (MissionObject_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionObject::Start()
extern "C" void MissionObject_Start_m156 (MissionObject_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionObject::Update()
extern "C" void MissionObject_Update_m157 (MissionObject_t38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MissionObject::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void MissionObject_OnTriggerEnter2D_m158 (MissionObject_t38 * __this, Collider2D_t134 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
