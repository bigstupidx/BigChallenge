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

// ListBank
struct ListBank_t84;
// Item
struct Item_t65;

#include "codegen/il2cpp-codegen.h"

// System.Void ListBank::.ctor()
extern "C" void ListBank__ctor_m355 (ListBank_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBank::Start()
extern "C" void ListBank_Start_m356 (ListBank_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBank::AddItem(System.Int32)
extern "C" void ListBank_AddItem_m357 (ListBank_t84 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBank::Awake()
extern "C" void ListBank_Awake_m358 (ListBank_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ListBank::getListContent(System.Int32)
extern "C" int32_t ListBank_getListContent_m359 (ListBank_t84 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Item ListBank::getItem(System.Int32)
extern "C" Item_t65 * ListBank_getItem_m360 (ListBank_t84 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBank::updateDetail(System.Int32)
extern "C" void ListBank_updateDetail_m361 (ListBank_t84 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ListBank::getListLength()
extern "C" int32_t ListBank_getListLength_m362 (ListBank_t84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
