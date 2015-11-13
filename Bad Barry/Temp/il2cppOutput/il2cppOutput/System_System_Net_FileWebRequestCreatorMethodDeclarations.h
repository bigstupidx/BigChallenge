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
struct FileWebRequestCreator_t970;
// System.Net.WebRequest
struct WebRequest_t933;
// System.Uri
struct Uri_t928;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m4888 (FileWebRequestCreator_t970 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t933 * FileWebRequestCreator_Create_m4889 (FileWebRequestCreator_t970 * __this, Uri_t928 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
