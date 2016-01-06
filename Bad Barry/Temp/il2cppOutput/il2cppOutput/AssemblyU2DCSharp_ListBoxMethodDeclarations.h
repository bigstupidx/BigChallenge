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

// ListBox
struct ListBox_t79;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void ListBox::.ctor()
extern "C" void ListBox__ctor_m327 (ListBox_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::Start()
extern "C" void ListBox_Start_m328 (ListBox_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::initialContent()
extern "C" void ListBox_initialContent_m329 (ListBox_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateContent(System.String)
extern "C" void ListBox_updateContent_m330 (ListBox_t79 * __this, String_t* ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::setSlidingDistance(System.Single)
extern "C" void ListBox_setSlidingDistance_m331 (ListBox_t79 * __this, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::unitMove(System.Int32,System.Boolean)
extern "C" void ListBox_unitMove_m332 (ListBox_t79 * __this, int32_t ___unit, bool ___up, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::Update()
extern "C" void ListBox_Update_m333 (ListBox_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::initialPosition(System.Int32)
extern "C" void ListBox_initialPosition_m334 (ListBox_t79 * __this, int32_t ___listBoxID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updatePosition(UnityEngine.Vector3)
extern "C" void ListBox_updatePosition_m335 (ListBox_t79 * __this, Vector3_t10  ___deltaPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateXPosition()
extern "C" void ListBox_updateXPosition_m336 (ListBox_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::checkBoundary()
extern "C" void ListBox_checkBoundary_m337 (ListBox_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateSize()
extern "C" void ListBox_updateSize_m338 (ListBox_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ListBox::getCurrentContentID()
extern "C" int32_t ListBox_getCurrentContentID_m339 (ListBox_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateToLastContent()
extern "C" void ListBox_updateToLastContent_m340 (ListBox_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateToNextContent()
extern "C" void ListBox_updateToNextContent_m341 (ListBox_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::onBoxClicked()
extern "C" void ListBox_onBoxClicked_m342 (ListBox_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::toggleAnimation()
extern "C" void ListBox_toggleAnimation_m343 (ListBox_t79 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
