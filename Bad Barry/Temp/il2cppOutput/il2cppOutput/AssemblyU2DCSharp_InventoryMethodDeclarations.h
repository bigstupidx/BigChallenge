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
struct Inventory_t73;
// System.Collections.IEnumerator
struct IEnumerator_t132;
// Item
struct Item_t82;
// UnityEngine.AudioSource
struct AudioSource_t11;

#include "codegen/il2cpp-codegen.h"

// System.Void Inventory::.ctor()
extern "C" void Inventory__ctor_m324 (Inventory_t73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::Start()
extern "C" void Inventory_Start_m325 (Inventory_t73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Inventory::BlinkArrow2()
extern "C" Object_t * Inventory_BlinkArrow2_m326 (Inventory_t73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Inventory::Stop()
extern "C" Object_t * Inventory_Stop_m327 (Inventory_t73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::Update()
extern "C" void Inventory_Update_m328 (Inventory_t73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::AddItem(System.Int32)
extern "C" void Inventory_AddItem_m329 (Inventory_t73 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::RemoveItem(System.Int32)
extern "C" void Inventory_RemoveItem_m330 (Inventory_t73 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Inventory::CheckIfItemIsInventory(Item)
extern "C" bool Inventory_CheckIfItemIsInventory_m331 (Inventory_t73 * __this, Item_t82 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Inventory::CheckIfItemIsInventory2(Item)
extern "C" bool Inventory_CheckIfItemIsInventory2_m332 (Inventory_t73 * __this, Item_t82 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::UpdateInGame()
extern "C" void Inventory_UpdateInGame_m333 (Inventory_t73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::GoToMap(UnityEngine.AudioSource)
extern "C" void Inventory_GoToMap_m334 (Inventory_t73 * __this, AudioSource_t11 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
