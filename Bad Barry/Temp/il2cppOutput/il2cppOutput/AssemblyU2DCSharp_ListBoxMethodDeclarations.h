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
struct ListBox_t86;
// Item
struct Item_t65;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void ListBox::.ctor()
extern "C" void ListBox__ctor_m363 (ListBox_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::Start()
extern "C" void ListBox_Start_m364 (ListBox_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::initialContent()
extern "C" void ListBox_initialContent_m365 (ListBox_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateContent(Item)
extern "C" void ListBox_updateContent_m366 (ListBox_t86 * __this, Item_t65 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::setSlidingDistance(System.Single)
extern "C" void ListBox_setSlidingDistance_m367 (ListBox_t86 * __this, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::unitMove(System.Int32,System.Boolean)
extern "C" void ListBox_unitMove_m368 (ListBox_t86 * __this, int32_t ___unit, bool ___up, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::Update()
extern "C" void ListBox_Update_m369 (ListBox_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::initialPosition(System.Int32)
extern "C" void ListBox_initialPosition_m370 (ListBox_t86 * __this, int32_t ___listBoxID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updatePosition(UnityEngine.Vector3)
extern "C" void ListBox_updatePosition_m371 (ListBox_t86 * __this, Vector3_t12  ___deltaPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateXPosition()
extern "C" void ListBox_updateXPosition_m372 (ListBox_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::checkBoundary()
extern "C" void ListBox_checkBoundary_m373 (ListBox_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateSize()
extern "C" void ListBox_updateSize_m374 (ListBox_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ListBox::getCurrentContentID()
extern "C" int32_t ListBox_getCurrentContentID_m375 (ListBox_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateToLastContent()
extern "C" void ListBox_updateToLastContent_m376 (ListBox_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateToNextContent()
extern "C" void ListBox_updateToNextContent_m377 (ListBox_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::onBoxClicked()
extern "C" void ListBox_onBoxClicked_m378 (ListBox_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::toggleAnimation()
extern "C" void ListBox_toggleAnimation_m379 (ListBox_t86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
