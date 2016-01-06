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

// UnityEngine.Coroutine
struct Coroutine_t259;
struct Coroutine_t259_marshaled;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m2564 (Coroutine_t259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m2565 (Coroutine_t259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m2566 (Coroutine_t259 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Coroutine_t259_marshal(const Coroutine_t259& unmarshaled, Coroutine_t259_marshaled& marshaled);
extern "C" void Coroutine_t259_marshal_back(const Coroutine_t259_marshaled& marshaled, Coroutine_t259& unmarshaled);
extern "C" void Coroutine_t259_marshal_cleanup(Coroutine_t259_marshaled& marshaled);
