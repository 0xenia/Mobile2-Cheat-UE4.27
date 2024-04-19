#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Sura2.Sura2_C
// (None)

class UClass* USura2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Sura2_C");

	return Clss;
}


// Sura2_C Sura2.Default__Sura2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USura2_C* USura2_C::GetDefaultObj()
{
	static class USura2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USura2_C*>(USura2_C::StaticClass()->DefaultObject);

	return Default;
}

}


