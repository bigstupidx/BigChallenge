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
struct Inventory_t8_36;
// Item
struct Item_t8_39;

#include "codegen/il2cpp-codegen.h"

// System.Void Inventory::.ctor()
extern "C" void Inventory__ctor_m8_219 (Inventory_t8_36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::Start()
extern "C" void Inventory_Start_m8_220 (Inventory_t8_36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::AddItem(System.Int32)
extern "C" void Inventory_AddItem_m8_221 (Inventory_t8_36 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::DecrementItem(System.Int32)
extern "C" void Inventory_DecrementItem_m8_222 (Inventory_t8_36 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::RemoveItem(System.Int32)
extern "C" void Inventory_RemoveItem_m8_223 (Inventory_t8_36 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Inventory::CheckIfItemIsInventory(Item)
extern "C" bool Inventory_CheckIfItemIsInventory_m8_224 (Inventory_t8_36 * __this, Item_t8_39 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Inventory::CheckIfItemIsInventory2(Item)
extern "C" bool Inventory_CheckIfItemIsInventory2_m8_225 (Inventory_t8_36 * __this, Item_t8_39 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
