#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass costume.costume_C
// (None)

class UClass* UCostume_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("costume_C");

	return Clss;
}


// costume_C costume.Default__costume_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCostume_C* UCostume_C::GetDefaultObj()
{
	static class UCostume_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCostume_C*>(UCostume_C::StaticClass()->DefaultObject);

	return Default;
}


// Function costume.costume_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCostume_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("costume_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function costume.costume_C.BndEvt__costume_w_window_1_K2Node_ComponentBoundEvent_1__close__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCostume_C::BndEvt__costume_w_window_1_K2Node_ComponentBoundEvent_1__close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("costume_C", "BndEvt__costume_w_window_1_K2Node_ComponentBoundEvent_1__close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function costume.costume_C.ExecuteUbergraph_costume
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCostume_C::ExecuteUbergraph_costume(int32 EntryPoint, class UM2data_C* CallFunc_game_game)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("costume_C", "ExecuteUbergraph_costume");

	Params::UCostume_C_ExecuteUbergraph_costume_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_game_game = CallFunc_game_game;

	UObject::ProcessEvent(Func, &Parms);

}

}


