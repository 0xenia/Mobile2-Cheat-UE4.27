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

		// 0x68 (0x68 - 0x0)
		// Function m2data.m2data_C.ToggleCinematic
		struct UM2data_C_ToggleCinematic_Params
		{
		public:
			bool                                         Res;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_D53[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Array_Index_Variable;                     // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Array_Index_Variable_1;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_D55[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UM2data_C* CallFunc_game_game;                                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UM2data_C* CallFunc_game_game_1;                              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UM2data_C* CallFunc_game_game_2;                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UActorNameRPlayer_C* CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_D59[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UActorNameMob_C* CallFunc_Array_Get_Item_1;                         // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_isMobile_isMobile;                        // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_isMobile_isMobile_1;                      // 0x56(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_D5A[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UM2data_C* CallFunc_game_game_3;                              // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UM2data_C* CallFunc_game_game_4;                              // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x20 (0x20 - 0x0)
		// Function m2data.m2data_C.openWebBrowser
		struct UM2data_C_OpenWebBrowser_Params
		{
		public:
			class FString                                Link;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			class UWebBrowser_C* browser;                                           // 0x10(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UWebBrowser_C* CallFunc_Create_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x20 (0x20 - 0x0)
		// Function m2data.m2data_C.openMobile2Website
		struct UM2data_C_OpenMobile2Website_Params
		{
		public:
			class FString                                URL;                                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                Str;                                               // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
		};

		// 0x14 (0x14 - 0x0)
		// Function m2data.m2data_C.getSkillUsableByType
		struct UM2data_C_GetSkillUsableByType_Params
		{
		public:
			int32                                        SkillId;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Type;                                              // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         NewParam;                                          // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x3B (0x3B - 0x0)
		// Function m2data.m2data_C.quickSlotCanTake
		struct UM2data_C_QuickSlotCanTake_Params
		{
		public:
			class USlot_C* Ref;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Res;                                               // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_D60[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_getItemSubType_type;                      // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_getItemType_type;                         // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Contains_ReturnValue;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Contains_ReturnValue_1;                   // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Contains_ReturnValue_2;                   // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Contains_ReturnValue_3;                   // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Contains_ReturnValue_4;                   // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Contains_ReturnValue_5;                   // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x37(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x59 (0x59 - 0x0)
		// Function m2data.m2data_C.checkInsult
		struct UM2data_C_CheckInsult_Params
		{
		public:
			class FString                                Checkstr;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			bool                                         Res;                                               // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_D62[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue;               // 0x18(0x10)(ReferenceParm)
			int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                CallFunc_Array_Get_Item;                           // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_D63[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_D64[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UM2data_C* CallFunc_game_game;                                // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Array_Contains_ReturnValue;               // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x138 (0x138 - 0x0)
		// Function m2data.m2data_C.dateText
		struct UM2data_C_DateText_Params
		{
		public:
			struct FTimespan                             Tim;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
			class FString                                Outdate;                                           // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                Date;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakTimespan_Days;                       // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakTimespan_Hours;                      // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakTimespan_Minutes;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakTimespan_Seconds;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakTimespan_Milliseconds;               // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_D69[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_D6A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_D6B[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Conv_IntToString_ReturnValue_2;           // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_D6C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_gtext_ReturnValue;                        // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_gtext_ReturnValue_1;                      // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_gtext_ReturnValue_2;                      // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
		};

		// 0x31 (0x31 - 0x0)
		// Function m2data.m2data_C.openItemShopPacket
		struct UM2data_C_OpenItemShopPacket_Params
		{
		public:
			struct FPacket                               Packet;                                            // 0x0(0x28)(BlueprintVisible, BlueprintReadOnly, Parm)
			class UM2data_C* CallFunc_game_game;                                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x79 (0x79 - 0x0)
		// Function m2data.m2data_C.getSlotItem
		struct UM2data_C_GetSlotItem_Params
		{
		public:
			int32                                        ID;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_D6E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FItem                                 Item;                                              // 0x8(0x64)(Parm, OutParm, HasGetValueTypeHash)
			uint8                                        Pad_D6F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* CallFunc_getSlotPure_slotOut;                      // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlotPure_findo;                        // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x30 (0x30 - 0x0)
		// Function m2data.m2data_C.openItemShop
		struct UM2data_C_OpenItemShop_Params
		{
		public:
			int32                                        Catid;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_D70[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x8(0x10)(ReferenceParm)
			TArray<int32>                                K2Node_MakeArray_Array_1;                          // 0x18(0x10)(ReferenceParm)
			class UM2data_C* CallFunc_game_game;                                // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x128 (0x128 - 0x0)
		// Function m2data.m2data_C.getCharImage
		struct UM2data_C_GetCharImage_Params
		{
		public:
			int32                                        Type;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_D71[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FSlateBrush                           NewParam1;                                         // 0x8(0x88)(Parm, OutParm)
			class UPaperSprite* Img;                                               // 0x90(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_D72[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0xA0(0x88)(None)
		};

		// 0xB0 (0xB0 - 0x0)
		// Function m2data.m2data_C.goTargetEffect
		struct UM2data_C_GoTargetEffect_Params
		{
		public:
			class USkeletalMeshComponent* Ske;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FName                                  SkeSocket;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class AActor* Target;                                            // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UParticleSystem* Effect;                                            // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        Delay;                                             // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        Speed;                                             // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USoundBase* Sound;                                             // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        IsDirectioner;                                     // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        MinShowTime;                                       // 0x34(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         DoDrop;                                            // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         ShowHit;                                           // 0x39(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_D84[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			float                                        Size;                                              // 0x3C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         AffectAll;                                         // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_D85[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			float                                        AffectDistance;                                    // 0x44(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         SpawnOnTarget;                                     // 0x48(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         AttachForGo;                                       // 0x49(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_D86[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x4C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_D87[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x60(0x30)(IsPlainOldData, NoDestructor)
			class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                CallFunc_Conv_NameToString_ReturnValue;            // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class AGo* CallFunc_FinishSpawningActor_ReturnValue;          // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x33 (0x33 - 0x0)
		// Function m2data.m2data_C.addSameStackable
		struct UM2data_C_AddSameStackable_Params
		{
		public:
			class USlot_C* Source;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USlot_C* Target;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        OldTargetCount;                                    // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_D8D[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x19 (0x19 - 0x0)
		// Function m2data.m2data_C.checkStackable
		struct UM2data_C_CheckStackable_Params
		{
		public:
			class USlot_C* Source;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USlot_C* Target;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Can;                                               // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_getItemFlag_isHave;                       // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Contains_ReturnValue;                     // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_getItemFlag_isHave_1;                     // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x73 (0x73 - 0x0)
		// Function m2data.m2data_C.checkUseItem
		struct UM2data_C_CheckUseItem_Params
		{
		public:
			class USlot_C* Source;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USlot_C* Target;                                            // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Can;                                               // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         Local;                                             // 0x11(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_DA5[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_getItemSubType_type;                      // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_DA6[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_getItemType_type;                         // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Contains_ReturnValue;                     // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         K2Node_SwitchString_CmpSuccess_1;                  // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_DA7[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_getItemSubType_type_1;                    // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         K2Node_SwitchString_CmpSuccess_2;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Contains_ReturnValue_1;                   // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Contains_ReturnValue_2;                   // 0x5B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_DA9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_getItemType_type_1;                       // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         K2Node_SwitchString_CmpSuccess_3;                  // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x18D (0x18D - 0x0)
		// Function m2data.m2data_C.slotCanTake
		struct UM2data_C_SlotCanTake_Params
		{
		public:
			int32                                        Slot;                                              // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_DAF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FIitem                                Item;                                              // 0x8(0x148)(BlueprintVisible, BlueprintReadOnly, Parm)
			bool                                         CanTake;                                           // 0x150(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_DB0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                Message;                                           // 0x158(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                ItemSubTypem;                                      // 0x168(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
			class FString                                ItemTypem;                                         // 0x178(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
			bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x18A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Contains_ReturnValue;                     // 0x18B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Contains_ReturnValue_1;                   // 0x18C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x11B (0x11B - 0x0)
		// Function m2data.m2data_C.Change Slot
		struct UM2data_C_Change_Slot_Params
		{
		public:
			class UUserWidget* SourceSlot;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UUserWidget* TargetSlot;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FItem                                 TargetT;                                           // 0x10(0x64)(Edit, BlueprintVisible, HasGetValueTypeHash)
			uint8                                        Pad_DB7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FItem                                 SourceT;                                           // 0x78(0x64)(Edit, BlueprintVisible, HasGetValueTypeHash)
			uint8                                        Pad_DB9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* K2Node_DynamicCast_AsSlot;                         // 0xE0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_DBA[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* K2Node_DynamicCast_AsSlot_1;                       // 0xF0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_DBB[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* K2Node_DynamicCast_AsSlot_2;                       // 0x100(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_DBC[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* K2Node_DynamicCast_AsSlot_3;                       // 0x110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x119(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x11A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0xE8 (0xE8 - 0x0)
		// Function m2data.m2data_C.changeCharDataInv
		struct UM2data_C_ChangeCharDataInv_Params
		{
		public:
			struct FInvItem                              Old;                                               // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
			struct FInvItem                              New;                                               // 0x70(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
			int32                                        Oldid;                                             // 0xE0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Newid;                                             // 0xE4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x37 (0x37 - 0x0)
		// Function m2data.m2data_C.checkSlotLoc
		struct UM2data_C_CheckSlotLoc_Params
		{
		public:
			int32                                        Slotid;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Res;                                               // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_DD2[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_IntInt_ReturnValue_3;             // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_2;        // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_3;        // 0x1D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_DD3[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_DD4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* CallFunc_getSlot_slotOut;                          // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo;                            // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_5;                // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_7;                 // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_8;                 // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x21E (0x21E - 0x0)
		// Function m2data.m2data_C.getPlayerItemSubType
		struct UM2data_C_GetPlayerItemSubType_Params
		{
		public:
			class FString                                SubType;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			bool                                         NeedLevel;                                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_DDD[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* Slot;                                              // 0x18(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Found;                                             // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         ErrLevel;                                          // 0x21(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         LevelErr;                                          // 0x22(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_DDE[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        Temp_int_Array_Index_Variable;                     // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			TArray<int32>                                CallFunc_Map_Keys_Keys;                            // 0x30(0x10)(ReferenceParm)
			int32                                        CallFunc_Array_Get_Item;                           // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USlot_C* CallFunc_getSlot_slotOut;                          // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo;                            // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_DDF[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FInvItem                              CallFunc_Map_Find_Value;                           // 0x58(0x70)(None)
			bool                                         CallFunc_Map_Find_ReturnValue;                     // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_DE0[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FIitem                                CallFunc_getItem_item;                             // 0xD0(0x148)(None)
			int32                                        CallFunc_getItemLimitValue_value;                  // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x21C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x21D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x15E (0x15E - 0x0)
		// Function m2data.m2data_C.getItemLimitValue
		struct UM2data_C_GetItemLimitValue_Params
		{
		public:
			struct FIitem                                Item;                                              // 0x0(0x148)(BlueprintVisible, BlueprintReadOnly, Parm)
			class FString                                Limit;                                             // 0x148(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			int32                                        Value;                                             // 0x158(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x15C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x15D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x154 (0x154 - 0x0)
		// Function m2data.m2data_C.getSlotCount
		struct UM2data_C_GetSlotCount_Params
		{
		public:
			int32                                        C;                                                 // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_DED[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FCharData                             CallFunc_getCharData_chardata;                     // 0x8(0x148)(None)
			int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x15F (0x15F - 0x0)
		// Function m2data.m2data_C.equpCanTake
		struct UM2data_C_EqupCanTake_Params
		{
		public:
			int32                                        Equpid;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_DFC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FIitem                                Itemref;                                           // 0x8(0x148)(BlueprintVisible, BlueprintReadOnly, Parm)
			bool                                         Can;                                               // 0x150(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x152(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x153(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x154(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_3;          // 0x155(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_4;          // 0x156(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_5;          // 0x157(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_6;          // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_7;          // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_8;          // 0x15A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_9;          // 0x15B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_10;         // 0x15C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x15D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_11;         // 0x15E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x14 (0x14 - 0x0)
		// Function m2data.m2data_C.spawnSkill
		struct UM2data_C_SpawnSkill_Params
		{
		public:
			bool                                         IsWeapon;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E01[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        SkillId;                                           // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class AActor* Actr;                                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Duration;                                          // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x1C5 (0x1C5 - 0x0)
		// Function m2data.m2data_C.checkFishable
		struct UM2data_C_CheckFishable_Params
		{
		public:
			class AActor* Player;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Res;                                               // 0x8(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E11[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FVector                               HitPos;                                            // 0xC(0xC)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               Pos;                                               // 0x18(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         WaterSet;                                          // 0x24(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         FirstLandscape;                                    // 0x25(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x26(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E12[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x28(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E13[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FVector                               CallFunc_GetActorForwardVector_ReturnValue;        // 0x38(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_IsValid_ReturnValue;                      // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E14[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x48(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x54(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			TArray<class AActor*>                        K2Node_MakeArray_Array;                            // 0x60(0x10)(ConstParm, ReferenceParm)
			struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x70(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_Add_VectorVector_ReturnValue_2;           // 0x7C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Array_Index_Variable;                     // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_E15[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<struct FHitResult>                    CallFunc_BoxTraceMulti_OutHits;                    // 0x90(0x10)(ReferenceParm, ContainsInstancedReference)
			bool                                         CallFunc_BoxTraceMulti_ReturnValue;                // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E16[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FHitResult                            CallFunc_Array_Get_Item;                           // 0xA4(0x88)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x131(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E19[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			float                                        CallFunc_BreakHitResult_Time;                      // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_BreakHitResult_Distance;                  // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x13C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x148(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x154(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x160(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_E1B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat;                   // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class AActor* CallFunc_BreakHitResult_HitActor;                  // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent;              // 0x180(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x19C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x1A8(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_ActorHasTag_ReturnValue;                  // 0x1B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E1D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x1BC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E1E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1C4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x140 (0x140 - 0x0)
		// Function m2data.m2data_C.invitemToItem
		struct UM2data_C_InvitemToItem_Params
		{
		public:
			struct FInvItem                              InvItem;                                           // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm)
			struct FItem                                 Item;                                              // 0x70(0x64)(Parm, OutParm, HasGetValueTypeHash)
			uint8                                        Pad_E24[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FItem                                 K2Node_MakeStruct_item;                            // 0xD8(0x64)(HasGetValueTypeHash)
			uint8                                        Pad_E25[0x4];                                      // Fixing Size Of Struct [ Dumper-7 ]
		};

		// 0x18 (0x18 - 0x0)
		// Function m2data.m2data_C.quickUse
		struct UM2data_C_QuickUse_Params
		{
		public:
			int32                                        ID;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_E29[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FQuickSlot                            CallFunc_getQuickSlot_q;                           // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
		};

		// 0x149 (0x149 - 0x0)
		// Function m2data.m2data_C.initSkills
		struct UM2data_C_InitSkills_Params
		{
		public:
			struct FCharData                             CallFunc_getCharData_chardata;                     // 0x0(0x148)(None)
			bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x3F (0x3F - 0x0)
		// Function m2data.m2data_C.reload
		struct UM2data_C_Reload_Params
		{
		public:
			TArray<struct FQuickSlot>                    Temp_struct_Variable;                              // 0x0(0x10)(ReferenceParm, ContainsInstancedReference)
			TArray<struct FQuickSlot>                    Temp_struct_Variable_1;                            // 0x10(0x10)(ReferenceParm, ContainsInstancedReference)
			int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_E2B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FTimerHandle                          CallFunc_Array_Get_Item;                           // 0x30(0x8)(NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_K2_IsValidTimerHandle_ReturnValue;        // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x318 (0x318 - 0x0)
		// Function m2data.m2data_C.makeQuestString
		struct UM2data_C_MakeQuestString_Params
		{
		public:
			class FString                                Qdata;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			int32                                        ID;                                                // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_E32[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                Text;                                              // 0x18(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                Param;                                             // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
			class FString                                Qq;                                                // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Split_LeftS;                              // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Split_RightS;                             // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Split_ReturnValue;                        // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E33[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                CallFunc_Split_LeftS_1;                            // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Split_RightS_1;                           // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Split_ReturnValue_1;                      // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E34[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Split_LeftS_2;                            // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Split_RightS_2;                           // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Split_ReturnValue_2;                      // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E35[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Conv_StringToInt_ReturnValue_1;           // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Len_ReturnValue;                          // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_E36[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<int32>                                K2Node_MakeArray_Array;                            // 0xC8(0x10)(ReferenceParm)
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E37[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                CallFunc_GetSubstring_ReturnValue;                 // 0xE0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_GetSubstring_ReturnValue_1;               // 0xF0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E38[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_gtext_ReturnValue;                        // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_qtext_ReturnValue;                        // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_gtext_ReturnValue_1;                      // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E39[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Conv_StringToInt_ReturnValue_2;           // 0x13C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                CallFunc_gtext_ReturnValue_2;                      // 0x140(0x10)(ZeroConstructor, HasGetValueTypeHash)
			struct FMob                                  CallFunc_getMob_mob;                               // 0x150(0x188)(None)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x2D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E3A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_qtext_ReturnValue_1;                      // 0x2E0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_IsNumeric_ReturnValue;                    // 0x2F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E3C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<class FString>                        K2Node_MakeArray_Array_1;                          // 0x2F8(0x10)(ReferenceParm)
			class FString                                CallFunc_formatText_ReturnValue;                   // 0x308(0x10)(ZeroConstructor, HasGetValueTypeHash)
		};

		// 0x44 (0x44 - 0x0)
		// Function m2data.m2data_C.getPointerPos
		struct UM2data_C_GetPointerPos_Params
		{
		public:
			struct FVector2D                             Pos;                                               // 0x0(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class APlayerController* CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_isMobile_isMobile;                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E41[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			float                                        CallFunc_GetMousePositionScaledByDPI_LocationX;    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_GetMousePositionScaledByDPI_LocationY;    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_GetMousePositionScaledByDPI_ReturnValue;  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E42[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue;    // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_GetInputTouchState_LocationX;             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_GetInputTouchState_LocationY;             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_GetInputTouchState_bIsCurrentlyPressed;   // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E43[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x3C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x328 (0x328 - 0x0)
		// Function m2data.m2data_C.dateToString
		struct UM2data_C_DateToString_Params
		{
		public:
			struct FDateTime                             DateTime;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
			bool                                         ShowTime;                                          // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         ShowTimeSecond;                                    // 0x9(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E4C[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                Str;                                               // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakDateTime_Year;                       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakDateTime_Month;                      // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakDateTime_Day;                        // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakDateTime_Hour;                       // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakDateTime_Minute;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakDateTime_Second;                     // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakDateTime_Millisecond;                // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_E4F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x40(0x18)(None)
			class FText                                  CallFunc_Conv_IntToText_ReturnValue_1;             // 0x58(0x18)(None)
			class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FText                                  CallFunc_Conv_IntToText_ReturnValue_2;             // 0x90(0x18)(None)
			class FText                                  CallFunc_Conv_IntToText_ReturnValue_3;             // 0xA8(0x18)(None)
			class FString                                CallFunc_Conv_TextToString_ReturnValue_2;          // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Conv_TextToString_ReturnValue_3;          // 0xD0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FText                                  CallFunc_Conv_IntToText_ReturnValue_4;             // 0xE0(0x18)(None)
			class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Conv_TextToString_ReturnValue_4;          // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x138(0x10)(ZeroConstructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakDateTime_Year_1;                     // 0x148(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakDateTime_Month_1;                    // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakDateTime_Day_1;                      // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakDateTime_Hour_1;                     // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakDateTime_Minute_1;                   // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakDateTime_Second_1;                   // 0x15C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakDateTime_Millisecond_1;              // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_E51[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x168(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FText                                  CallFunc_Conv_IntToText_ReturnValue_5;             // 0x178(0x18)(None)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x190(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Conv_TextToString_ReturnValue_5;          // 0x1A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x1B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FText                                  CallFunc_Conv_IntToText_ReturnValue_6;             // 0x1C0(0x18)(None)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x1D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Conv_TextToString_ReturnValue_6;          // 0x1E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x1F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FText                                  CallFunc_Conv_IntToText_ReturnValue_7;             // 0x208(0x18)(None)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_8;              // 0x220(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Conv_TextToString_ReturnValue_7;          // 0x230(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_9;              // 0x240(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_10;             // 0x250(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FText                                  CallFunc_Conv_IntToText_ReturnValue_8;             // 0x260(0x18)(None)
			class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x278(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Conv_TextToString_ReturnValue_8;          // 0x288(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_11;             // 0x298(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_12;             // 0x2A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_13;             // 0x2B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_14;             // 0x2C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_15;             // 0x2D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_16;             // 0x2E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_17;             // 0x2F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_18;             // 0x308(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_19;             // 0x318(0x10)(ZeroConstructor, HasGetValueTypeHash)
		};

		// 0x7A (0x7A - 0x0)
		// Function m2data.m2data_C.clearInvChardata
		struct UM2data_C_ClearInvChardata_Params
		{
		public:
			int32                                        Slotid;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_E59[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FInvItem                              K2Node_MakeStruct_invItem;                         // 0x8(0x70)(None)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x9 (0x9 - 0x0)
		// Function m2data.m2data_C.clearSelected
		struct UM2data_C_ClearSelected_Params
		{
		public:
			class USlot_C* K2Node_DynamicCast_AsSlot;                         // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x48 (0x48 - 0x0)
		// Function m2data.m2data_C.dropItem
		struct UM2data_C_DropItem_Params
		{
		public:
			int32                                        Slotid;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_E5D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x8(0x10)(ReferenceParm)
			class USlot_C* CallFunc_getSlot_slotOut;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo;                            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E5E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FQuickSlot                            CallFunc_getQuickSlot_q;                           // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
			TArray<int32>                                K2Node_MakeArray_Array_1;                          // 0x38(0x10)(ReferenceParm)
		};

		// 0x40 (0x40 - 0x0)
		// Function m2data.m2data_C.getBox
		struct UM2data_C_GetBox_Params
		{
		public:
			int32                                        ItemId;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_E5F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<class FString>                        boxContains;                                       // 0x8(0x10)(Parm, OutParm)
			bool                                         Found;                                             // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         F;                                                 // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_getBox_isBox;                             // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E61[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_getBox_ob;                                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
			TArray<class FString>                        CallFunc_ParseIntoArray_ReturnValue;               // 0x30(0x10)(ReferenceParm)
		};

		// 0x1A (0x1A - 0x0)
		// Function m2data.m2data_C.selectShopSlot
		struct UM2data_C_SelectShopSlot_Params
		{
		public:
			class USlot_C* Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UM2data_C* CallFunc_game_game;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USlot_C* K2Node_DynamicCast_AsSlot;                         // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsValid_ReturnValue;                      // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x70 (0x70 - 0x0)
		// Function m2data.m2data_C.selectNearTarget
		struct UM2data_C_SelectNearTarget_Params
		{
		public:
			float                                        Dis;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Selected;                                          // 0x4(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E6D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			float                                        Near;                                              // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_E6E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class ANpc* Nearest;                                           // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Array_Index_Variable;                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_E6F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class ANpc* K2Node_DynamicCast_AsNpc;                          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E70[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x34(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class ANpc* CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_canAttack_ReturnValue;                    // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E71[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x50(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E72[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			float                                        CallFunc_Vector_Distance_ReturnValue;              // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_FloatFloat_ReturnValue;              // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x66(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_FloatFloat_ReturnValue_1;            // 0x67(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x6D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x6E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x6F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x50 (0x50 - 0x0)
		// Function m2data.m2data_C.SkillUser
		struct UM2data_C_SkillUser_Params
		{
		public:
			class AActor* Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        SkillId;                                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_E74[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class ANpc* K2Node_DynamicCast_AsNpc;                          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E75[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class APlayerMove* K2Node_DynamicCast_AsPlayer_Move;                  // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E76[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
		};

		// 0x100 (0x100 - 0x0)
		// Function m2data.m2data_C.itemUse
		struct UM2data_C_ItemUse_Params
		{
		public:
			int32                                        Slotid;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        TargSlotId;                                        // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USlot_C* CallFunc_getSlot_slotOut;                          // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo;                            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_itemCanUse_isCanUse;                      // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E80[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_itemCanUse_message;                       // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_itemCanUse_whoUse;                        // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E81[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* CallFunc_getSlot_slotOut_1;                        // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo_1;                          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E82[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* CallFunc_getSlot_slotOut_2;                        // 0x50(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo_2;                          // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E83[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* CallFunc_getSlot_slotOut_3;                        // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo_3;                          // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E84[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<int32>                                K2Node_MakeArray_Array;                            // 0x70(0x10)(ReferenceParm)
			bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         K2Node_SwitchString_CmpSuccess_1;                  // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         K2Node_SwitchString_CmpSuccess_2;                  // 0x82(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E85[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<int32>                                K2Node_MakeArray_Array_1;                          // 0x88(0x10)(ReferenceParm)
			class USlot_C* CallFunc_getSlot_slotOut_4;                        // 0x98(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo_4;                          // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E86[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* CallFunc_getSlot_slotOut_5;                        // 0xA8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo_5;                          // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0xB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E87[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UM2data_C* CallFunc_game_game;                                // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E88[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<class FString>                        K2Node_MakeArray_Array_2;                          // 0xC8(0x10)(ReferenceParm)
			bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E89[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<class FString>                        K2Node_MakeArray_Array_3;                          // 0xE0(0x10)(ReferenceParm)
			bool                                         CallFunc_canChangeEqup_can;                        // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_canChangeEqup_can_1;                      // 0xF1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_canChangeEqup_can_2;                      // 0xF2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E8B[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UCostumeAttr_C* CallFunc_Create_ReturnValue;                       // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x56 (0x56 - 0x0)
		// Function m2data.m2data_C.Costumable Use
		struct UM2data_C_Costumable_Use_Params
		{
		public:
			int32                                        Slotid;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_E97[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_gtext_ReturnValue;                        // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class USlot_C* CallFunc_getSlot_slotOut;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo;                            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_itemCanUse_isCanUse;                      // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E9A[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_itemCanUse_message;                       // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_itemCanUse_whoUse;                        // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_E9C[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_getEmptySlot_emptySlotId;                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         K2Node_SwitchString_CmpSuccess;                    // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x52(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x53(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_canChangeEqup_can;                        // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_canChangeSlot_can;                        // 0x55(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x30 (0x30 - 0x0)
		// Function m2data.m2data_C.sendSlotChangeReq
		struct UM2data_C_SendSlotChangeReq_Params
		{
		public:
			int32                                        FromSlot;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Fromitem;                                          // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        TargetSlot;                                        // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        TargetItem;                                        // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x10(0x10)(ReferenceParm)
			TArray<int32>                                K2Node_MakeArray_Array_1;                          // 0x20(0x10)(ReferenceParm)
		};

		// 0x5 (0x5 - 0x0)
		// Function m2data.m2data_C.Play
		struct UM2data_C_Play_Params
		{
		public:
			int32                                        Slotid;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x98 (0x98 - 0x0)
		// Function m2data.m2data_C.sellItem
		struct UM2data_C_SellItem_Params
		{
		public:
			class USlot_C* Slot;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_EBA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Divide_IntInt_ReturnValue;                // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Contains_ReturnValue;                     // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_EBD[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_FormatDot_yangText;                       // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
			TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x48(0x10)(ReferenceParm)
			TArray<int32>                                K2Node_MakeArray_Array_1;                          // 0x58(0x10)(ReferenceParm)
			class FString                                CallFunc_gtext_ReturnValue;                        // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_gtext_ReturnValue_1;                      // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_formatText_ReturnValue;                   // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
		};

		// 0x4E (0x4E - 0x0)
		// Function m2data.m2data_C.canChangeEqup
		struct UM2data_C_CanChangeEqup_Params
		{
		public:
			bool                                         Can;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_EC6[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                Temp_string_Variable;                              // 0x8(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_EC8[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Map_Find_Value;                           // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_EC9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_localeString_text;                        // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_2;        // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue_4;                  // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue_5;                  // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x29 (0x29 - 0x0)
		// Function m2data.m2data_C.questString
		struct UM2data_C_QuestString_Params
		{
		public:
			int32                                        ID;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_ECD[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                Text;                                              // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Map_Find_Value;                           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x29 (0x29 - 0x0)
		// Function m2data.m2data_C.localeString
		struct UM2data_C_LocaleString_Params
		{
		public:
			int32                                        ID;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_ECE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                Text;                                              // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Map_Find_Value;                           // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x10 (0x10 - 0x0)
		// Function m2data.m2data_C.Msg
		struct UM2data_C_Msg_Params
		{
		public:
			class FString                                Msg;                                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		};

		// 0x2A (0x2A - 0x0)
		// Function m2data.m2data_C.addchate
		struct UM2data_C_Addchate_Params
		{
		public:
			int32                                        Sender;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_ED5[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                SenderName;                                        // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                Message;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x88 (0x88 - 0x0)
		// Function m2data.m2data_C.getYangText
		struct UM2data_C_GetYangText_Params
		{
		public:
			class FString                                YangText;                                          // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Gtext_text;                               // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_isArabic_is;                              // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_ED7[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Gtext_text_1;                             // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_dotNumberS_ReturnValue;                   // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
		};

		// 0xB1 (0xB1 - 0x0)
		// Function m2data.m2data_C.onlyNumber
		struct UM2data_C_OnlyNumber_Params
		{
		public:
			class UEditableTextBox* Ref;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FText                                  Text;                                              // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
			bool                                         ZeroPlus;                                          // 0x20(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_EE3[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        MaxValue;                                          // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Res;                                               // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_EE4[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Conv_TextToString_ReturnValue_1;          // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
			int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_EE6[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_GetSubstring_ReturnValue;                 // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_EE8[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Conv_StringToInt_ReturnValue_1;           // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Len_ReturnValue;                          // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_EEA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_EEC[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_GetSubstring_ReturnValue_1;               // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_IsNumeric_ReturnValue;                    // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_EEE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x98(0x18)(None)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x18 (0x18 - 0x0)
		// Function m2data.m2data_C.msgbox
		struct UM2data_C_Msgbox_Params
		{
		public:
			class FString                                Msg;                                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			class UMsgbox_C* CallFunc_Create_ReturnValue;                       // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x1D (0x1D - 0x0)
		// Function m2data.m2data_C.canChangeSlot
		struct UM2data_C_CanChangeSlot_Params
		{
		public:
			bool                                         Can;                                               // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_1;        // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_2;        // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_3;        // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_4;        // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_5;        // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_6;        // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue_7;        // 0xE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xF(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_1;        // 0x16(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x17(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue_2;        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x1A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x1B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0xBE (0xBE - 0x0)
		// Function m2data.m2data_C.getRankText
		struct UM2data_C_GetRankText_Params
		{
		public:
			int32                                        Rankk;                                             // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_F01[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                RankText;                                          // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
			int32                                        Rank;                                              // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_F02[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_gtext_ReturnValue;                        // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_gtext_ReturnValue_1;                      // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_gtext_ReturnValue_2;                      // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_gtext_ReturnValue_3;                      // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_gtext_ReturnValue_4;                      // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x72(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_IntInt_ReturnValue_3;             // 0x73(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F03[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_gtext_ReturnValue_5;                      // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_gtext_ReturnValue_6;                      // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_gtext_ReturnValue_7;                      // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_gtext_ReturnValue_8;                      // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Greater_IntInt_ReturnValue_4;             // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xBA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0xBB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xBD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x4D (0x4D - 0x0)
		// Function m2data.m2data_C.getEmptySlot
		struct UM2data_C_GetEmptySlot_Params
		{
		public:
			bool                                         IsDouble;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F0E[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        EmptySlotId;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Temp_bool_Variable;                                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F0F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        Temp_int_Variable;                                 // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F10[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* CallFunc_getSlot_slotOut;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo;                            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F11[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* CallFunc_getSlot_slotOut_1;                        // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo_1;                          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F12[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USlot_C* CallFunc_getSlot_slotOut_2;                        // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo_2;                          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F13[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x4B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x39 (0x39 - 0x0)
		// Function m2data.m2data_C.getSkillSlot
		struct UM2data_C_GetSkillSlot_Params
		{
		public:
			int32                                        ID;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        PId;                                               // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USlot_C* Skill;                                             // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x13(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F1C[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class USlot_C* CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0x35(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x36(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x37(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x21 (0x21 - 0x0)
		// Function m2data.m2data_C.getSlotPure
		struct UM2data_C_GetSlotPure_Params
		{
		public:
			int32                                        ID;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_F1D[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* SlotOut;                                           // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Findo;                                             // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         Find;                                              // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F1E[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* CallFunc_getSlot_slotOut;                          // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_getSlot_findo;                            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x158 (0x158 - 0x0)
		// Function m2data.m2data_C.getSkill
		struct UM2data_C_GetSkill_Params
		{
		public:
			int32                                        ID;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_F1F[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FSkill                                Skill;                                             // 0x8(0xA8)(Parm, OutParm)
			struct FSkill                                CallFunc_getSkill_ob;                              // 0xB0(0xA8)(None)
		};

		// 0x328 (0x328 - 0x0)
		// Function m2data.m2data_C.itemCanUse
		struct UM2data_C_ItemCanUse_Params
		{
		public:
			struct FIitem                                Item;                                              // 0x0(0x148)(BlueprintVisible, BlueprintReadOnly, Parm)
			bool                                         NoLevel;                                           // 0x148(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         IsCanUse;                                          // 0x149(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F3A[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                Message;                                           // 0x150(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                WhoUse;                                            // 0x160(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                Cinsm;                                             // 0x170(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
			int32                                        LevelLimit;                                        // 0x180(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_F3C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                WhoCanUse;                                         // 0x188(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
			bool                                         CanUse;                                            // 0x198(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F3E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                ItemSubTypem;                                      // 0x1A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
			class FString                                ItemTypem;                                         // 0x1B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
			class FString                                Typem;                                             // 0x1C0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable;                              // 0x1D0(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Contains_ReturnValue;                     // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x1E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x1E2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Contains_ReturnValue_1;                   // 0x1E3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Contains_ReturnValue_2;                   // 0x1E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Contains_ReturnValue_3;                   // 0x1E5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F41[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                Temp_string_Variable_1;                            // 0x1E8(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                Temp_string_Variable_2;                            // 0x1F8(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Map_Find_Value;                           // 0x208(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F42[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                Temp_string_Variable_3;                            // 0x220(0x10)(ConstParm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x230(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Map_Find_Value_1;                         // 0x240(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F43[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x258(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x268(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x278(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x288(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x298(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Map_Find_Value_2;                         // 0x2A8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x2B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F44[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x2C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Map_Find_Value_3;                         // 0x2D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Map_Find_ReturnValue_3;                   // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F46[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x2E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Gtext_text;                               // 0x2F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Contains_ReturnValue_4;                   // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F47[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_qtext_ReturnValue;                        // 0x310(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Contains_ReturnValue_5;                   // 0x320(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x321(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x322(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x323(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x324(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         K2Node_SwitchInteger_CmpSuccess;                   // 0x325(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x326(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x327(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0xB8 (0xB8 - 0x0)
		// Function m2data.m2data_C.FormatDot
		struct UM2data_C_FormatDot_Params
		{
		public:
			class FString                                Yang;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                YangText;                                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                T;                                                 // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
			int32                                        CallFunc_Len_ReturnValue;                          // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Len_ReturnValue_1;                        // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			TArray<class FString>                        CallFunc_GetCharacterArrayFromString_ReturnValue;  // 0x38(0x10)(ReferenceParm)
			int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_F5B[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_GetSubstring_ReturnValue;                 // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F5D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Len_ReturnValue_2;                        // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_FindSubstring_ReturnValue;                // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F5F[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                CallFunc_GetSubstring_ReturnValue_1;               // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
			int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_F60[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x90(0x18)(None)
			class FString                                CallFunc_Conv_TextToString_ReturnValue;            // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
		};

		// 0x8 (0x8 - 0x0)
		// Function m2data.m2data_C.getPlayerCoin
		struct UM2data_C_GetPlayerCoin_Params
		{
		public:
			int32                                        PlayerYang;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x8 (0x8 - 0x0)
		// Function m2data.m2data_C.getPlayerYang
		struct UM2data_C_GetPlayerYang_Params
		{
		public:
			int32                                        PlayerYang;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Conv_StringToInt_ReturnValue;             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0xD9 (0xD9 - 0x0)
		// Function m2data.m2data_C.getEfsunName
		struct UM2data_C_GetEfsunName_Params
		{
		public:
			class FString                                Type;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			int32                                        Value;                                             // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_F6C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                Text;                                              // 0x18(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                Textme;                                            // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
			class FString                                Typem;                                             // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Replace_ReturnValue;                      // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Replace_ReturnValue_1;                    // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_gtext_ReturnValue;                        // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
			int32                                        CallFunc_Len_ReturnValue;                          // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                CallFunc_GetSubstring_ReturnValue;                 // 0xA0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F6E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_gtext_ReturnValue_1;                      // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x158 (0x158 - 0x0)
		// Function m2data.m2data_C.dateTextKalanSure
		struct UM2data_C_DateTextKalanSure_Params
		{
		public:
			struct FTimespan                             Tim;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
			class FString                                Outdate;                                           // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                Date;                                              // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakTimespan_Days;                       // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakTimespan_Hours;                      // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakTimespan_Minutes;                    // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakTimespan_Seconds;                    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_BreakTimespan_Milliseconds;               // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_F80[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F82[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F83[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Conv_IntToString_ReturnValue_2;           // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F84[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_gtext_ReturnValue;                        // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_gtext_ReturnValue_1;                      // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0xA8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_gtext_ReturnValue_2;                      // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x108(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_gtext_ReturnValue_3;                      // 0x118(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x128(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x138(0x10)(ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Concat_StrStr_ReturnValue_8;              // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash)
		};

		// 0x3E1 (0x3E1 - 0x0)
		// Function m2data.m2data_C.getItem
		struct UM2data_C_GetItem_Params
		{
		public:
			int32                                        ID;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_F92[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FIitem                                Item;                                              // 0x8(0x148)(Parm, OutParm)
			struct FIitem                                K2Node_MakeStruct_iitem;                           // 0x150(0x148)(None)
			struct FIitem                                CallFunc_getItem_ob;                               // 0x298(0x148)(None)
			bool                                         CallFunc_getItem_found;                            // 0x3E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x28 (0x28 - 0x0)
		// Function m2data.m2data_C.getDes
		struct UM2data_C_GetDes_Params
		{
		public:
			int32                                        ItemId;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_F94[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                ItemDes;                                           // 0x8(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_getItemDes_ob;                            // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
		};

		// 0x41 (0x41 - 0x0)
		// Function m2data.m2data_C.getQuickSlot
		struct UM2data_C_GetQuickSlot_Params
		{
		public:
			int32                                        ID;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_F98[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FQuickSlot                            Q;                                                 // 0x8(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
			int32                                        Temp_int_Array_Index_Variable;                     // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_F9A[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FQuickSlot                            CallFunc_Array_Get_Item;                           // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_F9D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x39 (0x39 - 0x0)
		// Function m2data.m2data_C.getSlot
		struct UM2data_C_GetSlot_Params
		{
		public:
			int32                                        ID;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_FA9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* SlotOut;                                           // 0x8(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         Findo;                                             // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
			bool                                         Find;                                              // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_FAE[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<struct FSlot>                                 CallFunc_Map_Find_Value;                           // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
			bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_FB1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class USlot_C* K2Node_DynamicCast_AsSlot;                         // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x21D (0x21D - 0x0)
		// Function m2data.m2data_C.getClientSkill
		struct UM2data_C_GetClientSkill_Params
		{
		public:
			int32                                        ID;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_FB8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FSkill                                Skill;                                             // 0x8(0xA8)(Parm, OutParm)
			TArray<class UTexture2D*>                    K2Node_MakeArray_Array;                            // 0xB0(0x10)(ReferenceParm)
			struct FSkill                                CallFunc_Map_Find_Value;                           // 0xC0(0xA8)(None)
			bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_FB9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			struct FSkill                                K2Node_MakeStruct_skill;                           // 0x170(0xA8)(None)
			int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x21C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x41 (0x41 - 0x0)
		// Function m2data.m2data_C.openMesajBox
		struct UM2data_C_OpenMesajBox_Params
		{
		public:
			struct FDmData                               Ata;                                               // 0x0(0x40)(BlueprintVisible, BlueprintReadOnly, Parm)
			bool                                         UsteGetir;                                         // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x149 (0x149 - 0x0)
		// Function m2data.m2data_C.getCharData
		struct UM2data_C_GetCharData_Params
		{
		public:
			struct FCharData                             CharData;                                          // 0x0(0x148)(Parm, OutParm)
			bool                                         CallFunc_IsValid_ReturnValue;                      // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0xA (0xA - 0x0)
		// Function m2data.m2data_C.toggleObject
		struct UM2data_C_ToggleObject_Params
		{
		public:
			class UUserWidget* Obj;                                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			enum class ESlateVisibility                  CallFunc_GetVisibility_ReturnValue;                // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x48 (0x48 - 0x0)
		// Function m2data.m2data_C.sendPacket
		struct UM2data_C_SendPacket_Params
		{
		public:
			int32                                        PId;                                               // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_FCF[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<int32>                                Ints;                                              // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
			TArray<class FString>                        Strings;                                           // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
			TArray<class FString>                        S;                                                 // 0x28(0x10)(Edit, BlueprintVisible)
			TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x38(0x10)(ReferenceParm)
		};

		// 0x50 (0x50 - 0x0)
		// Function m2data.m2data_C.playSound
		struct UM2data_C_PlaySound_Params
		{
		public:
			class FString                                SoundName;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			float                                        Volume;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_FD7[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UM2data_C* CallFunc_game_game;                                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class UM2data_C* CallFunc_game_game_1;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_Conv_IntToFloat_ReturnValue;              // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x2C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_Multiply_FloatFloat_ReturnValue;          // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_FD8[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			float                                        CallFunc_Divide_FloatFloat_ReturnValue;            // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_Conv_IntToFloat_ReturnValue_1;            // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_Multiply_FloatFloat_ReturnValue_1;        // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			float                                        CallFunc_Divide_FloatFloat_ReturnValue_1;          // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x49 (0x49 - 0x0)
		// Function m2data.m2data_C.gameString
		struct UM2data_C_GameString_Params
		{
		public:
			class FString                                Name;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                Text;                                              // 0x10(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
			class FString                                CallFunc_Map_Find_Value;                           // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
			uint8                                        Pad_FE2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class FString                                CallFunc_Map_Find_Value_1;                         // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};

		// 0x14 (0x14 - 0x0)
		// Function m2data.m2data_C.askSell
		struct UM2data_C_AskSell_Params
		{
		public:
			class FString                                AskText;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
			int32                                        Slotid;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		};

		// 0x10 (0x10 - 0x0)
		// Function m2data.m2data_C.askWebsite
		struct UM2data_C_AskWebsite_Params
		{
		public:
			class FString                                URL;                                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
		};

		// 0x89 (0x89 - 0x0)
		// Function m2data.m2data_C.ExecuteUbergraph_m2data
		struct UM2data_C_ExecuteUbergraph_m2data_Params
		{
		public:
			int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_FEB[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			class UMsgbox_C* CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x10(0x10)(ZeroConstructor, NoDestructor)
			class UMsgbox_C* CallFunc_Create_ReturnValue_1;                     // 0x20(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0x10)(ZeroConstructor, NoDestructor)
			class FString                                K2Node_CustomEvent_askText;                        // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
			int32                                        K2Node_CustomEvent_slotid;                         // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			uint8                                        Pad_FEE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
			TArray<int32>                                K2Node_MakeArray_Array;                            // 0x50(0x10)(ReferenceParm)
			TArray<class FString>                        K2Node_MakeArray_Array_1;                          // 0x60(0x10)(ReferenceParm)
			class UM2data_C* CallFunc_game_game;                                // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
			class FString                                K2Node_CustomEvent_url;                            // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
			bool                                         CallFunc_Contains_ReturnValue;                     // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
		};
	}
}