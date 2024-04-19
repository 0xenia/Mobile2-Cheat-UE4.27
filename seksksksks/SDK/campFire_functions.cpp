#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass campFire.campFire_C
// (Actor)

class UClass* ACampFire_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("campFire_C");

	return Clss;
}


// campFire_C campFire.Default__campFire_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ACampFire_C* ACampFire_C::GetDefaultObj()
{
	static class ACampFire_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ACampFire_C*>(ACampFire_C::StaticClass()->DefaultObject);

	return Default;
}

}


