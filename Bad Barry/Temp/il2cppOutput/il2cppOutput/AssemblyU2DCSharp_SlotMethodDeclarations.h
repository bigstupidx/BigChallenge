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
struct Slot_t96;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t157;
// ItemData
struct ItemData_t91;

#include "codegen/il2cpp-codegen.h"

// System.Void Slot::.ctor()
extern "C" void Slot__ctor_m417 (Slot_t96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Slot::Start()
extern "C" void Slot_Start_m418 (Slot_t96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Slot::OnDrop(UnityEngine.EventSystems.PointerEventData)
extern "C" void Slot_OnDrop_m419 (Slot_t96 * __this, PointerEventData_t157 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Slot::slots2Completed()
extern "C" bool Slot_slots2Completed_m420 (Slot_t96 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Slot::IsInPanel1(ItemData)
extern "C" bool Slot_IsInPanel1_m421 (Slot_t96 * __this, ItemData_t91 * ___droppedItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
