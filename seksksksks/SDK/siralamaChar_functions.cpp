#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass siralamaChar.siralamaChar_C
// (None)

class UClass* USiralamaChar_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("siralamaChar_C");

	return Clss;
}


// siralamaChar_C siralamaChar.Default__siralamaChar_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USiralamaChar_C* USiralamaChar_C::GetDefaultObj()
{
	static class USiralamaChar_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USiralamaChar_C*>(USiralamaChar_C::StaticClass()->DefaultObject);

	return Default;
}


// Function siralamaChar.siralamaChar_C.langer1
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_Gtext_text                                              (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_Gtext_text_1                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)
// class FString                      CallFunc_Gtext_text_2                                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Gtext_text_3                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_2                         (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_3                         (None)
// class FString                      CallFunc_Gtext_text_4                                            (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_4                         (None)

void USiralamaChar_C::Langer1(const class FString& CallFunc_Gtext_text, class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_Gtext_text_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, const class FString& CallFunc_Gtext_text_2, const class FString& CallFunc_Gtext_text_3, class FText CallFunc_Conv_StringToText_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, const class FString& CallFunc_Gtext_text_4, class FText CallFunc_Conv_StringToText_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("siralamaChar_C", "langer1");

	Params::USiralamaChar_C_Langer1_Params Parms{};

	Parms.CallFunc_Gtext_text = CallFunc_Gtext_text;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_Gtext_text_1 = CallFunc_Gtext_text_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;
	Parms.CallFunc_Gtext_text_2 = CallFunc_Gtext_text_2;
	Parms.CallFunc_Gtext_text_3 = CallFunc_Gtext_text_3;
	Parms.CallFunc_Conv_StringToText_ReturnValue_2 = CallFunc_Conv_StringToText_ReturnValue_2;
	Parms.CallFunc_Conv_StringToText_ReturnValue_3 = CallFunc_Conv_StringToText_ReturnValue_3;
	Parms.CallFunc_Gtext_text_4 = CallFunc_Gtext_text_4;
	Parms.CallFunc_Conv_StringToText_ReturnValue_4 = CallFunc_Conv_StringToText_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function siralamaChar.siralamaChar_C.getIt
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<int32>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USiralamaChar_C::GetIt(TArray<class FString>& K2Node_MakeArray_Array, TArray<int32>& K2Node_MakeArray_Array_1, class UM2data_C* CallFunc_game_game)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("siralamaChar_C", "getIt");

	Params::USiralamaChar_C_GetIt_Params Parms{};

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_game_game = CallFunc_game_game;

	UObject::ProcessEvent(Func, &Parms);

}


// Function siralamaChar.siralamaChar_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void USiralamaChar_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("siralamaChar_C", "PreConstruct");

	Params::USiralamaChar_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function siralamaChar.siralamaChar_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void USiralamaChar_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("siralamaChar_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function siralamaChar.siralamaChar_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USiralamaChar_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("siralamaChar_C", "Tick");

	Params::USiralamaChar_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function siralamaChar.siralamaChar_C.BndEvt__closeBut_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USiralamaChar_C::BndEvt__closeBut_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("siralamaChar_C", "BndEvt__closeBut_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function siralamaChar.siralamaChar_C.BndEvt__siralamaChar_w_window_K2Node_ComponentBoundEvent_1__close__DelegateSignature
// (BlueprintEvent)
// Parameters:

void USiralamaChar_C::BndEvt__siralamaChar_w_window_K2Node_ComponentBoundEvent_1__close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("siralamaChar_C", "BndEvt__siralamaChar_w_window_K2Node_ComponentBoundEvent_1__close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function siralamaChar.siralamaChar_C.ExecuteUbergraph_siralamaChar
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void USiralamaChar_C::ExecuteUbergraph_siralamaChar(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UM2data_C* CallFunc_game_game, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("siralamaChar_C", "ExecuteUbergraph_siralamaChar");

	Params::USiralamaChar_C_ExecuteUbergraph_siralamaChar_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


