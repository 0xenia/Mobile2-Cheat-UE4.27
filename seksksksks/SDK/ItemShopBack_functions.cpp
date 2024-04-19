#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ItemShopBack.ItemShopBack_C
// (Actor)

class UClass* AItemShopBack_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ItemShopBack_C");

	return Clss;
}


// ItemShopBack_C ItemShopBack.Default__ItemShopBack_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AItemShopBack_C* AItemShopBack_C::GetDefaultObj()
{
	static class AItemShopBack_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AItemShopBack_C*>(AItemShopBack_C::StaticClass()->DefaultObject);

	return Default;
}


// Function ItemShopBack.ItemShopBack_C.closeItemShop
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_isMobile_isMobile                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UM2data_C*                   CallFunc_game_game_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItemShopBack_C::CloseItemShop(class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, class UM2data_C* CallFunc_game_game_2, bool CallFunc_isMobile_isMobile, class UM2data_C* CallFunc_game_game_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopBack_C", "closeItemShop");

	Params::AItemShopBack_C_CloseItemShop_Params Parms{};

	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;
	Parms.CallFunc_game_game_2 = CallFunc_game_game_2;
	Parms.CallFunc_isMobile_isMobile = CallFunc_isMobile_isMobile;
	Parms.CallFunc_game_game_3 = CallFunc_game_game_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShopBack.ItemShopBack_C.openItemShop
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FPacket                     Packet                                                           (BlueprintVisible, BlueprintReadOnly, Parm)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItem                       CallFunc_getSlotItem_item                                        (HasGetValueTypeHash)
// struct FItem                       CallFunc_getSlotItem_item_1                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UM2data_C*                   CallFunc_game_game_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItem                       CallFunc_getSlotItem_item_2                                      (HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItem                       CallFunc_getSlotItem_item_3                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UM2data_C*                   CallFunc_game_game_4                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharData                   CallFunc_char_NewParam                                           (None)
// struct FItem                       CallFunc_getSlotItem_item_4                                      (HasGetValueTypeHash)
// class UItemShop_C*                 CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCharData                   K2Node_MakeStruct_charData                                       (None)
// class UM2data_C*                   CallFunc_game_game_5                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game_6                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_isMobile_isMobile                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UM2data_C*                   CallFunc_game_game_7                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACharView*                   CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItemShopBack_C::OpenItemShop(const struct FPacket& Packet, class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, const struct FItem& CallFunc_getSlotItem_item, const struct FItem& CallFunc_getSlotItem_item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UM2data_C* CallFunc_game_game_2, const struct FItem& CallFunc_getSlotItem_item_2, class UM2data_C* CallFunc_game_game_3, const struct FItem& CallFunc_getSlotItem_item_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UM2data_C* CallFunc_game_game_4, const struct FCharData& CallFunc_char_NewParam, const struct FItem& CallFunc_getSlotItem_item_4, class UItemShop_C* CallFunc_Create_ReturnValue, const struct FCharData& K2Node_MakeStruct_charData, class UM2data_C* CallFunc_game_game_5, class UM2data_C* CallFunc_game_game_6, bool CallFunc_isMobile_isMobile, class UM2data_C* CallFunc_game_game_7, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ACharView* CallFunc_FinishSpawningActor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopBack_C", "openItemShop");

	Params::AItemShopBack_C_OpenItemShop_Params Parms{};

	Parms.Packet = Packet;
	Parms.CallFunc_game_game = CallFunc_game_game;
	Parms.CallFunc_game_game_1 = CallFunc_game_game_1;
	Parms.CallFunc_getSlotItem_item = CallFunc_getSlotItem_item;
	Parms.CallFunc_getSlotItem_item_1 = CallFunc_getSlotItem_item_1;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_game_game_2 = CallFunc_game_game_2;
	Parms.CallFunc_getSlotItem_item_2 = CallFunc_getSlotItem_item_2;
	Parms.CallFunc_game_game_3 = CallFunc_game_game_3;
	Parms.CallFunc_getSlotItem_item_3 = CallFunc_getSlotItem_item_3;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue_1 = CallFunc_EqualEqual_IntInt_ReturnValue_1;
	Parms.CallFunc_game_game_4 = CallFunc_game_game_4;
	Parms.CallFunc_char_NewParam = CallFunc_char_NewParam;
	Parms.CallFunc_getSlotItem_item_4 = CallFunc_getSlotItem_item_4;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.K2Node_MakeStruct_charData = K2Node_MakeStruct_charData;
	Parms.CallFunc_game_game_5 = CallFunc_game_game_5;
	Parms.CallFunc_game_game_6 = CallFunc_game_game_6;
	Parms.CallFunc_isMobile_isMobile = CallFunc_isMobile_isMobile;
	Parms.CallFunc_game_game_7 = CallFunc_game_game_7;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShopBack.ItemShopBack_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void AItemShopBack_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopBack_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function ItemShopBack.ItemShopBack_C.ReceiveTick
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItemShopBack_C::ReceiveTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopBack_C", "ReceiveTick");

	Params::AItemShopBack_C_ReceiveTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ItemShopBack.ItemShopBack_C.ExecuteUbergraph_ItemShopBack
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UM2data_C*                   CallFunc_game_game                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void AItemShopBack_C::ExecuteUbergraph_ItemShopBack(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class UM2data_C* CallFunc_game_game)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ItemShopBack_C", "ExecuteUbergraph_ItemShopBack");

	Params::AItemShopBack_C_ExecuteUbergraph_ItemShopBack_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_game_game = CallFunc_game_game;

	UObject::ProcessEvent(Func, &Parms);

}

}


