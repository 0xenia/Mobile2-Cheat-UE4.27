#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass m2save.m2save_C
// (None)

class UClass* UM2save_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("m2save_C");

	return Clss;
}


// m2save_C m2save.Default__m2save_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UM2save_C* UM2save_C::GetDefaultObj()
{
	static class UM2save_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UM2save_C*>(UM2save_C::StaticClass()->DefaultObject);

	return Default;
}


// Function m2save.m2save_C.save
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_SaveGameToSlot_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UM2save_C::Save(bool CallFunc_SaveGameToSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("m2save_C", "save");

	Params::UM2save_C_Save_Params Parms{};

	Parms.CallFunc_SaveGameToSlot_ReturnValue = CallFunc_SaveGameToSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


