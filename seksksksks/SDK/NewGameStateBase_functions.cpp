#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NewGameStateBase.NewGameStateBase_C
// (Actor)

class UClass* ANewGameStateBase_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NewGameStateBase_C");

	return Clss;
}


// NewGameStateBase_C NewGameStateBase.Default__NewGameStateBase_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ANewGameStateBase_C* ANewGameStateBase_C::GetDefaultObj()
{
	static class ANewGameStateBase_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ANewGameStateBase_C*>(ANewGameStateBase_C::StaticClass()->DefaultObject);

	return Default;
}

}


