#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass banner.banner_C
// (None)

class UClass* Ubanner_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("banner_C");

	return Clss;
}


// banner_C banner.Default__banner_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Ubanner_C* Ubanner_C::GetDefaultObj()
{
	static class Ubanner_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Ubanner_C*>(Ubanner_C::StaticClass()->DefaultObject);

	return Default;
}


// Function banner.banner_C.setSure
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SureMin                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UC_Button_C*                 Ref                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)

void Ubanner_C::SetSure(int32 SureMin, class UC_Button_C* Ref, const class FString& CallFunc_Conv_IntToString_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("banner_C", "setSure");

	Params::Ubanner_C_SetSure_Params Parms{};

	Parms.SureMin = SureMin;
	Parms.Ref = Ref;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function banner.banner_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void Ubanner_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("banner_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function banner.banner_C.BndEvt__addEvent_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature
// (BlueprintEvent)
// Parameters:

void Ubanner_C::BndEvt__addEvent_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("banner_C", "BndEvt__addEvent_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function banner.banner_C.BndEvt__addEvent_c_Button_K2Node_ComponentBoundEvent_1_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void Ubanner_C::BndEvt__addEvent_c_Button_K2Node_ComponentBoundEvent_1_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("banner_C", "BndEvt__addEvent_c_Button_K2Node_ComponentBoundEvent_1_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function banner.banner_C.BndEvt__addEvent_c_Button_1_K2Node_ComponentBoundEvent_2_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void Ubanner_C::BndEvt__addEvent_c_Button_1_K2Node_ComponentBoundEvent_2_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("banner_C", "BndEvt__addEvent_c_Button_1_K2Node_ComponentBoundEvent_2_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function banner.banner_C.BndEvt__addEvent_c_Button_131_K2Node_ComponentBoundEvent_3_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void Ubanner_C::BndEvt__addEvent_c_Button_131_K2Node_ComponentBoundEvent_3_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("banner_C", "BndEvt__addEvent_c_Button_131_K2Node_ComponentBoundEvent_3_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function banner.banner_C.BndEvt__banner_c_Button_3_K2Node_ComponentBoundEvent_14_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void Ubanner_C::BndEvt__banner_c_Button_3_K2Node_ComponentBoundEvent_14_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("banner_C", "BndEvt__banner_c_Button_3_K2Node_ComponentBoundEvent_14_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function banner.banner_C.BndEvt__banner_c_Button_2_K2Node_ComponentBoundEvent_15_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void Ubanner_C::BndEvt__banner_c_Button_2_K2Node_ComponentBoundEvent_15_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("banner_C", "BndEvt__banner_c_Button_2_K2Node_ComponentBoundEvent_15_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function banner.banner_C.BndEvt__banner_c_Button_4_K2Node_ComponentBoundEvent_16_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void Ubanner_C::BndEvt__banner_c_Button_4_K2Node_ComponentBoundEvent_16_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("banner_C", "BndEvt__banner_c_Button_4_K2Node_ComponentBoundEvent_16_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function banner.banner_C.BndEvt__banner_c_Button_5_K2Node_ComponentBoundEvent_17_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void Ubanner_C::BndEvt__banner_c_Button_5_K2Node_ComponentBoundEvent_17_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("banner_C", "BndEvt__banner_c_Button_5_K2Node_ComponentBoundEvent_17_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function banner.banner_C.BndEvt__banner_c_Button_6_K2Node_ComponentBoundEvent_18_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void Ubanner_C::BndEvt__banner_c_Button_6_K2Node_ComponentBoundEvent_18_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("banner_C", "BndEvt__banner_c_Button_6_K2Node_ComponentBoundEvent_18_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function banner.banner_C.BndEvt__banner_c_Button_7_K2Node_ComponentBoundEvent_19_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void Ubanner_C::BndEvt__banner_c_Button_7_K2Node_ComponentBoundEvent_19_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("banner_C", "BndEvt__banner_c_Button_7_K2Node_ComponentBoundEvent_19_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function banner.banner_C.BndEvt__banner_c_Button_8_K2Node_ComponentBoundEvent_20_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void Ubanner_C::BndEvt__banner_c_Button_8_K2Node_ComponentBoundEvent_20_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("banner_C", "BndEvt__banner_c_Button_8_K2Node_ComponentBoundEvent_20_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function banner.banner_C.ExecuteUbergraph_banner
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_text_text                                               (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<int32>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_text_text_1                                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_text_text_2                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array_2                                         (ReferenceParm)
// bool                               CallFunc_IsChecked_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsChecked_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_BoolToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array_3                                         (ReferenceParm)

void Ubanner_C::ExecuteUbergraph_banner(int32 EntryPoint, class UM2data_C* CallFunc_game_game, const class FString& CallFunc_text_text, int32 CallFunc_Conv_StringToInt_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, TArray<int32>& K2Node_MakeArray_Array_1, class UM2data_C* CallFunc_game_game_1, const class FString& CallFunc_text_text_1, int32 CallFunc_Conv_StringToInt_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_text_text_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, TArray<class FString>& K2Node_MakeArray_Array_2, bool CallFunc_IsChecked_ReturnValue, bool CallFunc_IsChecked_ReturnValue_1, int32 CallFunc_Conv_BoolToInt_ReturnValue, int32 CallFunc_Conv_BoolToInt_ReturnValue_1, TArray<int32>& K2Node_MakeArray_Array_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("banner_C", "ExecuteUbergraph_banner");

	Params::Ubanner_C_ExecuteUbergraph_banner_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_text_text = CallFunc_text_text;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;
	Parms.CallFunc_text_text_1 = CallFunc_text_text_1;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_text_text_2 = CallFunc_text_text_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_IsChecked_ReturnValue = CallFunc_IsChecked_ReturnValue;
	Parms.CallFunc_IsChecked_ReturnValue_1 = CallFunc_IsChecked_ReturnValue_1;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue = CallFunc_Conv_BoolToInt_ReturnValue;
	Parms.CallFunc_Conv_BoolToInt_ReturnValue_1 = CallFunc_Conv_BoolToInt_ReturnValue_1;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


