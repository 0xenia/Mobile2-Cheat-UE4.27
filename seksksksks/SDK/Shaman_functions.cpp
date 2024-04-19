#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Shaman.Shaman_C
// (None)

class UClass* UShaman_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shaman_C");

	return Clss;
}


// Shaman_C Shaman.Default__Shaman_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UShaman_C* UShaman_C::GetDefaultObj()
{
	static class UShaman_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UShaman_C*>(UShaman_C::StaticClass()->DefaultObject);

	return Default;
}

}


