#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass lamb.lamb_C
// (Actor)

class UClass* ALamb_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("lamb_C");

	return Clss;
}


// lamb_C lamb.Default__lamb_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALamb_C* ALamb_C::GetDefaultObj()
{
	static class ALamb_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALamb_C*>(ALamb_C::StaticClass()->DefaultObject);

	return Default;
}

}


