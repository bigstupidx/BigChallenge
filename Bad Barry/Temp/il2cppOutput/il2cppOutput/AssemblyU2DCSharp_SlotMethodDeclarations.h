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
struct Slot_t69;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t105;
// ItemData
struct ItemData_t64;

#include "codegen/il2cpp-codegen.h"

// System.Void Slot::.ctor()
extern "C" void Slot__ctor_m283 (Slot_t69 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Slot::Start()
extern "C" void Slot_Start_m284 (Slot_t69 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Slot::OnDrop(UnityEngine.EventSystems.PointerEventData)
extern "C" void Slot_OnDrop_m285 (Slot_t69 * __this, PointerEventData_t105 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Slot::IsInPanel1(ItemData)
extern "C" bool Slot_IsInPanel1_m286 (Slot_t69 * __this, ItemData_t64 * ___droppedItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
