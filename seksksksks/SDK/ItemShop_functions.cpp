#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass ItemShop.ItemShop_C
// (None)

class UClass* UItemShop_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemShop_C");

	return Clss;
}


// ItemShop_C ItemShop.Default__ItemShop_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UItemShop_C* UItemShop_C::GetDefaultObj()
{
	static class UItemShop_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UItemShop_C*>(UItemShop_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemShop.ItemShop_C.SequenceEvent__ENTRYPOINTItemShop_0
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      bg                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemShop_C::SequenceEvent__ENTRYPOINTItemShop_0(class UImage* bg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "SequenceEvent__ENTRYPOINTItemShop_0");

	Params::UItemShop_C_SequenceEvent__ENTRYPOINTItemShop_0_Params Parms{};

	Parms.bg = bg;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShop.ItemShop_C.hacker
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharData                   CallFunc_getCharData_chardata                                    (None)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemShop_C::Hacker(class UM2data_C* CallFunc_game_game, const struct FCharData& CallFunc_getCharData_chardata, bool CallFunc_EqualEqual_StrStr_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "hacker");

	Params::UItemShop_C_Hacker_Params Parms{};

	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_getCharData_chardata = CallFunc_getCharData_chardata;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShop.ItemShop_C.langer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Contains_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemShop_C::Langer(class UM2data_C* CallFunc_game_game, bool CallFunc_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "langer");

	Params::UItemShop_C_Langer_Params Parms{};

	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_Contains_ReturnValue = CallFunc_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShop.ItemShop_C.resetCam
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemShop_C::ResetCam(class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, bool CallFunc_EqualEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "resetCam");

	Params::UItemShop_C_ResetCam_Params Parms{};

	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShop.ItemShop_C.Get_coinT_Text_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FCharData                   CallFunc_getCharData_chardata                                    (None)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UItemShop_C::Get_coinT_Text_0(const struct FCharData& CallFunc_getCharData_chardata, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "Get_coinT_Text_0");

	Params::UItemShop_C_Get_coinT_Text_0_Params Parms{};

	Parms.CallFunc_getCharData_chardata = CallFunc_getCharData_chardata;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemShop.ItemShop_C.showCategory
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemShopBanner_C*           CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemShopProduct_C*          CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UItemShopProduct_C*          CallFunc_Create_ReturnValue_2                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItem                       CallFunc_Array_Get_Item                                          (HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue_1                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWrapBoxSlot*                K2Node_DynamicCast_AsWrap_Box_Slot                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FIitem                      CallFunc_getItem_item                                            (None)
// bool                               CallFunc_itemCanUse_isCanUse                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_itemCanUse_message                                      (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_itemCanUse_whoUse                                       (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemShop_C::ShowCategory(int32 ID, class UItemShopBanner_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UItemShopProduct_C* CallFunc_Create_ReturnValue_1, class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UItemShopProduct_C* CallFunc_Create_ReturnValue_2, const struct FItem& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class UWrapBoxSlot* K2Node_DynamicCast_AsWrap_Box_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FIitem& CallFunc_getItem_item, bool CallFunc_itemCanUse_isCanUse, const class FString& CallFunc_itemCanUse_message, const class FString& CallFunc_itemCanUse_whoUse, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "showCategory");

	Params::UItemShop_C_ShowCategory_Params Parms{};

	Parms.ID = ID;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_2 = CallFunc_Create_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue_1 = CallFunc_AddChild_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsWrap_Box_Slot = K2Node_DynamicCast_AsWrap_Box_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_getItem_item = CallFunc_getItem_item;
	Parms.CallFunc_itemCanUse_isCanUse = CallFunc_itemCanUse_isCanUse;
	Parms.CallFunc_itemCanUse_message = CallFunc_itemCanUse_message;
	Parms.CallFunc_itemCanUse_whoUse = CallFunc_itemCanUse_whoUse;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShop.ItemShop_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_3                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_4                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_7                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_8                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_9                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_5                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_10                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_11                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_6                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_12                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Multiply_IntInt_ReturnValue_7                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_13                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_14                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_15                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_16                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItem                       K2Node_MakeStruct_item                                           (HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemShop_C::Init(int32 Temp_int_Variable, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Multiply_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Multiply_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Multiply_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_8, int32 CallFunc_Add_IntInt_ReturnValue_9, int32 CallFunc_Multiply_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_10, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_11, const class FString& CallFunc_Conv_IntToString_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_12, int32 CallFunc_Multiply_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_13, int32 CallFunc_Add_IntInt_ReturnValue_14, int32 CallFunc_Add_IntInt_ReturnValue_15, int32 CallFunc_Add_IntInt_ReturnValue_16, const struct FItem& K2Node_MakeStruct_item, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "Init");

	Params::UItemShop_C_Init_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Multiply_IntInt_ReturnValue = CallFunc_Multiply_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_1 = CallFunc_Multiply_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_2 = CallFunc_Multiply_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_3 = CallFunc_Multiply_IntInt_ReturnValue_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_4 = CallFunc_Multiply_IntInt_ReturnValue_4;
	Parms.CallFunc_Add_IntInt_ReturnValue_7 = CallFunc_Add_IntInt_ReturnValue_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_8 = CallFunc_Add_IntInt_ReturnValue_8;
	Parms.CallFunc_Add_IntInt_ReturnValue_9 = CallFunc_Add_IntInt_ReturnValue_9;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_5 = CallFunc_Multiply_IntInt_ReturnValue_5;
	Parms.CallFunc_Add_IntInt_ReturnValue_10 = CallFunc_Add_IntInt_ReturnValue_10;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_11 = CallFunc_Add_IntInt_ReturnValue_11;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_6 = CallFunc_Multiply_IntInt_ReturnValue_6;
	Parms.CallFunc_Add_IntInt_ReturnValue_12 = CallFunc_Add_IntInt_ReturnValue_12;
	Parms.CallFunc_Multiply_IntInt_ReturnValue_7 = CallFunc_Multiply_IntInt_ReturnValue_7;
	Parms.CallFunc_Add_IntInt_ReturnValue_13 = CallFunc_Add_IntInt_ReturnValue_13;
	Parms.CallFunc_Add_IntInt_ReturnValue_14 = CallFunc_Add_IntInt_ReturnValue_14;
	Parms.CallFunc_Add_IntInt_ReturnValue_15 = CallFunc_Add_IntInt_ReturnValue_15;
	Parms.CallFunc_Add_IntInt_ReturnValue_16 = CallFunc_Add_IntInt_ReturnValue_16;
	Parms.K2Node_MakeStruct_item = K2Node_MakeStruct_item;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShop.ItemShop_C.showView
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIitem                      Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class USlot_C*                     Slotref                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UView_C*                     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UOverlaySlot*                K2Node_DynamicCast_AsOverlay_Slot                                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemShop_C::ShowView(const struct FIitem& Item, class USlot_C* Slotref, class UView_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class UM2data_C* CallFunc_game_game, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UOverlaySlot* K2Node_DynamicCast_AsOverlay_Slot, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "showView");

	Params::UItemShop_C_ShowView_Params Parms{};

	Parms.Item = Item;
	Parms.Slotref = Slotref;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;
	Parms.K2Node_DynamicCast_AsOverlay_Slot = K2Node_DynamicCast_AsOverlay_Slot;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShop.ItemShop_C.OnMouseButtonDown_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     (None)

struct FEventReply UItemShop_C::OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, class UM2data_C* CallFunc_game_game, bool CallFunc_IsValid_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "OnMouseButtonDown_0");

	Params::UItemShop_C_OnMouseButtonDown_0_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.MouseEvent = MouseEvent;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ItemShop.ItemShop_C.closer
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UItemShop_C::Closer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "closer");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemShop.ItemShop_C.Open
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemShop_C::Open(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "Open");

	Params::UItemShop_C_Open_Params Parms{};

	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShop.ItemShop_C.OnFailure_C63B359648C3C7BB4764E2B110E71DCB
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInAppPurchaseStatus    PurchaseStatus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInAppPurchaseReceiptInfo2>InAppPurchaseReceipts                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemShop_C::OnFailure_C63B359648C3C7BB4764E2B110E71DCB(enum class EInAppPurchaseStatus PurchaseStatus, TArray<struct FInAppPurchaseReceiptInfo2>& InAppPurchaseReceipts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "OnFailure_C63B359648C3C7BB4764E2B110E71DCB");

	Params::UItemShop_C_OnFailure_C63B359648C3C7BB4764E2B110E71DCB_Params Parms{};

	Parms.PurchaseStatus = PurchaseStatus;
	Parms.InAppPurchaseReceipts = InAppPurchaseReceipts;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShop.ItemShop_C.OnSuccess_C63B359648C3C7BB4764E2B110E71DCB
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInAppPurchaseStatus    PurchaseStatus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInAppPurchaseReceiptInfo2>InAppPurchaseReceipts                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemShop_C::OnSuccess_C63B359648C3C7BB4764E2B110E71DCB(enum class EInAppPurchaseStatus PurchaseStatus, TArray<struct FInAppPurchaseReceiptInfo2>& InAppPurchaseReceipts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "OnSuccess_C63B359648C3C7BB4764E2B110E71DCB");

	Params::UItemShop_C_OnSuccess_C63B359648C3C7BB4764E2B110E71DCB_Params Parms{};

	Parms.PurchaseStatus = PurchaseStatus;
	Parms.InAppPurchaseReceipts = InAppPurchaseReceipts;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShop.ItemShop_C.OnFailure_EC0A00FB424F5C7AA57AC2A6901AFBA0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInAppPurchaseStatus    PurchaseStatus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInAppPurchaseRestoreInfo2>InAppPurchaseRestoreInfo                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemShop_C::OnFailure_EC0A00FB424F5C7AA57AC2A6901AFBA0(enum class EInAppPurchaseStatus PurchaseStatus, TArray<struct FInAppPurchaseRestoreInfo2>& InAppPurchaseRestoreInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "OnFailure_EC0A00FB424F5C7AA57AC2A6901AFBA0");

	Params::UItemShop_C_OnFailure_EC0A00FB424F5C7AA57AC2A6901AFBA0_Params Parms{};

	Parms.PurchaseStatus = PurchaseStatus;
	Parms.InAppPurchaseRestoreInfo = InAppPurchaseRestoreInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShop.ItemShop_C.OnSuccess_EC0A00FB424F5C7AA57AC2A6901AFBA0
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EInAppPurchaseStatus    PurchaseStatus                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInAppPurchaseRestoreInfo2>InAppPurchaseRestoreInfo                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UItemShop_C::OnSuccess_EC0A00FB424F5C7AA57AC2A6901AFBA0(enum class EInAppPurchaseStatus PurchaseStatus, TArray<struct FInAppPurchaseRestoreInfo2>& InAppPurchaseRestoreInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "OnSuccess_EC0A00FB424F5C7AA57AC2A6901AFBA0");

	Params::UItemShop_C_OnSuccess_EC0A00FB424F5C7AA57AC2A6901AFBA0_Params Parms{};

	Parms.PurchaseStatus = PurchaseStatus;
	Parms.InAppPurchaseRestoreInfo = InAppPurchaseRestoreInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShop.ItemShop_C.BndEvt__ItemShop_Button_87_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemShop_C::BndEvt__ItemShop_Button_87_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "BndEvt__ItemShop_Button_87_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemShop.ItemShop_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UItemShop_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemShop.ItemShop_C.BndEvt__ItemShop_Button_98_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemShop_C::BndEvt__ItemShop_Button_98_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "BndEvt__ItemShop_Button_98_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemShop.ItemShop_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemShop_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "PreConstruct");

	Params::UItemShop_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShop.ItemShop_C.BndEvt__ItemShop_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemShop_C::BndEvt__ItemShop_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "BndEvt__ItemShop_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemShop.ItemShop_C.BndEvt__ItemShop_c_Button_1_K2Node_ComponentBoundEvent_1_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemShop_C::BndEvt__ItemShop_c_Button_1_K2Node_ComponentBoundEvent_1_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "BndEvt__ItemShop_c_Button_1_K2Node_ComponentBoundEvent_1_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemShop.ItemShop_C.BndEvt__ItemShop_c_Button_K2Node_ComponentBoundEvent_2_click__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemShop_C::BndEvt__ItemShop_c_Button_K2Node_ComponentBoundEvent_2_click__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "BndEvt__ItemShop_c_Button_K2Node_ComponentBoundEvent_2_click__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemShop.ItemShop_C.BndEvt__ItemShop_Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UItemShop_C::BndEvt__ItemShop_Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "BndEvt__ItemShop_Button_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemShop.ItemShop_C.bg_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UImage*                      bg                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UItemShop_C::bg_Event_0(class UImage* bg)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "bg_Event_0");

	Params::UItemShop_C_bg_Event_0_Params Parms{};

	Parms.bg = bg;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShop.ItemShop_C.ExecuteUbergraph_ItemShop
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EInAppPurchaseStatus    K2Node_CustomEvent_PurchaseStatus_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInAppPurchaseReceiptInfo2>K2Node_CustomEvent_InAppPurchaseReceipts_1                       (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// enum class EInAppPurchaseStatus    K2Node_CustomEvent_PurchaseStatus_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInAppPurchaseReceiptInfo2>K2Node_CustomEvent_InAppPurchaseReceipts                         (ConstParm, ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// TArray<struct FInAppPurchaseReceiptInfo2>Temp_struct_Variable                                             (ReferenceParm)
// enum class EInAppPurchaseStatus    Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// enum class EInAppPurchaseStatus    K2Node_CustomEvent_PurchaseStatus_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInAppPurchaseRestoreInfo2>K2Node_CustomEvent_InAppPurchaseRestoreInfo_1                    (ConstParm, ReferenceParm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)
// enum class EInAppPurchaseStatus    K2Node_CustomEvent_PurchaseStatus                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FInAppPurchaseRestoreInfo2>K2Node_CustomEvent_InAppPurchaseRestoreInfo                      (ConstParm, ReferenceParm)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_5                             (ZeroConstructor, HasGetValueTypeHash)
// TArray<struct FInAppPurchaseRestoreInfo2>Temp_struct_Variable_1                                           (ReferenceParm)
// TArray<class FString>              K2Node_MakeArray_Array                                           (ReferenceParm)
// enum class EInAppPurchaseStatus    Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2save_C*                   CallFunc_m2save_save                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FString>              K2Node_MakeArray_Array_1                                         (ReferenceParm)
// class FString                      CallFunc_GetDefaultLanguage_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array_2                                         (ReferenceParm)
// class UM2data_C*                   CallFunc_game_game_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UM2data_C*                   CallFunc_game_game_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Gtext_text                                              (ZeroConstructor, HasGetValueTypeHash)
// class APlayerController*           CallFunc_GetPlayerControllerFromID_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FInAppPurchaseProductRequest2K2Node_MakeStruct_InAppPurchaseProductRequest2                   (None)
// class UInAppPurchaseCallbackProxy2*CallFunc_CreateProxyObjectForInAppPurchase_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UImage*                      K2Node_CustomEvent_bg                                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<int32>                      K2Node_MakeArray_Array_3                                         (ReferenceParm)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FInAppPurchaseProductRequest2K2Node_MakeStruct_InAppPurchaseProductRequest2_1                 (None)
// TArray<struct FInAppPurchaseProductRequest2>K2Node_MakeArray_Array_4                                         (ConstParm, ReferenceParm)
// class FString                      CallFunc_Gtext_text_1                                            (ZeroConstructor, HasGetValueTypeHash)
// class UInAppPurchaseRestoreCallbackProxy2*CallFunc_CreateProxyObjectForInAppPurchaseRestore_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UItemShop_C::ExecuteUbergraph_ItemShop(int32 EntryPoint, enum class EInAppPurchaseStatus K2Node_CustomEvent_PurchaseStatus_3, TArray<struct FInAppPurchaseReceiptInfo2>& K2Node_CustomEvent_InAppPurchaseReceipts_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class EInAppPurchaseStatus K2Node_CustomEvent_PurchaseStatus_2, TArray<struct FInAppPurchaseReceiptInfo2>& K2Node_CustomEvent_InAppPurchaseReceipts, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, TArray<struct FInAppPurchaseReceiptInfo2>& Temp_struct_Variable, enum class EInAppPurchaseStatus Temp_byte_Variable, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, enum class EInAppPurchaseStatus K2Node_CustomEvent_PurchaseStatus_1, TArray<struct FInAppPurchaseRestoreInfo2>& K2Node_CustomEvent_InAppPurchaseRestoreInfo_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, enum class EInAppPurchaseStatus K2Node_CustomEvent_PurchaseStatus, TArray<struct FInAppPurchaseRestoreInfo2>& K2Node_CustomEvent_InAppPurchaseRestoreInfo, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, TArray<struct FInAppPurchaseRestoreInfo2>& Temp_struct_Variable_1, TArray<class FString>& K2Node_MakeArray_Array, enum class EInAppPurchaseStatus Temp_byte_Variable_1, class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, class UM2save_C* CallFunc_m2save_save, TArray<class FString>& K2Node_MakeArray_Array_1, const class FString& CallFunc_GetDefaultLanguage_ReturnValue, TArray<int32>& K2Node_MakeArray_Array_2, class UM2data_C* CallFunc_game_game_2, bool K2Node_Event_IsDesignTime, class UM2data_C* CallFunc_game_game_3, const class FString& CallFunc_Gtext_text, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, const struct FInAppPurchaseProductRequest2& K2Node_MakeStruct_InAppPurchaseProductRequest2, class UInAppPurchaseCallbackProxy2* CallFunc_CreateProxyObjectForInAppPurchase_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UImage* K2Node_CustomEvent_bg, class UM2data_C* CallFunc_game_game_4, TArray<int32>& K2Node_MakeArray_Array_3, bool CallFunc_EqualEqual_StrStr_ReturnValue, const struct FInAppPurchaseProductRequest2& K2Node_MakeStruct_InAppPurchaseProductRequest2_1, TArray<struct FInAppPurchaseProductRequest2>& K2Node_MakeArray_Array_4, const class FString& CallFunc_Gtext_text_1, class UInAppPurchaseRestoreCallbackProxy2* CallFunc_CreateProxyObjectForInAppPurchaseRestore_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShop_C", "ExecuteUbergraph_ItemShop");

	Params::UItemShop_C_ExecuteUbergraph_ItemShop_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_PurchaseStatus_3 = K2Node_CustomEvent_PurchaseStatus_3;
	Parms.K2Node_CustomEvent_InAppPurchaseReceipts_1 = K2Node_CustomEvent_InAppPurchaseReceipts_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CustomEvent_PurchaseStatus_2 = K2Node_CustomEvent_PurchaseStatus_2;
	Parms.K2Node_CustomEvent_InAppPurchaseReceipts = K2Node_CustomEvent_InAppPurchaseReceipts;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.K2Node_CustomEvent_PurchaseStatus_1 = K2Node_CustomEvent_PurchaseStatus_1;
	Parms.K2Node_CustomEvent_InAppPurchaseRestoreInfo_1 = K2Node_CustomEvent_InAppPurchaseRestoreInfo_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;
	Parms.K2Node_CustomEvent_PurchaseStatus = K2Node_CustomEvent_PurchaseStatus;
	Parms.K2Node_CustomEvent_InAppPurchaseRestoreInfo = K2Node_CustomEvent_InAppPurchaseRestoreInfo;
	Parms.CallFunc_Concat_StrStr_ReturnValue_5 = CallFunc_Concat_StrStr_ReturnValue_5;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;
	Parms.CallFunc_m2save_save = CallFunc_m2save_save;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_GetDefaultLanguage_ReturnValue = CallFunc_GetDefaultLanguage_ReturnValue;
	Parms.K2Node_MakeArray_Array_2 = K2Node_MakeArray_Array_2;
	Parms.CallFunc_game_game_2 = CallFunc_game_game_2;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_game_game_3 = CallFunc_game_game_3;
	Parms.CallFunc_Gtext_text = CallFunc_Gtext_text;
	Parms.CallFunc_GetPlayerControllerFromID_ReturnValue = CallFunc_GetPlayerControllerFromID_ReturnValue;
	Parms.K2Node_MakeStruct_InAppPurchaseProductRequest2 = K2Node_MakeStruct_InAppPurchaseProductRequest2;
	Parms.CallFunc_CreateProxyObjectForInAppPurchase_ReturnValue = CallFunc_CreateProxyObjectForInAppPurchase_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CustomEvent_bg = K2Node_CustomEvent_bg;
	Parms.CallFunc_game_game_4 = CallFunc_game_game_4;
	Parms.K2Node_MakeArray_Array_3 = K2Node_MakeArray_Array_3;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.K2Node_MakeStruct_InAppPurchaseProductRequest2_1 = K2Node_MakeStruct_InAppPurchaseProductRequest2_1;
	Parms.K2Node_MakeArray_Array_4 = K2Node_MakeArray_Array_4;
	Parms.CallFunc_Gtext_text_1 = CallFunc_Gtext_text_1;
	Parms.CallFunc_CreateProxyObjectForInAppPurchaseRestore_ReturnValue = CallFunc_CreateProxyObjectForInAppPurchaseRestore_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


