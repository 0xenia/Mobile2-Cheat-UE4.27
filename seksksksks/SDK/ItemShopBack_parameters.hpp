#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// Function ItemShopBack.ItemShopBack_C.closeItemShop
struct AItemShopBack_C_CloseItemShop_Params
{
public:
	class UM2data_C*                             CallFunc_game_game;                                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UM2data_C*                             CallFunc_game_game_1;                              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UM2data_C*                             CallFunc_game_game_2;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_isMobile_isMobile;                        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DB4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UM2data_C*                             CallFunc_game_game_3;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x560 (0x560 - 0x0)
// Function ItemShopBack.ItemShopBack_C.openItemShop
struct AItemShopBack_C_OpenItemShop_Params
{
public:
	struct FPacket                               Packet;                                            // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
	class UM2data_C*                             CallFunc_game_game;                                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UM2data_C*                             CallFunc_game_game_1;                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItem                                 CallFunc_getSlotItem_item;                         // 0x38(0x64)(HasGetValueTypeHash)
	uint8                                        Pad_DBE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItem                                 CallFunc_getSlotItem_item_1;                       // 0xA0(0x64)(HasGetValueTypeHash)
	uint8                                        Pad_DBF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DC0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UM2data_C*                             CallFunc_game_game_2;                              // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItem                                 CallFunc_getSlotItem_item_2;                       // 0x118(0x64)(HasGetValueTypeHash)
	uint8                                        Pad_DC1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UM2data_C*                             CallFunc_game_game_3;                              // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FItem                                 CallFunc_getSlotItem_item_3;                       // 0x188(0x64)(HasGetValueTypeHash)
	uint8                                        Pad_DC2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x1F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DC3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UM2data_C*                             CallFunc_game_game_4;                              // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharData                             CallFunc_char_NewParam;                            // 0x200(0x148)(None)
	struct FItem                                 CallFunc_getSlotItem_item_4;                       // 0x348(0x64)(HasGetValueTypeHash)
	uint8                                        Pad_DC4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UItemShop_C*                           CallFunc_Create_ReturnValue;                       // 0x3B0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharData                             K2Node_MakeStruct_charData;                        // 0x3B8(0x148)(None)
	class UM2data_C*                             CallFunc_game_game_5;                              // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UM2data_C*                             CallFunc_game_game_6;                              // 0x508(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_isMobile_isMobile;                        // 0x510(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_DC6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UM2data_C*                             CallFunc_game_game_7;                              // 0x518(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x520(0x30)(IsPlainOldData, NoDestructor)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x550(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ACharView*                             CallFunc_FinishSpawningActor_ReturnValue;          // 0x558(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ItemShopBack.ItemShopBack_C.ReceiveTick
struct AItemShopBack_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function ItemShopBack.ItemShopBack_C.ExecuteUbergraph_ItemShopBack
struct AItemShopBack_C_ExecuteUbergraph_ItemShopBack_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UM2data_C*                             CallFunc_game_game;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


