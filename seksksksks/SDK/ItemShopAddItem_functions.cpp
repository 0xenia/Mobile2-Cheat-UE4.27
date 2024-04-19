#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemShopAddItem.ItemShopAddItem_C
// (None)

class UClass* UItemShopAddItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemShopAddItem_C");

	return Clss;
}


// ItemShopAddItem_C ItemShopAddItem.Default__ItemShopAddItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemShopAddItem_C* UItemShopAddItem_C::GetDefaultObj()
{
	static class UItemShopAddItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemShopAddItem_C*>(UItemShopAddItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemShopAddItem.ItemShopAddItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemShopAddItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopAddItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemShopAddItem.ItemShopAddItem_C.BndEvt__ItemShopAddItem_c_Button_K2Node_ComponentBoundEvent_0_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemShopAddItem_C::BndEvt__ItemShopAddItem_c_Button_K2Node_ComponentBoundEvent_0_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopAddItem_C", "BndEvt__ItemShopAddItem_c_Button_K2Node_ComponentBoundEvent_0_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemShopAddItem.ItemShopAddItem_C.BndEvt__ItemShopAddItem_w_window_K2Node_ComponentBoundEvent_1__close__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemShopAddItem_C::BndEvt__ItemShopAddItem_w_window_K2Node_ComponentBoundEvent_1__close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopAddItem_C", "BndEvt__ItemShopAddItem_w_window_K2Node_ComponentBoundEvent_1__close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemShopAddItem.ItemShopAddItem_C.ExecuteUbergraph_ItemShopAddItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
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
// TArray<int32>                      K2Node_MakeArray_Array_1                                         (ReferenceParm)

void UItemShopAddItem_C::ExecuteUbergraph_ItemShopAddItem(int32 EntryPoint, const class FString& CallFunc_Conv_IntToString_ReturnValue, class UM2data_C* CallFunc_game_game, TArray<class FString>& K2Node_MakeArray_Array, const class FString& CallFunc_text_text, const class FString& CallFunc_text_text_1, int32 CallFunc_Conv_StringToInt_ReturnValue, int32 CallFunc_Conv_StringToInt_ReturnValue_1, const class FString& CallFunc_text_text_2, const class FString& CallFunc_text_text_3, int32 CallFunc_Conv_StringToInt_ReturnValue_2, int32 CallFunc_Conv_StringToInt_ReturnValue_3, const class FString& CallFunc_text_text_4, const class FString& CallFunc_text_text_5, int32 CallFunc_Conv_StringToInt_ReturnValue_4, int32 CallFunc_Conv_StringToInt_ReturnValue_5, TArray<int32>& K2Node_MakeArray_Array_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopAddItem_C", "ExecuteUbergraph_ItemShopAddItem");

	Params::UItemShopAddItem_C_ExecuteUbergraph_ItemShopAddItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
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
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


