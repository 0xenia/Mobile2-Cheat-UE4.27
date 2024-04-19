#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass torch.torch_C
// (Actor)

class UClass* ATorch_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("torch_C");

	return Clss;
}


// torch_C torch.Default__torch_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ATorch_C* ATorch_C::GetDefaultObj()
{
	static class ATorch_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ATorch_C*>(ATorch_C::StaticClass()->DefaultObject);

	return Default;
}

}


