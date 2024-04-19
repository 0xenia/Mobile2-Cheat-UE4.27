#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass makeLonca.makeLonca_C
// (None)

class UClass* UMakeLonca_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("makeLonca_C");

	return Clss;
}


// makeLonca_C makeLonca.Default__makeLonca_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMakeLonca_C* UMakeLonca_C::GetDefaultObj()
{
	static class UMakeLonca_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMakeLonca_C*>(UMakeLonca_C::StaticClass()->DefaultObject);

	return Default;
}


// Function makeLonca.makeLonca_C.BndEvt__makeLonca_c_Button_K2Node_ComponentBoundEvent_0_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMakeLonca_C::BndEvt__makeLonca_c_Button_K2Node_ComponentBoundEvent_0_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("makeLonca_C", "BndEvt__makeLonca_c_Button_K2Node_ComponentBoundEvent_0_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function makeLonca.makeLonca_C.BndEvt__makeLonca_w_window_K2Node_ComponentBoundEvent_1__close__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMakeLonca_C::BndEvt__makeLonca_w_window_K2Node_ComponentBoundEvent_1__close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("makeLonca_C", "BndEvt__makeLonca_w_window_K2Node_ComponentBoundEvent_1__close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function makeLonca.makeLonca_C.ExecuteUbergraph_makeLonca
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_text_text                                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_text_text_1                                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Gtext_text                                              (ZeroConstructor, HasGetValueTypeHash)

void UMakeLonca_C::ExecuteUbergraph_makeLonca(int32 EntryPoint, class UM2data_C* CallFunc_game_game, TArray<int32>& K2Node_MakeArray_Array, const class FString& CallFunc_text_text, const class FString& CallFunc_text_text_1, TArray<class FString>& K2Node_MakeArray_Array_1, bool CallFunc_Contains_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, const class FString& CallFunc_Gtext_text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("makeLonca_C", "ExecuteUbergraph_makeLonca");

	Params::UMakeLonca_C_ExecuteUbergraph_makeLonca_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_text_text = CallFunc_text_text;
	Parms.CallFunc_text_text_1 = CallFunc_text_text_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Gtext_text = CallFunc_Gtext_text;

	UObject::ProcessEvent(Func, &Parms);

}

}


