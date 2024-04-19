#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass addEvent.addEvent_C
// (None)

class UClass* UAddEvent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("addEvent_C");

	return Clss;
}


// addEvent_C addEvent.Default__addEvent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAddEvent_C* UAddEvent_C::GetDefaultObj()
{
	static class UAddEvent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UAddEvent_C*>(UAddEvent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function addEvent.addEvent_C.setTypem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewParam                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_2                                   (None)

void UAddEvent_C::SetTypem(int32 NewParam, bool K2Node_SwitchInteger_CmpSuccess, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("addEvent_C", "setTypem");

	Params::UAddEvent_C_SetTypem_Params Parms{};

	Parms.NewParam = NewParam;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_SlateColor_2 = K2Node_MakeStruct_SlateColor_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function addEvent.addEvent_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UAddEvent_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("addEvent_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function addEvent.addEvent_C.BndEvt__addEvent_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAddEvent_C::BndEvt__addEvent_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("addEvent_C", "BndEvt__addEvent_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function addEvent.addEvent_C.BndEvt__addEvent_c_Button_K2Node_ComponentBoundEvent_1_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAddEvent_C::BndEvt__addEvent_c_Button_K2Node_ComponentBoundEvent_1_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("addEvent_C", "BndEvt__addEvent_c_Button_K2Node_ComponentBoundEvent_1_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function addEvent.addEvent_C.BndEvt__addEvent_c_Button_1_K2Node_ComponentBoundEvent_2_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAddEvent_C::BndEvt__addEvent_c_Button_1_K2Node_ComponentBoundEvent_2_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("addEvent_C", "BndEvt__addEvent_c_Button_1_K2Node_ComponentBoundEvent_2_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function addEvent.addEvent_C.BndEvt__addEvent_c_Button_131_K2Node_ComponentBoundEvent_3_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAddEvent_C::BndEvt__addEvent_c_Button_131_K2Node_ComponentBoundEvent_3_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("addEvent_C", "BndEvt__addEvent_c_Button_131_K2Node_ComponentBoundEvent_3_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function addEvent.addEvent_C.BndEvt__addEvent_c_Button_120_K2Node_ComponentBoundEvent_4_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAddEvent_C::BndEvt__addEvent_c_Button_120_K2Node_ComponentBoundEvent_4_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("addEvent_C", "BndEvt__addEvent_c_Button_120_K2Node_ComponentBoundEvent_4_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function addEvent.addEvent_C.BndEvt__addEvent_c_Button_2_K2Node_ComponentBoundEvent_5_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAddEvent_C::BndEvt__addEvent_c_Button_2_K2Node_ComponentBoundEvent_5_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("addEvent_C", "BndEvt__addEvent_c_Button_2_K2Node_ComponentBoundEvent_5_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function addEvent.addEvent_C.BndEvt__addEvent_c_Button_3_K2Node_ComponentBoundEvent_6_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAddEvent_C::BndEvt__addEvent_c_Button_3_K2Node_ComponentBoundEvent_6_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("addEvent_C", "BndEvt__addEvent_c_Button_3_K2Node_ComponentBoundEvent_6_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function addEvent.addEvent_C.BndEvt__addEvent_c_Button_4_K2Node_ComponentBoundEvent_7_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAddEvent_C::BndEvt__addEvent_c_Button_4_K2Node_ComponentBoundEvent_7_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("addEvent_C", "BndEvt__addEvent_c_Button_4_K2Node_ComponentBoundEvent_7_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function addEvent.addEvent_C.BndEvt__addEvent_c_Button_5_K2Node_ComponentBoundEvent_8_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAddEvent_C::BndEvt__addEvent_c_Button_5_K2Node_ComponentBoundEvent_8_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("addEvent_C", "BndEvt__addEvent_c_Button_5_K2Node_ComponentBoundEvent_8_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function addEvent.addEvent_C.BndEvt__addEvent_c_Button_6_K2Node_ComponentBoundEvent_9_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAddEvent_C::BndEvt__addEvent_c_Button_6_K2Node_ComponentBoundEvent_9_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("addEvent_C", "BndEvt__addEvent_c_Button_6_K2Node_ComponentBoundEvent_9_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function addEvent.addEvent_C.BndEvt__addEvent_c_Button_7_K2Node_ComponentBoundEvent_10_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAddEvent_C::BndEvt__addEvent_c_Button_7_K2Node_ComponentBoundEvent_10_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("addEvent_C", "BndEvt__addEvent_c_Button_7_K2Node_ComponentBoundEvent_10_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function addEvent.addEvent_C.BndEvt__addEvent_c_Button_8_K2Node_ComponentBoundEvent_11_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAddEvent_C::BndEvt__addEvent_c_Button_8_K2Node_ComponentBoundEvent_11_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("addEvent_C", "BndEvt__addEvent_c_Button_8_K2Node_ComponentBoundEvent_11_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function addEvent.addEvent_C.BndEvt__addEvent_c_Button_9_K2Node_ComponentBoundEvent_12_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAddEvent_C::BndEvt__addEvent_c_Button_9_K2Node_ComponentBoundEvent_12_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("addEvent_C", "BndEvt__addEvent_c_Button_9_K2Node_ComponentBoundEvent_12_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function addEvent.addEvent_C.BndEvt__addEvent_c_Button_10_K2Node_ComponentBoundEvent_13_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UAddEvent_C::BndEvt__addEvent_c_Button_10_K2Node_ComponentBoundEvent_13_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("addEvent_C", "BndEvt__addEvent_c_Button_10_K2Node_ComponentBoundEvent_13_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function addEvent.addEvent_C.ExecuteUbergraph_addEvent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_text_text                                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_text_text_1                                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_text_text_2                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_text_text_3                                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_2                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_3                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_text_text_4                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_text_text_5                                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_4                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_5                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_text_text_6                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_text_text_7                                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_6                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_7                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_text_text_8                                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_text_text_9                                             (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_8                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_9                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_10                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)

void UAddEvent_C::ExecuteUbergraph_addEvent(int32 EntryPoint, class UM2data_C* CallFunc_game_game, TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_text_text, const class FString& CallFunc_text_text_1, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1, const class FString& CallFunc_text_text_2, const class FString& CallFunc_text_text_3, int32 CallFunc_Conv_StringToInt_ReturnValue_2, int32 CallFunc_Conv_StringToInt_ReturnValue_3, const class FString& CallFunc_text_text_4, const class FString& CallFunc_text_text_5, int32 CallFunc_Conv_StringToInt_ReturnValue_4, int32 CallFunc_Conv_StringToInt_ReturnValue_5, const class FString& CallFunc_text_text_6, const class FString& CallFunc_text_text_7, int32 CallFunc_Conv_StringToInt_ReturnValue_6, int32 CallFunc_Conv_StringToInt_ReturnValue_7, const class FString& CallFunc_text_text_8, const class FString& CallFunc_text_text_9, int32 CallFunc_Conv_StringToInt_ReturnValue_8, int32 CallFunc_Conv_StringToInt_ReturnValue_9, int32 CallFunc_Conv_StringToInt_ReturnValue_10, TArray<int32>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("addEvent_C", "ExecuteUbergraph_addEvent");

	Params::UAddEvent_C_ExecuteUbergraph_addEvent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_text_text = CallFunc_text_text;
	Parms.CallFunc_text_text_1 = CallFunc_text_text_1;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.CallFunc_text_text_2 = CallFunc_text_text_2;
	Parms.CallFunc_text_text_3 = CallFunc_text_text_3;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_2 = CallFunc_Conv_StringToInt_ReturnValue_2;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_3 = CallFunc_Conv_StringToInt_ReturnValue_3;
	Parms.CallFunc_text_text_4 = CallFunc_text_text_4;
	Parms.CallFunc_text_text_5 = CallFunc_text_text_5;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_4 = CallFunc_Conv_StringToInt_ReturnValue_4;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_5 = CallFunc_Conv_StringToInt_ReturnValue_5;
	Parms.CallFunc_text_text_6 = CallFunc_text_text_6;
	Parms.CallFunc_text_text_7 = CallFunc_text_text_7;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_6 = CallFunc_Conv_StringToInt_ReturnValue_6;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_7 = CallFunc_Conv_StringToInt_ReturnValue_7;
	Parms.CallFunc_text_text_8 = CallFunc_text_text_8;
	Parms.CallFunc_text_text_9 = CallFunc_text_text_9;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_8 = CallFunc_Conv_StringToInt_ReturnValue_8;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_9 = CallFunc_Conv_StringToInt_ReturnValue_9;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_10 = CallFunc_Conv_StringToInt_ReturnValue_10;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


