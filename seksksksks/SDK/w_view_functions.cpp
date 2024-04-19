#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_view.w_view_C
// (None)

class UClass* UW_view_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_view_C");

	return Clss;
}


// w_view_C w_view.Default__w_view_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_view_C* UW_view_C::GetDefaultObj()
{
	static class UW_view_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_view_C*>(UW_view_C::StaticClass()->DefaultObject);

	return Default;
}

}


