#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass privs.privs_C
// (None)

class UClass* UPrivs_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("privs_C");

	return Clss;
}


// privs_C privs.Default__privs_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrivs_C* UPrivs_C::GetDefaultObj()
{
	static class UPrivs_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrivs_C*>(UPrivs_C::StaticClass()->DefaultObject);

	return Default;
}


// Function privs.privs_C.openAddWindow
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PrivId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAddPriv_C*                  CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPrivs_C::OpenAddWindow(int32 PrivId, class UAddPriv_C* CallFunc_Create_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("privs_C", "openAddWindow");

	Params::UPrivs_C_OpenAddWindow_Params Parms{};

	Parms.PrivId = PrivId;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function privs.privs_C.closePriv
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              PrivId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<int32>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPrivs_C::ClosePriv(int32 PrivId, TArray<class FString>& K2Node_MakeArray_Array, TArray<int32>& K2Node_MakeArray_Array_1, class UM2data_C* CallFunc_game_game)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("privs_C", "closePriv");

	Params::UPrivs_C_ClosePriv_Params Parms{};

	Parms.PrivId = PrivId;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_game_game = CallFunc_game_game;

	UObject::ProcessEvent(Func, &Parms);

}


// Function privs.privs_C.BndEvt__privs_c_Button_K2Node_ComponentBoundEvent_0_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPrivs_C::BndEvt__privs_c_Button_K2Node_ComponentBoundEvent_0_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("privs_C", "BndEvt__privs_c_Button_K2Node_ComponentBoundEvent_0_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function privs.privs_C.BndEvt__privs_c_Button_2_K2Node_ComponentBoundEvent_1_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPrivs_C::BndEvt__privs_c_Button_2_K2Node_ComponentBoundEvent_1_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("privs_C", "BndEvt__privs_c_Button_2_K2Node_ComponentBoundEvent_1_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function privs.privs_C.BndEvt__privs_c_Button_4_K2Node_ComponentBoundEvent_2_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPrivs_C::BndEvt__privs_c_Button_4_K2Node_ComponentBoundEvent_2_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("privs_C", "BndEvt__privs_c_Button_4_K2Node_ComponentBoundEvent_2_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function privs.privs_C.BndEvt__privs_c_Button_1_K2Node_ComponentBoundEvent_3_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPrivs_C::BndEvt__privs_c_Button_1_K2Node_ComponentBoundEvent_3_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("privs_C", "BndEvt__privs_c_Button_1_K2Node_ComponentBoundEvent_3_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function privs.privs_C.BndEvt__privs_c_Button_3_K2Node_ComponentBoundEvent_4_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPrivs_C::BndEvt__privs_c_Button_3_K2Node_ComponentBoundEvent_4_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("privs_C", "BndEvt__privs_c_Button_3_K2Node_ComponentBoundEvent_4_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function privs.privs_C.BndEvt__privs_c_Button_5_K2Node_ComponentBoundEvent_5_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPrivs_C::BndEvt__privs_c_Button_5_K2Node_ComponentBoundEvent_5_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("privs_C", "BndEvt__privs_c_Button_5_K2Node_ComponentBoundEvent_5_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function privs.privs_C.BndEvt__privs_w_window_K2Node_ComponentBoundEvent_6__close__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UPrivs_C::BndEvt__privs_w_window_K2Node_ComponentBoundEvent_6__close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("privs_C", "BndEvt__privs_w_window_K2Node_ComponentBoundEvent_6__close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function privs.privs_C.ExecuteUbergraph_privs
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPrivs_C::ExecuteUbergraph_privs(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("privs_C", "ExecuteUbergraph_privs");

	Params::UPrivs_C_ExecuteUbergraph_privs_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}


