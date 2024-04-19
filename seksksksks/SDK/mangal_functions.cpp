#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass mangal.mangal_C
// (Actor)

class UClass* AMangal_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("mangal_C");

	return Clss;
}


// mangal_C mangal.Default__mangal_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AMangal_C* AMangal_C::GetDefaultObj()
{
	static class AMangal_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AMangal_C*>(AMangal_C::StaticClass()->DefaultObject);

	return Default;
}

}


