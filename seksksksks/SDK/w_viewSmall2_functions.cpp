#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_viewSmall2.w_viewSmall2_C
// (None)

class UClass* UW_viewSmall2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_viewSmall2_C");

	return Clss;
}


// w_viewSmall2_C w_viewSmall2.Default__w_viewSmall2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_viewSmall2_C* UW_viewSmall2_C::GetDefaultObj()
{
	static class UW_viewSmall2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_viewSmall2_C*>(UW_viewSmall2_C::StaticClass()->DefaultObject);

	return Default;
}

}


