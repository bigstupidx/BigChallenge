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

// ItemDatabase
struct ItemDatabase_t2582217166;
// Item
struct Item_t2289459;

#include "codegen/il2cpp-codegen.h"

// System.Void ItemDatabase::.ctor()
extern "C"  void ItemDatabase__ctor_m2568525965 (ItemDatabase_t2582217166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemDatabase::Start()
extern "C"  void ItemDatabase_Start_m1515663757 (ItemDatabase_t2582217166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Item ItemDatabase::FetchItemByID(System.Int32)
extern "C"  Item_t2289459 * ItemDatabase_FetchItemByID_m953618769 (ItemDatabase_t2582217166 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ItemDatabase::getItemDataLength()
extern "C"  int32_t ItemDatabase_getItemDataLength_m3764499414 (ItemDatabase_t2582217166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemDatabase::ConstructItemDatabase()
extern "C"  void ItemDatabase_ConstructItemDatabase_m2182287248 (ItemDatabase_t2582217166 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
