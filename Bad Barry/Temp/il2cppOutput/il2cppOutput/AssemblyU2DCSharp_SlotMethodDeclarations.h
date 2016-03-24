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

// Slot
struct Slot_t90;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t151;
// ItemData
struct ItemData_t85;

#include "codegen/il2cpp-codegen.h"

// System.Void Slot::.ctor()
extern "C" void Slot__ctor_m392 (Slot_t90 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Slot::Start()
extern "C" void Slot_Start_m393 (Slot_t90 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Slot::OnDrop(UnityEngine.EventSystems.PointerEventData)
extern "C" void Slot_OnDrop_m394 (Slot_t90 * __this, PointerEventData_t151 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Slot::slots2Completed()
extern "C" bool Slot_slots2Completed_m395 (Slot_t90 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Slot::IsInPanel1(ItemData)
extern "C" bool Slot_IsInPanel1_m396 (Slot_t90 * __this, ItemData_t85 * ___droppedItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
