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
struct ItemDatabase_t51;
// Item
struct Item_t55;

#include "codegen/il2cpp-codegen.h"

// System.Void ItemDatabase::.ctor()
extern "C" void ItemDatabase__ctor_m236 (ItemDatabase_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemDatabase::Start()
extern "C" void ItemDatabase_Start_m237 (ItemDatabase_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Item ItemDatabase::FetchItemByID(System.Int32)
extern "C" Item_t55 * ItemDatabase_FetchItemByID_m238 (ItemDatabase_t51 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemDatabase::ConstructItemDatabase()
extern "C" void ItemDatabase_ConstructItemDatabase_m239 (ItemDatabase_t51 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
