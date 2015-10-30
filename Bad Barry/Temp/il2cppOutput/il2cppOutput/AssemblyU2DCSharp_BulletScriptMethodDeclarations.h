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
struct BulletScript_t42;
// UnityEngine.Collider2D
struct Collider2D_t53;

#include "codegen/il2cpp-codegen.h"

// System.Void BulletScript::.ctor()
extern "C" void BulletScript__ctor_m177 (BulletScript_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletScript::Start()
extern "C" void BulletScript_Start_m178 (BulletScript_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletScript::Update()
extern "C" void BulletScript_Update_m179 (BulletScript_t42 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletScript::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void BulletScript_OnTriggerEnter2D_m180 (BulletScript_t42 * __this, Collider2D_t53 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
