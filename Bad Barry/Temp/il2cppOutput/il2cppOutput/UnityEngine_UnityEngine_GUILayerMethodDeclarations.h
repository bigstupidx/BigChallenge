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

// UnityEngine.GUILayer
struct GUILayer_t458;
// UnityEngine.GUIElement
struct GUIElement_t457;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
extern "C" GUIElement_t457 * GUILayer_HitTest_m2603 (GUILayer_t458 * __this, Vector3_t12  ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
extern "C" GUIElement_t457 * GUILayer_INTERNAL_CALL_HitTest_m2604 (Object_t * __this /* static, unused */, GUILayer_t458 * ___self, Vector3_t12 * ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
