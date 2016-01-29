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

// System.Net.FtpRequestCreator
struct FtpRequestCreator_t1032;
// System.Net.WebRequest
struct WebRequest_t994;
// System.Uri
struct Uri_t989;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.FtpRequestCreator::.ctor()
extern "C" void FtpRequestCreator__ctor_m5219 (FtpRequestCreator_t1032 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FtpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t994 * FtpRequestCreator_Create_m5220 (FtpRequestCreator_t1032 * __this, Uri_t989 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
