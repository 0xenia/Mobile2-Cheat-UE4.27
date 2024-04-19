#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass msgbox.msgbox_C
// (None)

class UClass* UMsgbox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("msgbox_C");

	return Clss;
}


// msgbox_C msgbox.Default__msgbox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsgbox_C* UMsgbox_C::GetDefaultObj()
{
	static class UMsgbox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsgbox_C*>(UMsgbox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function msgbox.msgbox_C.Init
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_gtext_ReturnValue                                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_gtext_ReturnValue_1                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_gtext_ReturnValue_2                                     (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_gtext_ReturnValue_3                                     (ZeroConstructor, HasGetValueTypeHash)

void UMsgbox_C::Init(const class FString& CallFunc_gtext_ReturnValue, const class FString& CallFunc_gtext_ReturnValue_1, const class FString& CallFunc_gtext_ReturnValue_2, const class FString& CallFunc_gtext_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msgbox_C", "Init");

	Params::UMsgbox_C_Init_Params Parms{};

	Parms.CallFunc_gtext_ReturnValue = CallFunc_gtext_ReturnValue;
	Parms.CallFunc_gtext_ReturnValue_1 = CallFunc_gtext_ReturnValue_1;
	Parms.CallFunc_gtext_ReturnValue_2 = CallFunc_gtext_ReturnValue_2;
	Parms.CallFunc_gtext_ReturnValue_3 = CallFunc_gtext_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function msgbox.msgbox_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class FString                      CallFunc_gameString_text                                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue_1                         (None)

class FText UMsgbox_C::GetText_0(class FText CallFunc_Conv_StringToText_ReturnValue, const class FString& CallFunc_gameString_text, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msgbox_C", "GetText_0");

	Params::UMsgbox_C_GetText_0_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_gameString_text = CallFunc_gameString_text;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue_1 = CallFunc_Conv_StringToText_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function msgbox.msgbox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UMsgbox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msgbox_C", "PreConstruct");

	Params::UMsgbox_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function msgbox.msgbox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMsgbox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msgbox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function msgbox.msgbox_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMsgbox_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msgbox_C", "Tick");

	Params::UMsgbox_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function msgbox.msgbox_C.BndEvt__askRefine_evet_K2Node_ComponentBoundEvent_2_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMsgbox_C::BndEvt__askRefine_evet_K2Node_ComponentBoundEvent_2_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msgbox_C", "BndEvt__askRefine_evet_K2Node_ComponentBoundEvent_2_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function msgbox.msgbox_C.BndEvt__askRefine_hayir_K2Node_ComponentBoundEvent_4_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMsgbox_C::BndEvt__askRefine_hayir_K2Node_ComponentBoundEvent_4_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msgbox_C", "BndEvt__askRefine_hayir_K2Node_ComponentBoundEvent_4_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function msgbox.msgbox_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMsgbox_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msgbox_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function msgbox.msgbox_C.OK_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMsgbox_C::OK_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msgbox_C", "OK_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function msgbox.msgbox_C.CANCEL_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMsgbox_C::CANCEL_Event()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msgbox_C", "CANCEL_Event");



	UObject::ProcessEvent(Func, nullptr);

}


// Function msgbox.msgbox_C.ExecuteUbergraph_msgbox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameInstance*               CallFunc_GetGameInstance_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   K2Node_DynamicCast_AsM_2data                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APControl_C*                 CallFunc_pControl_pc                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMsgbox_C::ExecuteUbergraph_msgbox(int32 EntryPoint, class UM2data_C* CallFunc_game_game, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UM2data_C* CallFunc_game_game_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, class APControl_C* CallFunc_pControl_pc, class UM2data_C* CallFunc_game_game_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msgbox_C", "ExecuteUbergraph_msgbox");

	Params::UMsgbox_C_ExecuteUbergraph_msgbox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;
	Parms.CallFunc_GetGameInstance_ReturnValue = CallFunc_GetGameInstance_ReturnValue;
	Parms.K2Node_DynamicCast_AsM_2data = K2Node_DynamicCast_AsM_2data;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_pControl_pc = CallFunc_pControl_pc;
	Parms.CallFunc_game_game_2 = CallFunc_game_game_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function msgbox.msgbox_C.tickk__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMsgbox_C::Tickk__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msgbox_C", "tickk__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function msgbox.msgbox_C.CANCEL__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMsgbox_C::CANCEL__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msgbox_C", "CANCEL__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function msgbox.msgbox_C.OK__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMsgbox_C::OK__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msgbox_C", "OK__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


