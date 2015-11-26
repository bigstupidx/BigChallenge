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
struct Slot_t8_41;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t7_36;
// ItemData
struct ItemData_t8_38;

#include "codegen/il2cpp-codegen.h"

// System.Void Slot::.ctor()
extern "C" void Slot__ctor_m8_264 (Slot_t8_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Slot::Start()
extern "C" void Slot_Start_m8_265 (Slot_t8_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Slot::OnDrop(UnityEngine.EventSystems.PointerEventData)
extern "C" void Slot_OnDrop_m8_266 (Slot_t8_41 * __this, PointerEventData_t7_36 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Slot::IsInPanel1(ItemData)
extern "C" bool Slot_IsInPanel1_m8_267 (Slot_t8_41 * __this, ItemData_t8_38 * ___droppedItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
