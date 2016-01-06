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
struct FileWebRequestCreator_t989;
// System.Net.WebRequest
struct WebRequest_t952;
// System.Uri
struct Uri_t947;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m4962 (FileWebRequestCreator_t989 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t952 * FileWebRequestCreator_Create_m4963 (FileWebRequestCreator_t989 * __this, Uri_t947 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
