#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Collections.Hashtable
struct Hashtable_t868;
// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler
struct CallbackHandler_t1613;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Runtime.Serialization.SerializationObjectManager
struct  SerializationObjectManager_t1594  : public Object_t
{
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.SerializationObjectManager::context
	StreamingContext_t654  ___context_0;
	// System.Collections.Hashtable System.Runtime.Serialization.SerializationObjectManager::seen
	Hashtable_t868 * ___seen_1;
	// System.Runtime.Serialization.SerializationCallbacks/CallbackHandler System.Runtime.Serialization.SerializationObjectManager::callbacks
	CallbackHandler_t1613 * ___callbacks_2;
};
