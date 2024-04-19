#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass Sura.Sura_C
// (None)

class UClass* USura_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Sura_C");

	return Clss;
}


// Sura_C Sura.Default__Sura_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USura_C* USura_C::GetDefaultObj()
{
	static class USura_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USura_C*>(USura_C::StaticClass()->DefaultObject);

	return Default;
}

}


