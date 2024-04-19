#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass loading.loading_C
// (None)

class UClass* ULoading_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("loading_C");

	return Clss;
}


// loading_C loading.Default__loading_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ULoading_C* ULoading_C::GetDefaultObj()
{
	static class ULoading_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ULoading_C*>(ULoading_C::StaticClass()->DefaultObject);

	return Default;
}

}


