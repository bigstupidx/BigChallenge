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

// Inventory
struct Inventory_t4278335804;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// Item
struct Item_t2289459;
// UnityEngine.AudioSource
struct AudioSource_t3628549054;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Item2289459.h"
#include "UnityEngine_UnityEngine_AudioSource3628549054.h"

// System.Void Inventory::.ctor()
extern "C"  void Inventory__ctor_m3686760367 (Inventory_t4278335804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::Start()
extern "C"  void Inventory_Start_m2633898159 (Inventory_t4278335804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Inventory::BlinkArrow2()
extern "C"  Il2CppObject * Inventory_BlinkArrow2_m2446186650 (Inventory_t4278335804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Inventory::Stop()
extern "C"  Il2CppObject * Inventory_Stop_m3423004143 (Inventory_t4278335804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::Update()
extern "C"  void Inventory_Update_m52316478 (Inventory_t4278335804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::AddItem(System.Int32)
extern "C"  void Inventory_AddItem_m3396360178 (Inventory_t4278335804 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::RemoveItem(System.Int32)
extern "C"  void Inventory_RemoveItem_m3833244669 (Inventory_t4278335804 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Inventory::CheckIfItemIsInventory(Item)
extern "C"  bool Inventory_CheckIfItemIsInventory_m1881475688 (Inventory_t4278335804 * __this, Item_t2289459 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Inventory::CheckIfItemIsInventory2(Item)
extern "C"  bool Inventory_CheckIfItemIsInventory2_m1792241638 (Inventory_t4278335804 * __this, Item_t2289459 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::UpdateInGame()
extern "C"  void Inventory_UpdateInGame_m1343007893 (Inventory_t4278335804 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::GoToMap(UnityEngine.AudioSource)
extern "C"  void Inventory_GoToMap_m2146486418 (Inventory_t4278335804 * __this, AudioSource_t3628549054 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
