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
struct ListBank_t129;
// Item
struct Item_t92;

#include "codegen/il2cpp-codegen.h"

// System.Void ListBank::.ctor()
extern "C" void ListBank__ctor_m582 (ListBank_t129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBank::Start()
extern "C" void ListBank_Start_m583 (ListBank_t129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBank::AddItem(System.Int32)
extern "C" void ListBank_AddItem_m584 (ListBank_t129 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBank::Awake()
extern "C" void ListBank_Awake_m585 (ListBank_t129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ListBank::getListContent(System.Int32)
extern "C" int32_t ListBank_getListContent_m586 (ListBank_t129 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Item ListBank::getItem(System.Int32)
extern "C" Item_t92 * ListBank_getItem_m587 (ListBank_t129 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ListBank::getListLength()
extern "C" int32_t ListBank_getListLength_m588 (ListBank_t129 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
