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

// BulletScript
struct BulletScript_t92;
// UnityEngine.Collider2D
struct Collider2D_t107;

#include "codegen/il2cpp-codegen.h"

// System.Void BulletScript::.ctor()
extern "C" void BulletScript__ctor_m397 (BulletScript_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletScript::Start()
extern "C" void BulletScript_Start_m398 (BulletScript_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletScript::Update()
extern "C" void BulletScript_Update_m399 (BulletScript_t92 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletScript::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void BulletScript_OnTriggerEnter2D_m400 (BulletScript_t92 * __this, Collider2D_t107 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
