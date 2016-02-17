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

// System.CurrentSystemTimeZone
struct CurrentSystemTimeZone_t1856;
// System.Object
struct Object_t;
// System.Int64[]
struct Int64U5BU5D_t1892;
// System.String[]
struct StringU5BU5D_t152;
// System.Globalization.DaylightTime
struct DaylightTime_t1342;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.CurrentSystemTimeZone::.ctor()
extern "C" void CurrentSystemTimeZone__ctor_m11674 (CurrentSystemTimeZone_t1856 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::.ctor(System.Int64)
extern "C" void CurrentSystemTimeZone__ctor_m11675 (CurrentSystemTimeZone_t1856 * __this, int64_t ___lnow, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void CurrentSystemTimeZone_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m11676 (CurrentSystemTimeZone_t1856 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.CurrentSystemTimeZone::GetTimeZoneData(System.Int32,System.Int64[]&,System.String[]&)
extern "C" bool CurrentSystemTimeZone_GetTimeZoneData_m11677 (Object_t * __this /* static, unused */, int32_t ___year, Int64U5BU5D_t1892** ___data, StringU5BU5D_t152** ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightChanges(System.Int32)
extern "C" DaylightTime_t1342 * CurrentSystemTimeZone_GetDaylightChanges_m11678 (CurrentSystemTimeZone_t1856 * __this, int32_t ___year, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.CurrentSystemTimeZone::GetUtcOffset(System.DateTime)
extern "C" TimeSpan_t183  CurrentSystemTimeZone_GetUtcOffset_m11679 (CurrentSystemTimeZone_t1856 * __this, DateTime_t70  ___time, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.CurrentSystemTimeZone::OnDeserialization(System.Globalization.DaylightTime)
extern "C" void CurrentSystemTimeZone_OnDeserialization_m11680 (CurrentSystemTimeZone_t1856 * __this, DaylightTime_t1342 * ___dlt, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.DaylightTime System.CurrentSystemTimeZone::GetDaylightTimeFromData(System.Int64[])
extern "C" DaylightTime_t1342 * CurrentSystemTimeZone_GetDaylightTimeFromData_m11681 (CurrentSystemTimeZone_t1856 * __this, Int64U5BU5D_t1892* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
