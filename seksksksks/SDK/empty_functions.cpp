#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass empty.empty_C
// (None)

class UClass* UEmpty_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("empty_C");

	return Clss;
}


// empty_C empty.Default__empty_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEmpty_C* UEmpty_C::GetDefaultObj()
{
	static class UEmpty_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEmpty_C*>(UEmpty_C::StaticClass()->DefaultObject);

	return Default;
}

}


