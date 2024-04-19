#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Shaman2.Shaman2_C
// (None)

class UClass* UShaman2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shaman2_C");

	return Clss;
}


// Shaman2_C Shaman2.Default__Shaman2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShaman2_C* UShaman2_C::GetDefaultObj()
{
	static class UShaman2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShaman2_C*>(UShaman2_C::StaticClass()->DefaultObject);

	return Default;
}

}


