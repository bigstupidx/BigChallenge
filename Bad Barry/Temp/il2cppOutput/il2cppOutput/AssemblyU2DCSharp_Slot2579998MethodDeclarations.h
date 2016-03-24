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
struct Slot_t2580000;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t3205101634;
// ItemData
struct ItemData_t1241678205;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UI_UnityEngine_EventSystems_PointerEve3205101634.h"
#include "AssemblyU2DCSharp_ItemData1241678205.h"

// System.Void Slot::.ctor()
extern "C"  void Slot__ctor_m3512544829 (Slot_t2580000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Slot::Start()
extern "C"  void Slot_Start_m2459682621 (Slot_t2580000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Slot::OnDrop(UnityEngine.EventSystems.PointerEventData)
extern "C"  void Slot_OnDrop_m446406985 (Slot_t2580000 * __this, PointerEventData_t3205101634 * ___eventData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Slot::slots2Completed()
extern "C"  bool Slot_slots2Completed_m3338904693 (Slot_t2580000 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Slot::IsInPanel1(ItemData)
extern "C"  bool Slot_IsInPanel1_m2681938234 (Slot_t2580000 * __this, ItemData_t1241678205 * ___droppedItem, const MethodInfo* method) IL2CPP_METHOD_ATTR;
