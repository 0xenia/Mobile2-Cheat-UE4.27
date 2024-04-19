#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass stoneLight.stoneLight_C
// (Actor)

class UClass* AStoneLight_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("stoneLight_C");

	return Clss;
}


// stoneLight_C stoneLight.Default__stoneLight_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStoneLight_C* AStoneLight_C::GetDefaultObj()
{
	static class AStoneLight_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStoneLight_C*>(AStoneLight_C::StaticClass()->DefaultObject);

	return Default;
}

}


