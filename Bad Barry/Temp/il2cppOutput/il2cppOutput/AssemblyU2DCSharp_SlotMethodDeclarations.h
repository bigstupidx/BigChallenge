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
struct Slot_t64;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t95;
// ItemData
struct ItemData_t59;

#include "codegen/il2cpp-codegen.h"

// System.Void Slot::.ctor()
extern "C" void Slot__ctor_m268 (Slot_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Slot::Start()
extern "C" void Slot_Start_m269 (Slot_t64 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Slot::OnDrop(UnityEngine.EventSystems.PointerEventData)
extern "C" void Slot_OnDrop_m270 (Slot_t64 * __this, PointerEventData_t95 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Slot::IsInPanel1(ItemData)
extern "C" bool Slot_IsInPanel1_m271 (Slot_t64 * __this, ItemData_t59 * ___droppedItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
