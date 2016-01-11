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

// BulletBox
struct BulletBox_t91;
// UnityEngine.Collider2D
struct Collider2D_t107;

#include "codegen/il2cpp-codegen.h"

// System.Void BulletBox::.ctor()
extern "C" void BulletBox__ctor_m393 (BulletBox_t91 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletBox::Start()
extern "C" void BulletBox_Start_m394 (BulletBox_t91 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletBox::Update()
extern "C" void BulletBox_Update_m395 (BulletBox_t91 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BulletBox::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void BulletBox_OnTriggerEnter2D_m396 (BulletBox_t91 * __this, Collider2D_t107 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
