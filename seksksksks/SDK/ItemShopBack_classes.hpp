#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1A0 (0x3C8 - 0x228)
// BlueprintGeneratedClass ItemShopBack.ItemShopBack_C
class AItemShopBack_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x228(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UStaticMeshComponent*                  Cube;                                              // 0x230(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Obj_a1Minus038MinuswallMinuslin2_b1Minus038MinuswallMinuslin25; // 0x238(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Obj_a1Minus038MinuswallMinuslin2_b1Minus038MinuswallMinuslin24; // 0x240(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Obj_a1Minus038MinuswallMinuslin2_b1Minus038MinuswallMinuslin23; // 0x248(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  Obj_a1Minus038MinuswallMinuslin2_b1Minus038MinuswallMinuslin22; // 0x250(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Upper;                                             // 0x258(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class ACharView*                             View;                                              // 0x260(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsOpen;                                            // 0x268(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DD1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemShop_C*                           Widget;                                            // 0x270(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        WeaponId;                                          // 0x278(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ArmorId;                                           // 0x27C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharData                             DefaultPdata;                                      // 0x280(0x148)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class AItemShopBack_C* GetDefaultObj();

	void CloseItemShop(class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, class UM2data_C* CallFunc_game_game_2, bool CallFunc_isMobile_isMobile, class UM2data_C* CallFunc_game_game_3);
	void OpenItemShop(const struct FPacket& Packet, class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, const struct FItem& CallFunc_getSlotItem_item, const struct FItem& CallFunc_getSlotItem_item_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UM2data_C* CallFunc_game_game_2, const struct FItem& CallFunc_getSlotItem_item_2, class UM2data_C* CallFunc_game_game_3, const struct FItem& CallFunc_getSlotItem_item_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class UM2data_C* CallFunc_game_game_4, const struct FCharData& CallFunc_char_NewParam, const struct FItem& CallFunc_getSlotItem_item_4, class UItemShop_C* CallFunc_Create_ReturnValue, const struct FCharData& K2Node_MakeStruct_charData, class UM2data_C* CallFunc_game_game_5, class UM2data_C* CallFunc_game_game_6, bool CallFunc_isMobile_isMobile, class UM2data_C* CallFunc_game_game_7, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ACharView* CallFunc_FinishSpawningActor_ReturnValue);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ExecuteUbergraph_ItemShopBack(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class UM2data_C* CallFunc_game_game);
};

}


