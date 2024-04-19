#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Ninja.Ninja_C
// (None)

class UClass* UNinja_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Ninja_C");

	return Clss;
}


// Ninja_C Ninja.Default__Ninja_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNinja_C* UNinja_C::GetDefaultObj()
{
	static class UNinja_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNinja_C*>(UNinja_C::StaticClass()->DefaultObject);

	return Default;
}

}


