#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass smsVerify.smsVerify_C
// (None)

class UClass* USmsVerify_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("smsVerify_C");

	return Clss;
}


// smsVerify_C smsVerify.Default__smsVerify_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USmsVerify_C* USmsVerify_C::GetDefaultObj()
{
	static class USmsVerify_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USmsVerify_C*>(USmsVerify_C::StaticClass()->DefaultObject);

	return Default;
}


// Function smsVerify.smsVerify_C.setCodeMode
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USmsVerify_C::SetCodeMode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("smsVerify_C", "setCodeMode");



	UObject::ProcessEvent(Func, nullptr);

}


// Function smsVerify.smsVerify_C.setAlan
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void USmsVerify_C::SetAlan(const class FString& A, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("smsVerify_C", "setAlan");

	Params::USmsVerify_C_SetAlan_Params Parms{};

	Parms.A = A;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function smsVerify.smsVerify_C.setLang
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class ULangButton_C*               Lango                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void USmsVerify_C::SetLang(class ULangButton_C* Lango, bool K2Node_SwitchString_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("smsVerify_C", "setLang");

	Params::USmsVerify_C_SetLang_Params Parms{};

	Parms.Lango = Lango;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function smsVerify.smsVerify_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply USmsVerify_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("smsVerify_C", "OnMouseButtonDown_0");

	Params::USmsVerify_C_OnMouseButtonDown_0_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function smsVerify.smsVerify_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USmsVerify_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("smsVerify_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function smsVerify.smsVerify_C.BndEvt__smsVerify_c_Button_K2Node_ComponentBoundEvent_1_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USmsVerify_C::BndEvt__smsVerify_c_Button_K2Node_ComponentBoundEvent_1_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("smsVerify_C", "BndEvt__smsVerify_c_Button_K2Node_ComponentBoundEvent_1_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function smsVerify.smsVerify_C.BndEvt__smsVerify_c_Button_1_K2Node_ComponentBoundEvent_2_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USmsVerify_C::BndEvt__smsVerify_c_Button_1_K2Node_ComponentBoundEvent_2_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("smsVerify_C", "BndEvt__smsVerify_c_Button_1_K2Node_ComponentBoundEvent_2_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function smsVerify.smsVerify_C.ExecuteUbergraph_smsVerify
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_text_text                                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        CallFunc_GetText_ReturnValue                                     (None)
// class FString                      CallFunc_text_text_1                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsEmpty_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class UM2data_C*                   CallFunc_game_game_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array_3                                         (ReferenceParm)

void USmsVerify_C::ExecuteUbergraph_smsVerify(int32 EntryPoint, const class FString& CallFunc_text_text, bool CallFunc_IsEmpty_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, TArray<int32>& K2Node_MakeArray_Array_1, class FText CallFunc_GetText_ReturnValue, const class FString& CallFunc_text_text_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array_2, class UM2data_C* CallFunc_game_game_2, TArray<int32>& K2Node_MakeArray_Array_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("smsVerify_C", "ExecuteUbergraph_smsVerify");

	Params::USmsVerify_C_ExecuteUbergraph_smsVerify_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_text_text = CallFunc_text_text;
	Parms.CallFunc_IsEmpty_ReturnValue = CallFunc_IsEmpty_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetText_ReturnValue = CallFunc_GetText_ReturnValue;
	Parms.CallFunc_text_text_1 = CallFunc_text_text_1;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_IsEmpty_ReturnValue_1 = CallFunc_IsEmpty_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_game_game_2 = CallFunc_game_game_2;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


