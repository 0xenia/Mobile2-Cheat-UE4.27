#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass newDm.newDm_C
// (None)

class UClass* UNewDm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("newDm_C");

	return Clss;
}


// newDm_C newDm.Default__newDm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNewDm_C* UNewDm_C::GetDefaultObj()
{
	static class UNewDm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNewDm_C*>(UNewDm_C::StaticClass()->DefaultObject);

	return Default;
}


// Function newDm.newDm_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UNewDm_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("newDm_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function newDm.newDm_C.BndEvt__newDm_c_Button_K2Node_ComponentBoundEvent_0_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UNewDm_C::BndEvt__newDm_c_Button_K2Node_ComponentBoundEvent_0_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("newDm_C", "BndEvt__newDm_c_Button_K2Node_ComponentBoundEvent_0_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function newDm.newDm_C.BndEvt__newDm_w_window_K2Node_ComponentBoundEvent_1__close__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UNewDm_C::BndEvt__newDm_w_window_K2Node_ComponentBoundEvent_1__close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("newDm_C", "BndEvt__newDm_w_window_K2Node_ComponentBoundEvent_1__close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function newDm.newDm_C.BndEvt__newDm_c_TextBox_K2Node_ComponentBoundEvent_2_onTextCommit__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// enum class ETextCommit             CommitMethod                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNewDm_C::BndEvt__newDm_c_TextBox_K2Node_ComponentBoundEvent_2_onTextCommit__DelegateSignature(class FText Text, enum class ETextCommit CommitMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("newDm_C", "BndEvt__newDm_c_TextBox_K2Node_ComponentBoundEvent_2_onTextCommit__DelegateSignature");

	Params::UNewDm_C_BndEvt__newDm_c_TextBox_K2Node_ComponentBoundEvent_2_onTextCommit__DelegateSignature_Params Parms{};

	Parms.Text = Text;
	Parms.CommitMethod = CommitMethod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function newDm.newDm_C.ExecuteUbergraph_newDm
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Gtext_text                                              (ZeroConstructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array                                           (ReferenceParm)
// class FString                      CallFunc_text_text                                               (ZeroConstructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FText                        K2Node_ComponentBoundEvent_Text                                  (None)
// enum class ETextCommit             K2Node_ComponentBoundEvent_CommitMethod                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UNewDm_C::ExecuteUbergraph_newDm(int32 EntryPoint, const class FString& CallFunc_Gtext_text, class UM2data_C* CallFunc_game_game, TArray<int32>& K2Node_MakeArray_Array, const class FString& CallFunc_text_text, TArray<class FString>& K2Node_MakeArray_Array_1, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("newDm_C", "ExecuteUbergraph_newDm");

	Params::UNewDm_C_ExecuteUbergraph_newDm_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Gtext_text = CallFunc_Gtext_text;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_text_text = CallFunc_text_text;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.K2Node_ComponentBoundEvent_Text = K2Node_ComponentBoundEvent_Text;
	Parms.K2Node_ComponentBoundEvent_CommitMethod = K2Node_ComponentBoundEvent_CommitMethod;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


