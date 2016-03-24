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
struct ListBox_t1846591533;
// Item
struct Item_t2289459;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Item2289459.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"

// System.Void ListBox::.ctor()
extern "C"  void ListBox__ctor_m467227102 (ListBox_t1846591533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::Start()
extern "C"  void ListBox_Start_m3709332190 (ListBox_t1846591533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::initialContent()
extern "C"  void ListBox_initialContent_m971557019 (ListBox_t1846591533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateContent(Item)
extern "C"  void ListBox_updateContent_m823858489 (ListBox_t1846591533 * __this, Item_t2289459 * ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::setSlidingDistance(System.Single)
extern "C"  void ListBox_setSlidingDistance_m922432260 (ListBox_t1846591533 * __this, float ___distance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::unitMove(System.Int32,System.Boolean)
extern "C"  void ListBox_unitMove_m2940958193 (ListBox_t1846591533 * __this, int32_t ___unit, bool ___up, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::Update()
extern "C"  void ListBox_Update_m3326000367 (ListBox_t1846591533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::initialPosition(System.Int32)
extern "C"  void ListBox_initialPosition_m764631674 (ListBox_t1846591533 * __this, int32_t ___listBoxID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updatePosition(UnityEngine.Vector3)
extern "C"  void ListBox_updatePosition_m1602352897 (ListBox_t1846591533 * __this, Vector3_t3525329789  ___deltaPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateXPosition()
extern "C"  void ListBox_updateXPosition_m144857684 (ListBox_t1846591533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::checkBoundary()
extern "C"  void ListBox_checkBoundary_m1208250606 (ListBox_t1846591533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateSize()
extern "C"  void ListBox_updateSize_m553423280 (ListBox_t1846591533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ListBox::getCurrentContentID()
extern "C"  int32_t ListBox_getCurrentContentID_m143343227 (ListBox_t1846591533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateToLastContent()
extern "C"  void ListBox_updateToLastContent_m8608091 (ListBox_t1846591533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::updateToNextContent()
extern "C"  void ListBox_updateToNextContent_m3838278046 (ListBox_t1846591533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::onBoxClicked()
extern "C"  void ListBox_onBoxClicked_m3910011617 (ListBox_t1846591533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ListBox::toggleAnimation()
extern "C"  void ListBox_toggleAnimation_m1796150252 (ListBox_t1846591533 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
