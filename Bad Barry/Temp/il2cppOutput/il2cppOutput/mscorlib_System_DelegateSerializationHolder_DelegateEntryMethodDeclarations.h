﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t1758;
// System.Delegate
struct Delegate_t418;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t653;

#include "codegen/il2cpp-codegen.h"

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
extern "C" void DelegateEntry__ctor_m11005 (DelegateEntry_t1758 * __this, Delegate_t418 * ___del, String_t* ___targetLabel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
extern "C" Delegate_t418 * DelegateEntry_DeserializeDelegate_m11006 (DelegateEntry_t1758 * __this, SerializationInfo_t653 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
