﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Advertisements.UnityAdsInternal
struct UnityAdsInternal_t577;
// UnityEngine.Advertisements.UnityAdsDelegate
struct UnityAdsDelegate_t578;
// UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>
struct UnityAdsDelegate_2_t579;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Advertisements.UnityAdsInternal::.ctor()
extern "C" void UnityAdsInternal__ctor_m3347 (UnityAdsInternal_t577 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onCampaignsAvailable(UnityEngine.Advertisements.UnityAdsDelegate)
extern "C" void UnityAdsInternal_add_onCampaignsAvailable_m3348 (Object_t * __this /* static, unused */, UnityAdsDelegate_t578 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onCampaignsAvailable(UnityEngine.Advertisements.UnityAdsDelegate)
extern "C" void UnityAdsInternal_remove_onCampaignsAvailable_m3349 (Object_t * __this /* static, unused */, UnityAdsDelegate_t578 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onCampaignsFetchFailed(UnityEngine.Advertisements.UnityAdsDelegate)
extern "C" void UnityAdsInternal_add_onCampaignsFetchFailed_m3350 (Object_t * __this /* static, unused */, UnityAdsDelegate_t578 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onCampaignsFetchFailed(UnityEngine.Advertisements.UnityAdsDelegate)
extern "C" void UnityAdsInternal_remove_onCampaignsFetchFailed_m3351 (Object_t * __this /* static, unused */, UnityAdsDelegate_t578 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onShow(UnityEngine.Advertisements.UnityAdsDelegate)
extern "C" void UnityAdsInternal_add_onShow_m3352 (Object_t * __this /* static, unused */, UnityAdsDelegate_t578 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onShow(UnityEngine.Advertisements.UnityAdsDelegate)
extern "C" void UnityAdsInternal_remove_onShow_m3353 (Object_t * __this /* static, unused */, UnityAdsDelegate_t578 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onHide(UnityEngine.Advertisements.UnityAdsDelegate)
extern "C" void UnityAdsInternal_add_onHide_m3354 (Object_t * __this /* static, unused */, UnityAdsDelegate_t578 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onHide(UnityEngine.Advertisements.UnityAdsDelegate)
extern "C" void UnityAdsInternal_remove_onHide_m3355 (Object_t * __this /* static, unused */, UnityAdsDelegate_t578 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onVideoCompleted(UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>)
extern "C" void UnityAdsInternal_add_onVideoCompleted_m3356 (Object_t * __this /* static, unused */, UnityAdsDelegate_2_t579 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onVideoCompleted(UnityEngine.Advertisements.UnityAdsDelegate`2<System.String,System.Boolean>)
extern "C" void UnityAdsInternal_remove_onVideoCompleted_m3357 (Object_t * __this /* static, unused */, UnityAdsDelegate_2_t579 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::add_onVideoStarted(UnityEngine.Advertisements.UnityAdsDelegate)
extern "C" void UnityAdsInternal_add_onVideoStarted_m3358 (Object_t * __this /* static, unused */, UnityAdsDelegate_t578 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::remove_onVideoStarted(UnityEngine.Advertisements.UnityAdsDelegate)
extern "C" void UnityAdsInternal_remove_onVideoStarted_m3359 (Object_t * __this /* static, unused */, UnityAdsDelegate_t578 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::RegisterNative()
extern "C" void UnityAdsInternal_RegisterNative_m3360 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::Init(System.String,System.Boolean,System.Boolean,System.String)
extern "C" void UnityAdsInternal_Init_m3361 (Object_t * __this /* static, unused */, String_t* ___gameId, bool ___testModeEnabled, bool ___debugModeEnabled, String_t* ___unityVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsInternal::Show(System.String,System.String,System.String)
extern "C" bool UnityAdsInternal_Show_m3362 (Object_t * __this /* static, unused */, String_t* ___zoneId, String_t* ___rewardItemKey, String_t* ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Advertisements.UnityAdsInternal::CanShowAds(System.String)
extern "C" bool UnityAdsInternal_CanShowAds_m3363 (Object_t * __this /* static, unused */, String_t* ___zoneId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::SetLogLevel(System.Int32)
extern "C" void UnityAdsInternal_SetLogLevel_m3364 (Object_t * __this /* static, unused */, int32_t ___logLevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::SetCampaignDataURL(System.String)
extern "C" void UnityAdsInternal_SetCampaignDataURL_m3365 (Object_t * __this /* static, unused */, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::RemoveAllEventHandlers()
extern "C" void UnityAdsInternal_RemoveAllEventHandlers_m3366 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsCampaignsAvailable()
extern "C" void UnityAdsInternal_CallUnityAdsCampaignsAvailable_m3367 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsCampaignsFetchFailed()
extern "C" void UnityAdsInternal_CallUnityAdsCampaignsFetchFailed_m3368 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsShow()
extern "C" void UnityAdsInternal_CallUnityAdsShow_m3369 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsHide()
extern "C" void UnityAdsInternal_CallUnityAdsHide_m3370 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsVideoCompleted(System.String,System.Boolean)
extern "C" void UnityAdsInternal_CallUnityAdsVideoCompleted_m3371 (Object_t * __this /* static, unused */, String_t* ___rewardItemKey, bool ___skipped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Advertisements.UnityAdsInternal::CallUnityAdsVideoStarted()
extern "C" void UnityAdsInternal_CallUnityAdsVideoStarted_m3372 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;