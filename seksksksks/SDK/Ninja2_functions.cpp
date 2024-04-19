#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Ninja2.Ninja2_C
// (None)

class UClass* UNinja2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ninja2_C");

	return Clss;
}


// Ninja2_C Ninja2.Default__Ninja2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNinja2_C* UNinja2_C::GetDefaultObj()
{
	static class UNinja2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNinja2_C*>(UNinja2_C::StaticClass()->DefaultObject);

	return Default;
}

}


