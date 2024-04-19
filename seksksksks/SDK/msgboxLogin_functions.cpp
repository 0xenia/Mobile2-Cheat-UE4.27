#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass msgboxLogin.msgboxLogin_C
// (None)

class UClass* UMsgboxLogin_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("msgboxLogin_C");

	return Clss;
}


// msgboxLogin_C msgboxLogin.Default__msgboxLogin_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMsgboxLogin_C* UMsgboxLogin_C::GetDefaultObj()
{
	static class UMsgboxLogin_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMsgboxLogin_C*>(UMsgboxLogin_C::StaticClass()->DefaultObject);

	return Default;
}


// Function msgboxLogin.msgboxLogin_C.BndEvt__msgbox_c_Button_K2Node_ComponentBoundEvent_3_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMsgboxLogin_C::BndEvt__msgbox_c_Button_K2Node_ComponentBoundEvent_3_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msgboxLogin_C", "BndEvt__msgbox_c_Button_K2Node_ComponentBoundEvent_3_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function msgboxLogin.msgboxLogin_C.BndEvt__msgboxLogin_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UMsgboxLogin_C::BndEvt__msgboxLogin_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msgboxLogin_C", "BndEvt__msgboxLogin_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function msgboxLogin.msgboxLogin_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMsgboxLogin_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msgboxLogin_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function msgboxLogin.msgboxLogin_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UMsgboxLogin_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msgboxLogin_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function msgboxLogin.msgboxLogin_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UMsgboxLogin_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msgboxLogin_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function msgboxLogin.msgboxLogin_C.ExecuteUbergraph_msgboxLogin
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_gtext_ReturnValue                                       (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class APControl_C*                 CallFunc_pControl_pc                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMsgboxLogin_C::ExecuteUbergraph_msgboxLogin(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_gtext_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class APControl_C* CallFunc_pControl_pc, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msgboxLogin_C", "ExecuteUbergraph_msgboxLogin");

	Params::UMsgboxLogin_C_ExecuteUbergraph_msgboxLogin_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_gtext_ReturnValue = CallFunc_gtext_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_pControl_pc = CallFunc_pControl_pc;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function msgboxLogin.msgboxLogin_C.onclose__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UMsgboxLogin_C::Onclose__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("msgboxLogin_C", "onclose__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


