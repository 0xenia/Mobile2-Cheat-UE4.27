#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Warrior.Warrior_C
// (None)

class UClass* UWarrior_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Warrior_C");

	return Clss;
}


// Warrior_C Warrior.Default__Warrior_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWarrior_C* UWarrior_C::GetDefaultObj()
{
	static class UWarrior_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWarrior_C*>(UWarrior_C::StaticClass()->DefaultObject);

	return Default;
}

}


