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

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t98;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t101;
// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_t134;
// UnityEngine.GameObject
struct GameObject_t38;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.EventSystems.BaseEventData::.ctor(UnityEngine.EventSystems.EventSystem)
extern "C" void BaseEventData__ctor_m711 (BaseEventData_t98 * __this, EventSystem_t101 * ___eventSystem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Reset()
extern "C" void BaseEventData_Reset_m712 (BaseEventData_t98 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::Use()
extern "C" void BaseEventData_Use_m713 (BaseEventData_t98 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.EventSystems.BaseEventData::get_used()
extern "C" bool BaseEventData_get_used_m714 (BaseEventData_t98 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventSystems.BaseInputModule UnityEngine.EventSystems.BaseEventData::get_currentInputModule()
extern "C" BaseInputModule_t134 * BaseEventData_get_currentInputModule_m715 (BaseEventData_t98 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.EventSystems.BaseEventData::get_selectedObject()
extern "C" GameObject_t38 * BaseEventData_get_selectedObject_m716 (BaseEventData_t98 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.EventSystems.BaseEventData::set_selectedObject(UnityEngine.GameObject)
extern "C" void BaseEventData_set_selectedObject_m717 (BaseEventData_t98 * __this, GameObject_t38 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
