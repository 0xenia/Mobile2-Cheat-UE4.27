#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass costumeAttr.costumeAttr_C
// (None)

class UClass* UCostumeAttr_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("costumeAttr_C");

	return Clss;
}


// costumeAttr_C costumeAttr.Default__costumeAttr_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCostumeAttr_C* UCostumeAttr_C::GetDefaultObj()
{
	static class UCostumeAttr_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCostumeAttr_C*>(UCostumeAttr_C::StaticClass()->DefaultObject);

	return Default;
}


// Function costumeAttr.costumeAttr_C.setViews
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UView_C*                     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UView_C*                     CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIitem                      CallFunc_getItem_ob                                              (None)
// bool                               CallFunc_getItem_found                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIitem                      CallFunc_getItem_ob_1                                            (None)
// bool                               CallFunc_getItem_found_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCostumeAttr_C::SetViews(class UView_C* CallFunc_Create_ReturnValue, class UView_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, const struct FIitem& CallFunc_getItem_ob, bool CallFunc_getItem_found, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FIitem& CallFunc_getItem_ob_1, bool CallFunc_getItem_found_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("costumeAttr_C", "setViews");

	Params::UCostumeAttr_C_SetViews_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_getItem_ob = CallFunc_getItem_ob;
	Parms.CallFunc_getItem_found = CallFunc_getItem_found;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_getItem_ob_1 = CallFunc_getItem_ob_1;
	Parms.CallFunc_getItem_found_1 = CallFunc_getItem_found_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function costumeAttr.costumeAttr_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCostumeAttr_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("costumeAttr_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function costumeAttr.costumeAttr_C.BndEvt__costumeAttr_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCostumeAttr_C::BndEvt__costumeAttr_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("costumeAttr_C", "BndEvt__costumeAttr_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function costumeAttr.costumeAttr_C.BndEvt__costumeAttr_c_Button_K2Node_ComponentBoundEvent_1_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UCostumeAttr_C::BndEvt__costumeAttr_c_Button_K2Node_ComponentBoundEvent_1_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("costumeAttr_C", "BndEvt__costumeAttr_c_Button_K2Node_ComponentBoundEvent_1_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function costumeAttr.costumeAttr_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCostumeAttr_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("costumeAttr_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function costumeAttr.costumeAttr_C.ExecuteUbergraph_costumeAttr
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIitem                      CallFunc_getItem_ob                                              (None)
// bool                               CallFunc_getItem_found                                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// TArray<int32>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)

void UCostumeAttr_C::ExecuteUbergraph_costumeAttr(int32 EntryPoint, class UM2data_C* CallFunc_game_game, const struct FIitem& CallFunc_getItem_ob, bool CallFunc_getItem_found, class FText CallFunc_Conv_StringToText_ReturnValue, class UM2data_C* CallFunc_game_game_1, class UM2data_C* CallFunc_game_game_2, TArray<class FString>& K2Node_MakeArray_Array, TArray<int32>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("costumeAttr_C", "ExecuteUbergraph_costumeAttr");

	Params::UCostumeAttr_C_ExecuteUbergraph_costumeAttr_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_getItem_ob = CallFunc_getItem_ob;
	Parms.CallFunc_getItem_found = CallFunc_getItem_found;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;
	Parms.CallFunc_game_game_2 = CallFunc_game_game_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


