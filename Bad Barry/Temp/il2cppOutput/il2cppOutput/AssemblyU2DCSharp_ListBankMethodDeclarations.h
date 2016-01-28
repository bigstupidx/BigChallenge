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
struct ListBank_t108;
// Item
struct Item_t82;

#include "codegen/il2cpp-codegen.h"

// System.Void ListBank::.ctor()
extern "C" void ListBank__ctor_m499 (ListBank_t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBank::Start()
extern "C" void ListBank_Start_m500 (ListBank_t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBank::AddItem(System.Int32)
extern "C" void ListBank_AddItem_m501 (ListBank_t108 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBank::Awake()
extern "C" void ListBank_Awake_m502 (ListBank_t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ListBank::getListContent(System.Int32)
extern "C" int32_t ListBank_getListContent_m503 (ListBank_t108 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Item ListBank::getItem(System.Int32)
extern "C" Item_t82 * ListBank_getItem_m504 (ListBank_t108 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ListBank::getListLength()
extern "C" int32_t ListBank_getListLength_m505 (ListBank_t108 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
