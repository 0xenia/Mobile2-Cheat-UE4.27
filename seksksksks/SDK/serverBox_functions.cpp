#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass serverBox.serverBox_C
// (None)

class UClass* UServerBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("serverBox_C");

	return Clss;
}


// serverBox_C serverBox.Default__serverBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UServerBox_C* UServerBox_C::GetDefaultObj()
{
	static class UServerBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UServerBox_C*>(UServerBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function serverBox.serverBox_C.colorer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UServerBox_C::Colorer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("serverBox_C", "colorer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function serverBox.serverBox_C.select
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UServerBox_C::Select()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("serverBox_C", "select");



	UObject::ProcessEvent(Func, nullptr);

}


// Function serverBox.serverBox_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   (None)

struct FEventReply UServerBox_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("serverBox_C", "OnMouseButtonDown_0");

	Params::UServerBox_C_OnMouseButtonDown_0_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function serverBox.serverBox_C.updateBox
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UServerBox_C::UpdateBox()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("serverBox_C", "updateBox");



	UObject::ProcessEvent(Func, nullptr);

}


// Function serverBox.serverBox_C.BndEvt__chBox_Button_97_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UServerBox_C::BndEvt__chBox_Button_97_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("serverBox_C", "BndEvt__chBox_Button_97_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function serverBox.serverBox_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UServerBox_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("serverBox_C", "OnMouseLeave");

	Params::UServerBox_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function serverBox.serverBox_C.Down
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UServerBox_C::Down()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("serverBox_C", "Down");



	UObject::ProcessEvent(Func, nullptr);

}


// Function serverBox.serverBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UServerBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("serverBox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function serverBox.serverBox_C.OnMouseEnter
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UServerBox_C::OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("serverBox_C", "OnMouseEnter");

	Params::UServerBox_C_OnMouseEnter_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function serverBox.serverBox_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UServerBox_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("serverBox_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function serverBox.serverBox_C.ExecuteUbergraph_serverBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMsgbox_C*                   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// TArray<int32>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_Gtext_text                                              (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FString                      CallFunc_formatText_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// class UM2save_C*                   CallFunc_m2save_save                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_MouseEvent_1                                        (ConstParm)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// class FString                      CallFunc_Gtext_text_1                                            (ZeroConstructor, HasGetValueTypeHash)

void UServerBox_C::ExecuteUbergraph_serverBox(int32 EntryPoint, class UMsgbox_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<int32>& K2Node_MakeArray_Array, const class FString& CallFunc_Gtext_text, TArray<class FString>& K2Node_MakeArray_Array_1, const class FString& CallFunc_formatText_ReturnValue, class UM2save_C* CallFunc_m2save_save, const struct FPointerEvent& K2Node_Event_MouseEvent_1, class UM2data_C* CallFunc_game_game, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent, const class FString& CallFunc_Gtext_text_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("serverBox_C", "ExecuteUbergraph_serverBox");

	Params::UServerBox_C_ExecuteUbergraph_serverBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Gtext_text = CallFunc_Gtext_text;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_formatText_ReturnValue = CallFunc_formatText_ReturnValue;
	Parms.CallFunc_m2save_save = CallFunc_m2save_save;
	Parms.K2Node_Event_MouseEvent_1 = K2Node_Event_MouseEvent_1;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.CallFunc_Gtext_text_1 = CallFunc_Gtext_text_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


