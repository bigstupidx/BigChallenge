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

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t2_30;
// System.Net.WebRequest
struct WebRequest_t2_21;
// System.Uri
struct Uri_t2_22;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m2_105 (HttpRequestCreator_t2_30 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t2_21 * HttpRequestCreator_Create_m2_106 (HttpRequestCreator_t2_30 * __this, Uri_t2_22 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
