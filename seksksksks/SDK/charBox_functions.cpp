#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass charBox.charBox_C
// (None)

class UClass* UCharBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("charBox_C");

	return Clss;
}


// charBox_C charBox.Default__charBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharBox_C* UCharBox_C::GetDefaultObj()
{
	static class UCharBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharBox_C*>(UCharBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function charBox.charBox_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)
// struct FItem                       K2Node_MakeStruct_item                                           (HasGetValueTypeHash)
// struct FItem                       K2Node_MakeStruct_item_1                                         (HasGetValueTypeHash)
// struct FItem                       K2Node_MakeStruct_item_2                                         (HasGetValueTypeHash)
// struct FItem                       K2Node_MakeStruct_item_3                                         (HasGetValueTypeHash)
// struct FItem                       K2Node_MakeStruct_item_4                                         (HasGetValueTypeHash)
// struct FItem                       K2Node_MakeStruct_item_5                                         (HasGetValueTypeHash)
// struct FItem                       K2Node_MakeStruct_item_6                                         (HasGetValueTypeHash)
// struct FItem                       K2Node_MakeStruct_item_7                                         (HasGetValueTypeHash)
// struct FItem                       K2Node_MakeStruct_item_8                                         (HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItem                       K2Node_MakeStruct_item_9                                         (HasGetValueTypeHash)
// struct FItem                       K2Node_MakeStruct_item_10                                        (HasGetValueTypeHash)
// struct FItem                       K2Node_MakeStruct_item_11                                        (HasGetValueTypeHash)
// struct FItem                       K2Node_MakeStruct_item_12                                        (HasGetValueTypeHash)
// struct FItem                       K2Node_MakeStruct_item_13                                        (HasGetValueTypeHash)
// struct FItem                       K2Node_MakeStruct_item_14                                        (HasGetValueTypeHash)
// struct FItem                       K2Node_MakeStruct_item_15                                        (HasGetValueTypeHash)
// struct FItem                       K2Node_MakeStruct_item_16                                        (HasGetValueTypeHash)
// struct FItem                       K2Node_MakeStruct_item_17                                        (HasGetValueTypeHash)
// int32                              CallFunc_Conv_StringToInt_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharBox_C::Init(const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FItem& K2Node_MakeStruct_item, const struct FItem& K2Node_MakeStruct_item_1, const struct FItem& K2Node_MakeStruct_item_2, const struct FItem& K2Node_MakeStruct_item_3, const struct FItem& K2Node_MakeStruct_item_4, const struct FItem& K2Node_MakeStruct_item_5, const struct FItem& K2Node_MakeStruct_item_6, const struct FItem& K2Node_MakeStruct_item_7, const struct FItem& K2Node_MakeStruct_item_8, int32 CallFunc_Conv_StringToInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, bool CallFunc_Less_IntInt_ReturnValue, const struct FItem& K2Node_MakeStruct_item_9, const struct FItem& K2Node_MakeStruct_item_10, const struct FItem& K2Node_MakeStruct_item_11, const struct FItem& K2Node_MakeStruct_item_12, const struct FItem& K2Node_MakeStruct_item_13, const struct FItem& K2Node_MakeStruct_item_14, const struct FItem& K2Node_MakeStruct_item_15, const struct FItem& K2Node_MakeStruct_item_16, const struct FItem& K2Node_MakeStruct_item_17, int32 CallFunc_Conv_StringToInt_ReturnValue_1, bool K2Node_SwitchInteger_CmpSuccess_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("charBox_C", "Init");

	Params::UCharBox_C_Init_Params Parms{};

	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;
	Parms.K2Node_MakeStruct_item = K2Node_MakeStruct_item;
	Parms.K2Node_MakeStruct_item_1 = K2Node_MakeStruct_item_1;
	Parms.K2Node_MakeStruct_item_2 = K2Node_MakeStruct_item_2;
	Parms.K2Node_MakeStruct_item_3 = K2Node_MakeStruct_item_3;
	Parms.K2Node_MakeStruct_item_4 = K2Node_MakeStruct_item_4;
	Parms.K2Node_MakeStruct_item_5 = K2Node_MakeStruct_item_5;
	Parms.K2Node_MakeStruct_item_6 = K2Node_MakeStruct_item_6;
	Parms.K2Node_MakeStruct_item_7 = K2Node_MakeStruct_item_7;
	Parms.K2Node_MakeStruct_item_8 = K2Node_MakeStruct_item_8;
	Parms.CallFunc_Conv_StringToInt_ReturnValue = CallFunc_Conv_StringToInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_item_9 = K2Node_MakeStruct_item_9;
	Parms.K2Node_MakeStruct_item_10 = K2Node_MakeStruct_item_10;
	Parms.K2Node_MakeStruct_item_11 = K2Node_MakeStruct_item_11;
	Parms.K2Node_MakeStruct_item_12 = K2Node_MakeStruct_item_12;
	Parms.K2Node_MakeStruct_item_13 = K2Node_MakeStruct_item_13;
	Parms.K2Node_MakeStruct_item_14 = K2Node_MakeStruct_item_14;
	Parms.K2Node_MakeStruct_item_15 = K2Node_MakeStruct_item_15;
	Parms.K2Node_MakeStruct_item_16 = K2Node_MakeStruct_item_16;
	Parms.K2Node_MakeStruct_item_17 = K2Node_MakeStruct_item_17;
	Parms.CallFunc_Conv_StringToInt_ReturnValue_1 = CallFunc_Conv_StringToInt_ReturnValue_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function charBox.charBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UCharBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("charBox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function charBox.charBox_C.ExecuteUbergraph_charBox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_getCharImage_NewParam1                                  (None)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)
// class FString                      CallFunc_dotNumberS_ReturnValue                                  (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UCharBox_C::ExecuteUbergraph_charBox(int32 EntryPoint, class UM2data_C* CallFunc_game_game, const struct FSlateBrush& CallFunc_getCharImage_NewParam1, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const class FString& CallFunc_dotNumberS_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("charBox_C", "ExecuteUbergraph_charBox");

	Params::UCharBox_C_ExecuteUbergraph_charBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_getCharImage_NewParam1 = CallFunc_getCharImage_NewParam1;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_dotNumberS_ReturnValue = CallFunc_dotNumberS_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


