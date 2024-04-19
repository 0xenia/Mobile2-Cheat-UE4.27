#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Warrior2.Warrior2_C
// (None)

class UClass* UWarrior2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Warrior2_C");

	return Clss;
}


// Warrior2_C Warrior2.Default__Warrior2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWarrior2_C* UWarrior2_C::GetDefaultObj()
{
	static class UWarrior2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWarrior2_C*>(UWarrior2_C::StaticClass()->DefaultObject);

	return Default;
}

}


