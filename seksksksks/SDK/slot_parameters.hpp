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
		// Function slot.slot_C.checkSkillUsed
		struct USlot_C_CheckSkillUsed_Params
		{
		public:
			bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_EDC[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsValid_ReturnValue;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_EDD[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_EDE[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			float                                        CallFunc_Multiply_IntFloat_ReturnValue;            // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x1 (0x1 - 0x0)
		// Function slot.slot_C.resetDoubleClick
		struct USlot_C_ResetDoubleClick_Params
		{
		public:
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x2EC (0x2EC - 0x0)
		// Function slot.slot_C.OnTouchStarted
		struct USlot_C_OnTouchStarted_Params
		{
		public:
			struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
			struct FPointerEvent                         InTouchEvent;                                      // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
			struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
			class UM2data_C* CallFunc_game_game;                                // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x168(0xB8)(None)
			struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x220(0x8)(NoDestructor, HasGetValueTypeHash)
			struct FEventReply                           CallFunc_Unhandled_ReturnValue_1;                  // 0x228(0xB8)(None)
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x2E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_EF0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        Temp_int_Variable;                                 // 0x2E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0xB9 (0xB9 - 0x0)
		// Function slot.slot_C.Item Drag
		struct USlot_C_Item_Drag_Params
		{
		public:
			class AActor* Hito;                                              // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                CallFunc_gtext_ReturnValue;                        // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_EF5[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<int32>                                K2Node_MakeArray_Array;                            // 0x20(0x10)(ReferenceParm)
			TArray<class FString>                        K2Node_MakeArray_Array_1;                          // 0x30(0x10)(ReferenceParm)
			TArray<class FString>                        K2Node_MakeArray_Array_2;                          // 0x40(0x10)(ReferenceParm)
			class FString                                CallFunc_gtext_ReturnValue_1;                      // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_EF7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<class FString>                        K2Node_MakeArray_Array_3;                          // 0x68(0x10)(ReferenceParm)
			class ANpc* K2Node_DynamicCast_AsNpc;                          // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_EF8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x84(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			TArray<int32>                                K2Node_MakeArray_Array_4;                          // 0x90(0x10)(ReferenceParm)
			float                                        CallFunc_Vector_Distance_ReturnValue;              // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         K2Node_SwitchString_CmpSuccess;                    // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_EF9[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<int32>                                K2Node_MakeArray_Array_5;                          // 0xA8(0x10)(ReferenceParm)
			bool                                         CallFunc_IsValid_ReturnValue;                      // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x8 (0x8 - 0x0)
		// Function slot.slot_C.haveAttu
		struct USlot_C_HaveAttu_Params
		{
		public:
			bool                                         Res;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0xE8 (0xE8 - 0x0)
		// Function slot.slot_C.OnDragDetected
		struct USlot_C_OnDragDetected_Params
		{
		public:
			struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
			struct FPointerEvent                         PointerEvent;                                      // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
			class UDragDropOperation* Operation;                                         // 0xA8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UDrag1_C* CallFunc_CreateDragDropOperation_ReturnValue;      // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector2D                             CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue; // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector2D                             CallFunc_AbsoluteToLocal_ReturnValue;              // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UItemView_C* CallFunc_Create_ReturnValue;                       // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UM2data_C* CallFunc_game_game;                                // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_EFF[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FDateTime                             CallFunc_UtcNow_ReturnValue;                       // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
		};

		// 0x10 (0x10 - 0x0)
		// Function slot.slot_C.getItemSubType
		struct USlot_C_GetItemSubType_Params
		{
		public:
			class FString                                Type;                                              // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		};

		// 0x10 (0x10 - 0x0)
		// Function slot.slot_C.getItemType
		struct USlot_C_GetItemType_Params
		{
		public:
			class FString                                Type;                                              // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
		};

		// 0x12 (0x12 - 0x0)
		// Function slot.slot_C.getItemFlag
		struct USlot_C_GetItemFlag_Params
		{
		public:
			class FString                                Flag;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			bool                                         IsHave;                                            // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Contains_ReturnValue;                     // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x218 (0x218 - 0x0)
		// Function slot.slot_C.OnMouseButtonUp
		struct USlot_C_OnMouseButtonUp_Params
		{
		public:
			struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
			struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
			struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
			struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x160(0xB8)(None)
		};

		// 0x1 (0x1 - 0x0)
		// Function slot.slot_C.deSelectSlot_0
		struct USlot_C_DeSelectSlot_0_Params
		{
		public:
			bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x11 (0x11 - 0x0)
		// Function slot.slot_C.selectSlot
		struct USlot_C_SelectSlot_Params
		{
		public:
			bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F0B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* K2Node_DynamicCast_AsSlot;                         // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x2DE (0x2DE - 0x0)
		// Function slot.slot_C.OnMouseButtonDown
		struct USlot_C_OnMouseButtonDown_Params
		{
		public:
			struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
			struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
			struct FEventReply                           ReturnValue;                                       // 0xA8(0xB8)(Parm, OutParm, ReturnParm)
			bool                                         CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue; // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F15[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FEventReply                           CallFunc_DetectDragIfPressed_ReturnValue;          // 0x168(0xB8)(None)
			struct FEventReply                           CallFunc_Unhandled_ReturnValue;                    // 0x220(0xB8)(None)
			bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x2D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x2DB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2DC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x2DD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x1C7 (0x1C7 - 0x0)
		// Function slot.slot_C.checkStatus
		struct USlot_C_CheckStatus_Params
		{
		public:
			struct FIitem                                Ref;                                               // 0x0(0x148)(BlueprintVisible, BlueprintReadOnly, Parm)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsValid_ReturnValue;                      // 0x149(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_checkAlt_can;                             // 0x14A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_checkUst_res;                             // 0x14B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x14C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x14D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x14E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x14F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_itemCanUse_isCanUse;                      // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F2C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_itemCanUse_message;                       // 0x158(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_itemCanUse_whoUse;                        // 0x168(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_equpCanTake_can;                          // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_quickSlotCanTake_res;                     // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x17A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x17B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USlot_C* CallFunc_getSlot_slotOut;                          // 0x180(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo;                            // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x18A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x18B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_checkAlt_can_1;                           // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_checkUst_res_1;                           // 0x192(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F2E[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* CallFunc_getSlot_slotOut_1;                        // 0x198(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo_1;                          // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x1A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x1A2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F30[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x1A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x1A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x1AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x1AB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x1AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x1AD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x1AE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_5;                // 0x1AF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x1B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x1B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_6;                // 0x1B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x1B3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x1B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_IntInt_ReturnValue_3;             // 0x1B5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_2;        // 0x1B6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_7;                // 0x1B7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_7;                 // 0x1B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_3;        // 0x1B9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_8;                 // 0x1BA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_9;                 // 0x1BB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_10;                // 0x1BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_checkUseItem_can;                         // 0x1BD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_checkUseItem_local;                       // 0x1BE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_11;                // 0x1BF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_checkStackable_can;                       // 0x1C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x1C2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x1C3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1C5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_6;          // 0x1C6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x2 (0x2 - 0x0)
		// Function slot.slot_C.setStatus
		struct USlot_C_SetStatus_Params
		{
		public:
			enum class ESlotStatus                       Status;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x370 (0x370 - 0x0)
		// Function slot.slot_C.initMobile
		struct USlot_C_InitMobile_Params
		{
		public:
			struct FButtonStyle                          K2Node_MakeStruct_ButtonStyle;                     // 0x0(0x278)(None)
			class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x278(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x280(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
			struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x290(0x88)(None)
			struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x318(0x58)(HasGetValueTypeHash)
		};

		// 0x132 (0x132 - 0x0)
		// Function slot.slot_C.runSlot
		struct USlot_C_RunSlot_Params
		{
		public:
			TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x0(0x10)(ReferenceParm)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F50[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<int32>                                K2Node_MakeArray_Array_1;                          // 0x18(0x10)(ReferenceParm)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F52[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_gtext_ReturnValue;                        // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F53[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<int32>                                K2Node_MakeArray_Array_2;                          // 0x48(0x10)(ReferenceParm)
			TArray<class FString>                        K2Node_MakeArray_Array_3;                          // 0x58(0x10)(ReferenceParm)
			bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F55[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UM2data_C* CallFunc_game_game;                                // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FItem                                 K2Node_MakeStruct_item;                            // 0x78(0x64)(HasGetValueTypeHash)
			uint8                                        Pad_F57[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_gtext_ReturnValue_1;                      // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F58[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<class FString>                        K2Node_MakeArray_Array_4;                          // 0xF8(0x10)(ReferenceParm)
			int32                                        CallFunc_getEmptySlot_emptySlotId;                 // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_F59[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x110(0x10)(ZeroConstructor, HasGetValueTypeHash)
			TArray<int32>                                K2Node_MakeArray_Array_5;                          // 0x120(0x10)(ReferenceParm)
			bool                                         CallFunc_NotEqual_IntInt_ReturnValue_1;            // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x1 (0x1 - 0x0)
		// Function slot.slot_C.refresh
		struct USlot_C_Refresh_Params
		{
		public:
			bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x22 (0x22 - 0x0)
		// Function slot.slot_C.dropItem
		struct USlot_C_DropItem_Params
		{
		public:
			class FString                                CallFunc_gtext_ReturnValue;                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_gtext_ReturnValue_1;                      // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Contains_ReturnValue;                     // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x1 (0x1 - 0x0)
		// Function slot.slot_C.deSelectSlot
		struct USlot_C_DeSelectSlot_Params
		{
		public:
			bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x2DC (0x2DC - 0x0)
		// Function slot.slot_C.quickUse
		struct USlot_C_QuickUse_Params
		{
		public:
			bool                                         TargetIsPlayer;                                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F73[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FDateTime                             CallFunc_Now_ReturnValue;                          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
			struct FDateTime                             CallFunc_Now_ReturnValue_1;                        // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
			struct FTimespan                             CallFunc_Subtract_DateTimeDateTime_ReturnValue;    // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_GetTotalMilliseconds_ReturnValue;         // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Greater_FloatFloat_ReturnValue;           // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F76[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UPlayerAnim_C* K2Node_DynamicCast_AsPlayer_Anim;                  // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F77[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsValid_ReturnValue;                      // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_useSkill_result;                          // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F79[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_useSkill_res;                             // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x58(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_F7A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_gtext_ReturnValue;                        // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
			float                                        CallFunc_Vector_Distance_ReturnValue;              // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_selectNeartarget_selected;                // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F7B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_gtext_ReturnValue_1;                      // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_gtext_ReturnValue_2;                      // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_canUseSkill_res;                          // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_canUseSkill_ReturnValue;                  // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F7D[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class ANpc* K2Node_DynamicCast_AsNpc;                          // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F7E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FSkill                                CallFunc_getClientSkill_Skill;                     // 0xC8(0xA8)(None)
			class ANpc* CallFunc_toNpc_npc;                                // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_canAttack_ReturnValue;                    // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x179(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x17A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x17B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x17C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x17D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F81[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x184(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x185(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x186(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x187(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F86[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FCharData                             CallFunc_getCharData_chardata;                     // 0x190(0x148)(None)
			bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x2D9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x2DA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2DB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x191 (0x191 - 0x0)
		// Function slot.slot_C.setQuickSkill
		struct USlot_C_SetQuickSkill_Params
		{
		public:
			struct FSkill                                S;                                                 // 0x0(0xA8)(BlueprintVisible, BlueprintReadOnly, Parm)
			class UM2data_C* CallFunc_game_game;                                // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FDateTime                             CallFunc_getServerTime_ReturnValue;                // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
			struct FSkill                                CallFunc_getClientSkill_Skill;                     // 0xB8(0xA8)(None)
			struct FTimespan                             CallFunc_dateDiff_diff;                            // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_GetTotalSeconds_ReturnValue;              // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_Subtract_FloatFloat_ReturnValue;          // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_LessEqual_FloatFloat_ReturnValue;         // 0x174(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x175(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F97[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UTexture2D* CallFunc_Array_Get_Item;                           // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UTexture2D* CallFunc_Array_Get_Item_1;                         // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UTexture2D* CallFunc_Array_Get_Item_2;                         // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x4C (0x4C - 0x0)
		// Function slot.slot_C.usedSkill
		struct USlot_C_UsedSkill_Params
		{
		public:
			float                                        Time;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         SelfOnly;                                          // 0x4(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_FA4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_FA6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FQuickSlot                            CallFunc_Array_Get_Item;                           // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_FA8[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FWidgetTransform                      K2Node_MakeStruct_WidgetTransform;                 // 0x30(0x1C)(NoDestructor)
		};

		// 0x28 (0x28 - 0x0)
		// Function slot.slot_C.setCountText
		struct USlot_C_SetCountText_Params
		{
		public:
			class FString                                T;                                                 // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x10(0x18)(None)
		};

		// 0x28 (0x28 - 0x0)
		// Function slot.slot_C.setQuickTarget
		struct USlot_C_SetQuickTarget_Params
		{
		public:
			class USlot_C* Tt;                                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UM2data_C* CallFunc_game_game;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_quickSlotCanTake_res;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_FB7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_getDes_itemDes;                           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
		};

		// 0x40 (0x40 - 0x0)
		// Function slot.slot_C.clearOtherPids
		struct USlot_C_ClearOtherPids_Params
		{
		public:
			class USlot_C* CallFunc_getSkillSlot_skill;                       // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USlot_C* CallFunc_getSkillSlot_skill_1;                     // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USlot_C* CallFunc_getSkillSlot_skill_2;                     // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USlot_C* CallFunc_getSkillSlot_skill_3;                     // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_FBC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* CallFunc_getSkillSlot_skill_4;                     // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_FBE[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* CallFunc_getSkillSlot_skill_5;                     // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x490 (0x490 - 0x0)
		// Function slot.slot_C.setSkill
		struct USlot_C_SetSkill_Params
		{
		public:
			struct FSkill                                Skill;                                             // 0x0(0xA8)(BlueprintVisible, BlueprintReadOnly, Parm)
			int32                                        FontSize;                                          // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        ImgId;                                             // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UTexture2D* CallFunc_Array_Get_Item;                           // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UTexture2D* CallFunc_Array_Get_Item_1;                         // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UTexture2D* CallFunc_Array_Get_Item_2;                         // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_FDF[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FFontOutlineSettings                  K2Node_MakeStruct_FontOutlineSettings;             // 0xD0(0x20)(NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_FE3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Conv_IntToString_ReturnValue_2;           // 0x120(0x10)(ZeroConstructor, HasGetValueTypeHash)
			struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x130(0x28)(None)
			struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo;                   // 0x158(0x58)(HasGetValueTypeHash)
			struct FFontOutlineSettings                  K2Node_MakeStruct_FontOutlineSettings_1;           // 0x1B0(0x20)(NoDestructor, HasGetValueTypeHash)
			struct FSlateColor                           K2Node_MakeStruct_SlateColor_1;                    // 0x1D0(0x28)(None)
			class FString                                CallFunc_MakeLiteralString_ReturnValue;            // 0x1F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			struct FSlateColor                           K2Node_MakeStruct_SlateColor_2;                    // 0x208(0x28)(None)
			class FString                                CallFunc_MakeLiteralString_ReturnValue_1;          // 0x230(0x10)(ZeroConstructor, HasGetValueTypeHash)
			struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo_1;                 // 0x240(0x58)(HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x298(0x10)(ZeroConstructor, HasGetValueTypeHash)
			struct FFontOutlineSettings                  K2Node_MakeStruct_FontOutlineSettings_2;           // 0x2A8(0x20)(NoDestructor, HasGetValueTypeHash)
			struct FSlateColor                           K2Node_MakeStruct_SlateColor_3;                    // 0x2C8(0x28)(None)
			class FString                                CallFunc_MakeLiteralString_ReturnValue_2;          // 0x2F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x300(0x10)(ZeroConstructor, HasGetValueTypeHash)
			struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo_2;                 // 0x310(0x58)(HasGetValueTypeHash)
			struct FFontOutlineSettings                  K2Node_MakeStruct_FontOutlineSettings_3;           // 0x368(0x20)(NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_isMobile_isMobile;                        // 0x388(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_FE4[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FMargin                               K2Node_MakeStruct_Margin;                          // 0x38C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_FE5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x3A0(0x88)(None)
			class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue;            // 0x428(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x430(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_FE6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FSlateFontInfo                        K2Node_MakeStruct_SlateFontInfo_3;                 // 0x438(0x58)(HasGetValueTypeHash)
		};

		// 0x1 (0x1 - 0x0)
		// Function slot.slot_C.setEmptySkill
		struct USlot_C_SetEmptySkill_Params
		{
		public:
			bool                                         IsEmpty;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x1 (0x1 - 0x0)
		// Function slot.slot_C.toggleSlot
		struct USlot_C_ToggleSlot_Params
		{
		public:
			bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x68 (0x68 - 0x0)
		// Function slot.slot_C.setItemShow
		struct USlot_C_SetItemShow_Params
		{
		public:
			struct FItem                                 ShowItem;                                          // 0x0(0x64)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
			uint8                                        Pad_FE9[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
		};

		// 0x2 (0x2 - 0x0)
		// Function slot.slot_C.initItemShow
		struct USlot_C_InitItemShow_Params
		{
		public:
			bool                                         bgVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         RedLine;                                           // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x25 (0x25 - 0x0)
		// Function slot.slot_C.setView
		struct USlot_C_SetView_Params
		{
		public:
			bool                                         Init;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_FF1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UView_C* CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UView_C* CallFunc_Create_ReturnValue_1;                     // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UView_C* CallFunc_Create_ReturnValue_2;                     // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_isMobile_isMobile;                        // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x23(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x1C (0x1C - 0x0)
		// Function slot.slot_C.showTempView
		struct USlot_C_ShowTempView_Params
		{
		public:
			bool                                         IsNew;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_FFB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UView_C* CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_FFC[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FVector2D                             CallFunc_GetMousePositionOnViewport_ReturnValue;   // 0x14(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x2C8 (0x2C8 - 0x0)
		// Function slot.slot_C.Set Item2
		struct USlot_C_Set_Item2_Params
		{
		public:
			struct FIitem                                Item;                                              // 0x0(0x148)(BlueprintVisible, BlueprintReadOnly, Parm)
			class UGameInstance* CallFunc_GetGameInstance_ReturnValue;              // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UM2data_C* K2Node_DynamicCast_AsM_2data;                      // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_1005[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_getDes_itemDes;                           // 0x160(0x10)(ZeroConstructor, HasGetValueTypeHash)
			struct FIitem                                CallFunc_getItem_item;                             // 0x170(0x148)(None)
			class FString                                CallFunc_Replace_ReturnValue;                      // 0x2B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
		};

		// 0x1E9 (0x1E9 - 0x0)
		// Function slot.slot_C.Set Item
		struct USlot_C_Set_Item_Params
		{
		public:
			struct FItem                                 Item;                                              // 0x0(0x64)(BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
			uint8                                        Pad_1012[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UGameInstance* CallFunc_GetGameInstance_ReturnValue;              // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UM2data_C* K2Node_DynamicCast_AsM_2data;                      // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_1014[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_getDes_itemDes;                           // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Replace_ReturnValue;                      // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash)
			struct FIitem                                CallFunc_getItem_item;                             // 0xA0(0x148)(None)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x50 (0x50 - 0x0)
		// Function slot.slot_C.initQuickSlot
		struct USlot_C_InitQuickSlot_Params
		{
		public:
			int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_101A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			struct FQuickSlot                            K2Node_MakeStruct_quickSlot;                       // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
			struct FQuickSlot                            K2Node_MakeStruct_quickSlot_1;                     // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
			struct FQuickSlot                            CallFunc_Array_Get_Item;                           // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_101B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_101C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x2 (0x2 - 0x0)
		// Function slot.slot_C.Init
		struct USlot_C_Init_Params
		{
		public:
			enum class ESlotType                         Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x1E1 (0x1E1 - 0x0)
		// Function slot.slot_C.resetSlot
		struct USlot_C_ResetSlot_Params
		{
		public:
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_1020[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* CallFunc_getSlot_slotOut;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo;                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_1021[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			struct FCharData                             CallFunc_getCharData_chardata;                     // 0x18(0x148)(None)
			struct FInvItem                              K2Node_MakeStruct_invItem;                         // 0x160(0x70)(None)
			bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x1D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_1022[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UM2data_C* CallFunc_game_game;                                // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x21 (0x21 - 0x0)
		// Function slot.slot_C.initInvItem
		struct USlot_C_InitInvItem_Params
		{
		public:
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_1025[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_1026[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_1027[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* CallFunc_getSlot_slotOut;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo;                            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x3 (0x3 - 0x0)
		// Function slot.slot_C.updateFocus
		struct USlot_C_UpdateFocus_Params
		{
		public:
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x1 (0x1 - 0x0)
		// Function slot.slot_C.setFocuss
		struct USlot_C_SetFocuss_Params
		{
		public:
			enum class EFocusType                        Type;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x13 (0x13 - 0x0)
		// Function slot.slot_C.checkUpSlot
		struct USlot_C_CheckUpSlot_Params
		{
		public:
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USlot_C* CallFunc_getSlot_slotOut;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo;                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x1 (0x1 - 0x0)
		// Function slot.slot_C.setDown
		struct USlot_C_SetDown_Params
		{
		public:
			bool                                         IsDown;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x30 (0x30 - 0x0)
		// Function slot.slot_C.addToInvData
		struct USlot_C_AddToInvData_Params
		{
		public:
			bool                                         Findo;                                             // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_102C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UGameInstance* CallFunc_GetGameInstance_ReturnValue;              // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UM2data_C* K2Node_DynamicCast_AsM_2data;                      // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_102D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<struct FSlot>                                 K2Node_MakeStruct_slot;                            // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
		};

		// 0x91 (0x91 - 0x0)
		// Function slot.slot_C.updateItemCount
		struct USlot_C_UpdateItemCount_Params
		{
		public:
			int32                                        Count;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_102F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			struct FQuickSlot                            CallFunc_getQuickSlot_q;                           // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
			bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_1030[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			struct FInvItem                              CallFunc_Map_Find_Value;                           // 0x20(0x70)(None)
			bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x1A (0x1A - 0x0)
		// Function slot.slot_C.updateCountText
		struct USlot_C_UpdateCountText_Params
		{
		public:
			class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x0(0x18)(None)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x174 (0x174 - 0x0)
		// Function slot.slot_C.SetBrush
		struct USlot_C_SetBrush_Params
		{
		public:
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_103F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			struct FWidgetTransform                      K2Node_MakeStruct_WidgetTransform;                 // 0x4(0x1C)(NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_1041[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x28(0x88)(None)
			struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0xB0(0x88)(None)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x139(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_1042[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			struct FWidgetTransform                      K2Node_MakeStruct_WidgetTransform_1;               // 0x13C(0x1C)(NoDestructor)
			struct FWidgetTransform                      K2Node_MakeStruct_WidgetTransform_2;               // 0x158(0x1C)(NoDestructor)
		};

		// 0x1 (0x1 - 0x0)
		// Function slot.slot_C.PreConstruct
		struct USlot_C_PreConstruct_Params
		{
		public:
			bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0xB0 (0xB0 - 0x0)
		// Function slot.slot_C.OnDragEnter
		struct USlot_C_OnDragEnter_Params
		{
		public:
			struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
			struct FPointerEvent                         PointerEvent;                                      // 0x38(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
			class UDragDropOperation* Operation;                                         // 0xA8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x78 (0x78 - 0x0)
		// Function slot.slot_C.OnDragLeave
		struct USlot_C_OnDragLeave_Params
		{
		public:
			struct FPointerEvent                         PointerEvent;                                      // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
			class UDragDropOperation* Operation;                                         // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0xA8 (0xA8 - 0x0)
		// Function slot.slot_C.OnMouseEnter
		struct USlot_C_OnMouseEnter_Params
		{
		public:
			struct FGeometry                             MyGeometry;                                        // 0x0(0x38)(BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
			struct FPointerEvent                         MouseEvent;                                        // 0x38(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		};

		// 0x70 (0x70 - 0x0)
		// Function slot.slot_C.OnMouseLeave
		struct USlot_C_OnMouseLeave_Params
		{
		public:
			struct FPointerEvent                         MouseEvent;                                        // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
		};

		// 0x548 (0x548 - 0x0)
		// Function slot.slot_C.ExecuteUbergraph_slot
		struct USlot_C_ExecuteUbergraph_slot_Params
		{
		public:
			int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0x10)(ZeroConstructor, NoDestructor)
			FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0x10)(ZeroConstructor, NoDestructor)
			uint8                                        Pad_106F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UMsgbox_C* CallFunc_Create_ReturnValue;                       // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x30(0x10)(ZeroConstructor, NoDestructor)
			class UGameInstance* CallFunc_GetGameInstance_ReturnValue;              // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UM2data_C* K2Node_DynamicCast_AsM_2data;                      // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsValid_ReturnValue;                      // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_1071[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UMsgbox_C* CallFunc_Create_ReturnValue_1;                     // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x60(0x10)(ZeroConstructor, NoDestructor)
			class FString                                CallFunc_gtext_ReturnValue;                        // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class UM2data_C* CallFunc_game_game;                                // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1;            // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UM2data_C* K2Node_DynamicCast_AsM_2data_1;                    // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_1072[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class UM2data_C* CallFunc_game_game_1;                              // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_canChangeSlot_can;                        // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_1073[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<class FString>                        K2Node_MakeArray_Array;                            // 0xD0(0x10)(ReferenceParm)
			TArray<int32>                                K2Node_MakeArray_Array_1;                          // 0xE0(0x10)(ReferenceParm)
			class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			struct FIitem                                CallFunc_getItem_ob;                               // 0x100(0x148)(None)
			bool                                         CallFunc_getItem_found;                            // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_1074[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_dotNumberS_ReturnValue;                   // 0x250(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         K2Node_Event_IsDesignTime;                         // 0x260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_1075[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<class FString>                        K2Node_MakeArray_Array_2;                          // 0x268(0x10)(ReferenceParm)
			class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2;            // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UM2data_C* K2Node_DynamicCast_AsM_2data_2;                    // 0x280(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x289(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_1076[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			struct FGeometry                             K2Node_Event_MyGeometry_1;                         // 0x28C(0x38)(IsPlainOldData, NoDestructor)
			uint8                                        Pad_1077[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			struct FPointerEvent                         K2Node_Event_PointerEvent_1;                       // 0x2C8(0x70)(None)
			class UDragDropOperation* K2Node_Event_Operation_1;                          // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_1078[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			struct FPointerEvent                         K2Node_Event_PointerEvent;                         // 0x348(0x70)(None)
			class UDragDropOperation* K2Node_Event_Operation;                            // 0x3B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_NotEqual_ObjectObject_ReturnValue;        // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x3C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_1079[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x3C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USlot_C* CallFunc_getSlot_slotOut;                          // 0x3C8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo;                            // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_107C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			struct FGeometry                             K2Node_Event_MyGeometry;                           // 0x3D4(0x38)(IsPlainOldData, NoDestructor)
			uint8                                        Pad_107D[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			struct FPointerEvent                         K2Node_Event_MouseEvent_1;                         // 0x410(0x70)(ConstParm)
			struct FPointerEvent                         K2Node_Event_MouseEvent;                           // 0x480(0x70)(ConstParm)
			bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x4F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_107E[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<class FString>                        K2Node_MakeArray_Array_3;                          // 0x4F8(0x10)(ReferenceParm)
			TArray<int32>                                K2Node_MakeArray_Array_4;                          // 0x508(0x10)(ReferenceParm)
			TArray<int32>                                K2Node_MakeArray_Array_5;                          // 0x518(0x10)(ReferenceParm)
			class FString                                CallFunc_gtext_ReturnValue_1;                      // 0x528(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_formatText_ReturnValue;                   // 0x538(0x10)(ZeroConstructor, HasGetValueTypeHash)
		};
	}
}