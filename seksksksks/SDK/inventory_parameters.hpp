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

		// 0x220 (0x220 - 0x0)
		// Function inventory.inventory_C.OnMouseButtonDown_1
		struct UInventory_C_OnMouseButtonDown_1_Params
		{
		public:
			struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
			struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
			struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
			class UM2data_C* CallFunc_game_game;                                // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x168(0xB8)(None)
		};

		// 0x218 (0x218 - 0x0)
		// Function inventory.inventory_C.OnMouseButtonDown_0
		struct UInventory_C_OnMouseButtonDown_0_Params
		{
		public:
			struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
			struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
			struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
			struct FEventReply                           CallFunc_Handled_ReturnValue;                      // 0x160(0xB8)(None)
		};

		// 0x2 (0x2 - 0x0)
		// Function inventory.inventory_C.check
		struct UInventory_C_Check_Params
		{
		public:
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x210 (0x210 - 0x0)
		// Function inventory.inventory_C.initInventory
		struct UInventory_C_InitInventory_Params
		{
		public:
			int32                                        C;                                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_598[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_599[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			int32                                        Temp_int_Variable;                                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			TArray<struct FSlot>                                  CallFunc_Map_Find_Value;                           // 0x38(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
			bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_59B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FInvItem                              CallFunc_Map_Find_Value_1;                         // 0x50(0x70)(None)
			bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_59C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FItem                                 K2Node_MakeStruct_item;                            // 0xC8(0x64)(HasGetValueTypeHash)
			uint8                                        Pad_59D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_59E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UWidget* CallFunc_GetChildAt_ReturnValue;                   // 0x138(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USlot_C* K2Node_DynamicCast_AsSlot;                         // 0x140(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_59F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue;            // 0x150(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue_1;          // 0x158(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue_2;          // 0x160(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_5A2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UWrapBoxSlot* CallFunc_AddChildToWrapBox_ReturnValue_3;          // 0x170(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			TArray<struct FSlot>                         CallFunc_Map_Values_Values;                        // 0x178(0x10)(ReferenceParm, ContainsInstancedReference)
			TArray<struct FSlot>                                 CallFunc_Array_Get_Item;                           // 0x188(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue_5;                // 0x19C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5A3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* K2Node_DynamicCast_AsSlot_1;                       // 0x1A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_6;                // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1AB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5A4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UGameInstance* CallFunc_GetGameInstance_ReturnValue;              // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UM2data_C* K2Node_DynamicCast_AsM_2data;                      // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5A5[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_getSlotCount_c;                           // 0x1C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x1CC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5A7[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x1D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x1E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x1F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x200(0x10)(ZeroConstructor, HasGetValueTypeHash)
		};

		// 0x70 (0x70 - 0x0)
		// Function inventory.inventory_C.initMobile
		struct UInventory_C_InitMobile_Params
		{
		public:
			struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
			class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x18(0x58)(HasGetValueTypeHash)
		};

		// 0x7 (0x7 - 0x0)
		// Function inventory.inventory_C.slotChanged
		struct UInventory_C_SlotChanged_Params
		{
		public:
			int32                                        Slotid;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x51 (0x51 - 0x0)
		// Function inventory.inventory_C.resetAntiEnabled_0
		struct UInventory_C_ResetAntiEnabled_0_Params
		{
		public:
			int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_5B1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<int32>                                CallFunc_Map_Keys_Keys;                            // 0x10(0x10)(ReferenceParm)
			int32                                        CallFunc_Array_Get_Item;                           // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5B2[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<struct FSlot>                                CallFunc_Map_Find_Value;                           // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
			bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5B3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* K2Node_DynamicCast_AsSlot;                         // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x62 (0x62 - 0x0)
		// Function inventory.inventory_C.setAntiEnabled
		struct UInventory_C_SetAntiEnabled_Params
		{
		public:
			class FString                                Flag;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_5B9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<int32>                                CallFunc_Map_Keys_Keys;                            // 0x20(0x10)(ReferenceParm)
			int32                                        CallFunc_Array_Get_Item;                           // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5BA[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<struct FSlot>                                 CallFunc_Map_Find_Value;                           // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
			bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5BB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* K2Node_DynamicCast_AsSlot;                         // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Contains_ReturnValue;                     // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x128 (0x128 - 0x0)
		// Function inventory.inventory_C.loadCostumes
		struct UInventory_C_LoadCostumes_Params
		{
		public:
			int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5BD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Variable_1;                               // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5C0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UWidget* CallFunc_GetChildAt_ReturnValue;                   // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_5C1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* K2Node_DynamicCast_AsSlot;                         // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5C2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* CallFunc_getSlot_slotOut;                          // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo;                            // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5C3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FInvItem                              CallFunc_Map_Find_Value;                           // 0x48(0x70)(None)
			bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5C4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FItem                                 K2Node_MakeStruct_item;                            // 0xC0(0x64)(HasGetValueTypeHash)
			uint8                                        Pad_5C5[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
		};

		// 0x61 (0x61 - 0x0)
		// Function inventory.inventory_C.checkYangText
		struct UInventory_C_CheckYangText_Params
		{
		public:
			class FString                                CallFunc_getYangText_yangText;                     // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x10(0x18)(None)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5C8[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_FormatDot_yangText;                       // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5C9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x48(0x18)(None)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x3E (0x3E - 0x0)
		// Function inventory.inventory_C.getInvButton
		struct UInventory_C_GetInvButton_Params
		{
		public:
			int32                                        Int;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_5CD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UInvButton_C* but;                                               // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UInvButton_C* CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x51 (0x51 - 0x0)
		// Function inventory.inventory_C.resetAntiEnabled
		struct UInventory_C_ResetAntiEnabled_Params
		{
		public:
			int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_5D0[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<int32>                                CallFunc_Map_Keys_Keys;                            // 0x10(0x10)(ReferenceParm)
			int32                                        CallFunc_Array_Get_Item;                           // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5D1[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<struct FSlot>                                 CallFunc_Map_Find_Value;                           // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
			bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5D2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* K2Node_DynamicCast_AsSlot;                         // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x1 (0x1 - 0x0)
		// Function inventory.inventory_C.PreConstruct
		struct UInventory_C_PreConstruct_Params
		{
		public:
			bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0xB0 (0xB0 - 0x0)
		// Function inventory.inventory_C.OnDragEnter
		struct UInventory_C_OnDragEnter_Params
		{
		public:
			struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
			struct FPointerEvent                         PointerEvent;                                      // 0x38(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
			class UDragDropOperation* Operation;                                         // 0xA8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x78 (0x78 - 0x0)
		// Function inventory.inventory_C.OnDragLeave
		struct UInventory_C_OnDragLeave_Params
		{
		public:
			struct FPointerEvent                         PointerEvent;                                      // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
			class UDragDropOperation* Operation;                                         // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x482 (0x482 - 0x0)
		// Function inventory.inventory_C.ExecuteUbergraph_inventory
		struct UInventory_C_ExecuteUbergraph_inventory_Params
		{
		public:
			int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_5E2[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FCharData                             CallFunc_char_NewParam;                            // 0x8(0x148)(None)
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x158(0x18)(None)
			int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Array_Index_Variable;                     // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_Event_IsDesignTime;                         // 0x17C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5E4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UGameInstance* CallFunc_GetGameInstance_ReturnValue;              // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UM2data_C* K2Node_DynamicCast_AsM_2data;                      // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5E6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x198(0x8)(NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Add_ReturnValue_2;                  // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Add_ReturnValue_3;                  // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1;            // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UM2data_C* K2Node_DynamicCast_AsM_2data_1;                    // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_isAddItem_found;                          // 0x1C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5E7[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FInvItem                              CallFunc_isAddItem_item;                           // 0x1C8(0x70)(None)
			struct FItem                                 K2Node_MakeStruct_item;                            // 0x238(0x64)(HasGetValueTypeHash)
			uint8                                        Pad_5E8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* CallFunc_getSlot_slotOut;                          // 0x2A0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo;                            // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5E9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2;            // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UM2data_C* K2Node_DynamicCast_AsM_2data_2;                    // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x2C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5EB[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x2C9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5EC[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x2CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5ED[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x2D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                CallFunc_MakeLiteralString_ReturnValue;            // 0x2D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x2E8(0x38)(IsPlainOldData, NoDestructor)
			struct FPointerEvent                         K2Node_Event_PointerEvent_1;                       // 0x320(0x70)(None)
			class UDragDropOperation* K2Node_Event_Operation_1;                          // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FPointerEvent                         K2Node_Event_PointerEvent;                         // 0x398(0x70)(None)
			class UDragDropOperation* K2Node_Event_Operation;                            // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x410(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x414(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x419(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x41A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x41B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			int32                                        Temp_int_Array_Index_Variable_1;                   // 0x41C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USlot_C* CallFunc_getSlot_slotOut_1;                        // 0x420(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo_1;                          // 0x428(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x429(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5F2[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UM2data_C* CallFunc_game_game;                                // 0x430(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x438(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x439(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5F3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x43C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x440(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x441(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5F4[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x444(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_IsValid_ReturnValue;                      // 0x448(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x449(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x44A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_5F5[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        Temp_int_Array_Index_Variable_2;                   // 0x44C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Get_Item;                           // 0x450(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_5F6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x458(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x468(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class USlot_C* CallFunc_getSlot_slotOut_2;                        // 0x478(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo_2;                          // 0x480(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x481(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};
	}
}