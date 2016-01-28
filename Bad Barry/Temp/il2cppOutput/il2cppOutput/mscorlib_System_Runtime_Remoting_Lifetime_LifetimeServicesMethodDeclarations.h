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

// System.Runtime.Remoting.ServerIdentity
struct ServerIdentity_t1195;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::.cctor()
extern "C" void LifetimeServices__cctor_m9403 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_LeaseManagerPollTime()
extern "C" TimeSpan_t160  LifetimeServices_get_LeaseManagerPollTime_m9404 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_LeaseManagerPollTime(System.TimeSpan)
extern "C" void LifetimeServices_set_LeaseManagerPollTime_m9405 (Object_t * __this /* static, unused */, TimeSpan_t160  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_LeaseTime()
extern "C" TimeSpan_t160  LifetimeServices_get_LeaseTime_m9406 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_LeaseTime(System.TimeSpan)
extern "C" void LifetimeServices_set_LeaseTime_m9407 (Object_t * __this /* static, unused */, TimeSpan_t160  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_RenewOnCallTime()
extern "C" TimeSpan_t160  LifetimeServices_get_RenewOnCallTime_m9408 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_RenewOnCallTime(System.TimeSpan)
extern "C" void LifetimeServices_set_RenewOnCallTime_m9409 (Object_t * __this /* static, unused */, TimeSpan_t160  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Runtime.Remoting.Lifetime.LifetimeServices::get_SponsorshipTimeout()
extern "C" TimeSpan_t160  LifetimeServices_get_SponsorshipTimeout_m9410 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::set_SponsorshipTimeout(System.TimeSpan)
extern "C" void LifetimeServices_set_SponsorshipTimeout_m9411 (Object_t * __this /* static, unused */, TimeSpan_t160  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Lifetime.LifetimeServices::TrackLifetime(System.Runtime.Remoting.ServerIdentity)
extern "C" void LifetimeServices_TrackLifetime_m9412 (Object_t * __this /* static, unused */, ServerIdentity_t1195 * ___identity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
