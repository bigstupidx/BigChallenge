﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.MarshalByRefObject
struct MarshalByRefObject_t894;
// System.Runtime.Remoting.Proxies.RealProxy
struct RealProxy_t1403;

#include "mscorlib_System_Object.h"

// System.Runtime.Remoting.Messaging.StackBuilderSink
struct  StackBuilderSink_t1402  : public Object_t
{
	// System.MarshalByRefObject System.Runtime.Remoting.Messaging.StackBuilderSink::_target
	MarshalByRefObject_t894 * ____target_0;
	// System.Runtime.Remoting.Proxies.RealProxy System.Runtime.Remoting.Messaging.StackBuilderSink::_rp
	RealProxy_t1403 * ____rp_1;
};
