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
struct ItemDatabase_t8_37;
// Item
struct Item_t8_39;

#include "codegen/il2cpp-codegen.h"

// System.Void ItemDatabase::.ctor()
extern "C" void ItemDatabase__ctor_m8_235 (ItemDatabase_t8_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemDatabase::Start()
extern "C" void ItemDatabase_Start_m8_236 (ItemDatabase_t8_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Item ItemDatabase::FetchItemByID(System.Int32)
extern "C" Item_t8_39 * ItemDatabase_FetchItemByID_m8_237 (ItemDatabase_t8_37 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ItemDatabase::ConstructItemDatabase()
extern "C" void ItemDatabase_ConstructItemDatabase_m8_238 (ItemDatabase_t8_37 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
