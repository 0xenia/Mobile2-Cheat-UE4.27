#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass roder.roder_C
// (Actor)

class UClass* ARoder_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("roder_C");

	return Clss;
}


// roder_C roder.Default__roder_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARoder_C* ARoder_C::GetDefaultObj()
{
	static class ARoder_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARoder_C*>(ARoder_C::StaticClass()->DefaultObject);

	return Default;
}

}


