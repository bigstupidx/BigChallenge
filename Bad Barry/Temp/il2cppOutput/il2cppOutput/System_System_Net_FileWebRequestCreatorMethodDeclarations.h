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

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t1051;
// System.Net.WebRequest
struct WebRequest_t1014;
// System.Uri
struct Uri_t1009;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m5319 (FileWebRequestCreator_t1051 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t1014 * FileWebRequestCreator_Create_m5320 (FileWebRequestCreator_t1051 * __this, Uri_t1009 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
