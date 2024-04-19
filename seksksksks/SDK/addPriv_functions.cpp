#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass addPriv.addPriv_C
// (None)

class UClass* UAddPriv_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("addPriv_C");

	return Clss;
}


// addPriv_C addPriv.Default__addPriv_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAddPriv_C* UAddPriv_C::GetDefaultObj()
{
	static class UAddPriv_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddPriv_C*>(UAddPriv_C::StaticClass()->DefaultObject);

	return Default;
}


// Function addPriv.addPriv_C.BndEvt__addEvent_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAddPriv_C::BndEvt__addEvent_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("addPriv_C", "BndEvt__addEvent_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function addPriv.addPriv_C.BndEvt__addEvent_c_Button_K2Node_ComponentBoundEvent_1_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAddPriv_C::BndEvt__addEvent_c_Button_K2Node_ComponentBoundEvent_1_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("addPriv_C", "BndEvt__addEvent_c_Button_K2Node_ComponentBoundEvent_1_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function addPriv.addPriv_C.ExecuteUbergraph_addPriv
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_text_text                                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_text_text_1                                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)

void UAddPriv_C::ExecuteUbergraph_addPriv(int32 EntryPoint, const class FString& CallFunc_text_text, int32 CallFunc_Conv_StringToInt_ReturnValue, class UM2data_C* CallFunc_game_game, TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_text_text_1, int32 CallFunc_Conv_StringToInt_ReturnValue_1, TArray<int32>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("addPriv_C", "ExecuteUbergraph_addPriv");

	Params::UAddPriv_C_ExecuteUbergraph_addPriv_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_text_text = CallFunc_text_text;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_text_text_1 = CallFunc_text_text_1;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


