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
struct Inventory_t59;
// Item
struct Item_t65;

#include "codegen/il2cpp-codegen.h"

// System.Void Inventory::.ctor()
extern "C" void Inventory__ctor_m237 (Inventory_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::Start()
extern "C" void Inventory_Start_m238 (Inventory_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::AddItem(System.Int32)
extern "C" void Inventory_AddItem_m239 (Inventory_t59 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::RemoveItem(System.Int32)
extern "C" void Inventory_RemoveItem_m240 (Inventory_t59 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Inventory::CheckIfItemIsInventory(Item)
extern "C" bool Inventory_CheckIfItemIsInventory_m241 (Inventory_t59 * __this, Item_t65 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Inventory::CheckIfItemIsInventory2(Item)
extern "C" bool Inventory_CheckIfItemIsInventory2_m242 (Inventory_t59 * __this, Item_t65 * ___item, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Inventory::UpdateInGame()
extern "C" void Inventory_UpdateInGame_m243 (Inventory_t59 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
