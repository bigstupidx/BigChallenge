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
struct Inventory_t78;
// System.Collections.IEnumerator
struct IEnumerator_t150;
// Item
struct Item_t86;
// UnityEngine.AudioSource
struct AudioSource_t16;

#include "codegen/il2cpp-codegen.h"

// System.Void Inventory::.ctor()
extern "C" void Inventory__ctor_m335 (Inventory_t78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::Start()
extern "C" void Inventory_Start_m336 (Inventory_t78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Inventory::BlinkArrow2()
extern "C" Object_t * Inventory_BlinkArrow2_m337 (Inventory_t78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Inventory::Stop()
extern "C" Object_t * Inventory_Stop_m338 (Inventory_t78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::Update()
extern "C" void Inventory_Update_m339 (Inventory_t78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::AddItem(System.Int32)
extern "C" void Inventory_AddItem_m340 (Inventory_t78 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::RemoveItem(System.Int32)
extern "C" void Inventory_RemoveItem_m341 (Inventory_t78 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Inventory::CheckIfItemIsInventory(Item)
extern "C" bool Inventory_CheckIfItemIsInventory_m342 (Inventory_t78 * __this, Item_t86 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Inventory::CheckIfItemIsInventory2(Item)
extern "C" bool Inventory_CheckIfItemIsInventory2_m343 (Inventory_t78 * __this, Item_t86 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::UpdateInGame()
extern "C" void Inventory_UpdateInGame_m344 (Inventory_t78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::GoToMap(UnityEngine.AudioSource)
extern "C" void Inventory_GoToMap_m345 (Inventory_t78 * __this, AudioSource_t16 * ___audio, const MethodInfo* method) IL2CPP_METHOD_ATTR;
