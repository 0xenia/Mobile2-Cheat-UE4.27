#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass charBoxLonca.charBoxLonca_C
// (None)

class UClass* UCharBoxLonca_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("charBoxLonca_C");

	return Clss;
}


// charBoxLonca_C charBoxLonca.Default__charBoxLonca_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharBoxLonca_C* UCharBoxLonca_C::GetDefaultObj()
{
	static class UCharBoxLonca_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharBoxLonca_C*>(UCharBoxLonca_C::StaticClass()->DefaultObject);

	return Default;
}


// Function charBoxLonca.charBoxLonca_C.GetVisibility_0
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class ESlateVisibility UCharBoxLonca_C::GetVisibility_0(class UM2data_C* CallFunc_game_game)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("charBoxLonca_C", "GetVisibility_0");

	Params::UCharBoxLonca_C_GetVisibility_0_Params Parms{};

	Parms.CallFunc_game_game = CallFunc_game_game;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function charBoxLonca.charBoxLonca_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCharBoxLonca_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("charBoxLonca_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function charBoxLonca.charBoxLonca_C.BndEvt__charBoxLonca_c_Button_K2Node_ComponentBoundEvent_0_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharBoxLonca_C::BndEvt__charBoxLonca_c_Button_K2Node_ComponentBoundEvent_0_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("charBoxLonca_C", "BndEvt__charBoxLonca_c_Button_K2Node_ComponentBoundEvent_0_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function charBoxLonca.charBoxLonca_C.BndEvt__charBoxLonca_c_Button_1_K2Node_ComponentBoundEvent_1_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCharBoxLonca_C::BndEvt__charBoxLonca_c_Button_1_K2Node_ComponentBoundEvent_1_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("charBoxLonca_C", "BndEvt__charBoxLonca_c_Button_1_K2Node_ComponentBoundEvent_1_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function charBoxLonca.charBoxLonca_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UCharBoxLonca_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("charBoxLonca_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function charBoxLonca.charBoxLonca_C.ExecuteUbergraph_charBoxLonca
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsgbox_C*                   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_dotNumberS_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_getRank_rankText                                        (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// struct FSlateBrush                 CallFunc_getCharImage_NewParam1                                  (None)
// class ULoncaRutbeChange_C*         CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Gtext_text                                              (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class UM2data_C*                   CallFunc_game_game_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<int32>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)

void UCharBoxLonca_C::ExecuteUbergraph_charBoxLonca(int32 EntryPoint, class UM2data_C* CallFunc_game_game, class UMsgbox_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UM2data_C* CallFunc_game_game_1, class UM2data_C* CallFunc_game_game_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_dotNumberS_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_getRank_rankText, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FSlateBrush& CallFunc_getCharImage_NewParam1, class ULoncaRutbeChange_C* CallFunc_Create_ReturnValue_1, const class FString& CallFunc_Gtext_text, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UM2data_C* CallFunc_game_game_3, TArray<class FString>& K2Node_MakeArray_Array, TArray<int32>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("charBoxLonca_C", "ExecuteUbergraph_charBoxLonca");

	Params::UCharBoxLonca_C_ExecuteUbergraph_charBoxLonca_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;
	Parms.CallFunc_game_game_2 = CallFunc_game_game_2;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_dotNumberS_ReturnValue = CallFunc_dotNumberS_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_getRank_rankText = CallFunc_getRank_rankText;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_getCharImage_NewParam1 = CallFunc_getCharImage_NewParam1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_Gtext_text = CallFunc_Gtext_text;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_game_game_3 = CallFunc_game_game_3;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


