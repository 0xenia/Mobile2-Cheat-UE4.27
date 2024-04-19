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

// 0x178 (0x178 - 0x0)
// Function character.character_C.Get_buyugucuT_Text_0
struct UCharacter_C_Get_buyugucuT_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	struct FCharData                             CallFunc_getChar_char;                             // 0x18(0x148)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x160(0x18)(None)
};

// 0x178 (0x178 - 0x0)
// Function character.character_C.Get_buyusavT_Text_0
struct UCharacter_C_Get_buyusavT_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	struct FCharData                             CallFunc_getChar_char;                             // 0x18(0x148)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x160(0x18)(None)
};

// 0x400 (0x400 - 0x0)
// Function character.character_C.texter
struct UCharacter_C_Texter_Params
{
public:
	class UM2data_C*                             CallFunc_game_game;                                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIitem                                CallFunc_getItem_item;                             // 0x8(0x148)(None)
	class FString                                CallFunc_Gtext_text;                               // 0x150(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x160(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x178(0x18)(None)
	class FString                                CallFunc_Gtext_text_1;                             // 0x190(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x1A0(0x18)(None)
	class FString                                CallFunc_Gtext_text_2;                             // 0x1B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Replace_ReturnValue;                      // 0x1C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_3;          // 0x1D8(0x18)(None)
	class FString                                CallFunc_Gtext_text_3;                             // 0x1F0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_4;          // 0x200(0x18)(None)
	class FString                                CallFunc_Gtext_text_4;                             // 0x218(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_5;          // 0x228(0x18)(None)
	class FString                                CallFunc_Gtext_text_5;                             // 0x240(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_6;          // 0x250(0x18)(None)
	class FString                                CallFunc_Gtext_text_6;                             // 0x268(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_7;          // 0x278(0x18)(None)
	class FString                                CallFunc_Gtext_text_7;                             // 0x290(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_8;          // 0x2A0(0x18)(None)
	TArray<int32>                                K2Node_MakeArray_Array;                            // 0x2B8(0x10)(ReferenceParm)
	class FString                                CallFunc_Gtext_text_8;                             // 0x2C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Gtext_text_9;                             // 0x2D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Gtext_text_10;                            // 0x2E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        K2Node_MakeArray_Array_1;                          // 0x2F8(0x10)(ReferenceParm)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_9;          // 0x308(0x18)(None)
	class FString                                CallFunc_formatText_ReturnValue;                   // 0x320(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_10;         // 0x330(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_11;         // 0x348(0x18)(None)
	class FString                                CallFunc_Gtext_text_11;                            // 0x360(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Gtext_text_12;                            // 0x370(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_12;         // 0x380(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_13;         // 0x398(0x18)(None)
	class FString                                CallFunc_Gtext_text_13;                            // 0x3B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Gtext_text_14;                            // 0x3C0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_14;         // 0x3D0(0x18)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_15;         // 0x3E8(0x18)(None)
};

// 0x90 (0x90 - 0x0)
// Function character.character_C.GetToolTipWidget_0
struct UCharacter_C_GetToolTipWidget_0_Params
{
public:
	class UWidget*                               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTip_C*                                CallFunc_Create_ReturnValue;                       // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_gtext_ReturnValue;                        // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_getRankText_rankText;                     // 0x40(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x50(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x391 (0x391 - 0x0)
// Function character.character_C.check
struct UCharacter_C_Check_Params
{
public:
	class UM2data_C*                             CallFunc_game_game;                                // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_130B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UM2data_C*                             CallFunc_game_game_1;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FCharData                             CallFunc_char_NewParam;                            // 0x18(0x148)(None)
	class FString                                CallFunc_gtext_ReturnValue;                        // 0x160(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x170(0x18)(None)
	struct FSlateBrush                           CallFunc_getCharImage_NewParam1;                   // 0x188(0x88)(None)
	struct FCharData                             CallFunc_getChar_char;                             // 0x210(0x148)(None)
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x358(0x18)(None)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_130D[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_2;          // 0x378(0x18)(None)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x23 (0x23 - 0x0)
// Function character.character_C.updateSkillStat
struct UCharacter_C_UpdateSkillStat_Params
{
public:
	bool                                         CheckNow;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_BoolBool_ReturnValue;          // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1311[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x8(0x18)(None)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2A (0x2A - 0x0)
// Function character.character_C.showSkillArti
struct UCharacter_C_ShowSkillArti_Params
{
public:
	bool                                         Show;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1316[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1317[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1318[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USlot_C*                               CallFunc_getSkillSlot_skill;                       // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_NotEqual_IntInt_ReturnValue;              // 0x22(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1319[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function character.character_C.setCanStatAdd
struct UCharacter_C_SetCanStatAdd_Params
{
public:
	bool                                         Can;                                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x39 (0x39 - 0x0)
// Function character.character_C.sendStatUpdate
struct UCharacter_C_SendStatUpdate_Params
{
public:
	int32                                        ID;                                                // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_131A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x8(0x10)(ReferenceParm)
	TArray<int32>                                K2Node_MakeArray_Array_1;                          // 0x18(0x10)(ReferenceParm)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UM2data_C*                             K2Node_DynamicCast_AsM_2data;                      // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x178 (0x178 - 0x0)
// Function character.character_C.Get_beklemesureT_Text_0
struct UCharacter_C_Get_beklemesureT_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	struct FCharData                             CallFunc_getChar_char;                             // 0x18(0x148)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x160(0x18)(None)
};

// 0x178 (0x178 - 0x0)
// Function character.character_C.GetText_0
struct UCharacter_C_GetText_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	struct FCharData                             CallFunc_getChar_char;                             // 0x18(0x148)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x160(0x18)(None)
};

// 0x178 (0x178 - 0x0)
// Function character.character_C.Get_savunmaT_Text_0
struct UCharacter_C_Get_savunmaT_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	struct FCharData                             CallFunc_getChar_char;                             // 0x18(0x148)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x160(0x18)(None)
};

// 0x178 (0x178 - 0x0)
// Function character.character_C.Get_savunmakozT_Text_0
struct UCharacter_C_Get_savunmakozT_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	struct FCharData                             CallFunc_getChar_char;                             // 0x18(0x148)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x160(0x18)(None)
};

// 0x178 (0x178 - 0x0)
// Function character.character_C.Get_saldirikozT_Text_0
struct UCharacter_C_Get_saldirikozT_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	struct FCharData                             CallFunc_getChar_char;                             // 0x18(0x148)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x160(0x18)(None)
};

// 0x178 (0x178 - 0x0)
// Function character.character_C.Get_manakozT_Text_0
struct UCharacter_C_Get_manakozT_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	struct FCharData                             CallFunc_getChar_char;                             // 0x18(0x148)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x160(0x18)(None)
};

// 0x178 (0x178 - 0x0)
// Function character.character_C.Get_cankozT_Text_0
struct UCharacter_C_Get_cankozT_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	struct FCharData                             CallFunc_getChar_char;                             // 0x18(0x148)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x160(0x18)(None)
};

// 0x178 (0x178 - 0x0)
// Function character.character_C.Get_saldirihizT_Text_0
struct UCharacter_C_Get_saldirihizT_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	struct FCharData                             CallFunc_getChar_char;                             // 0x18(0x148)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x160(0x18)(None)
};

// 0x178 (0x178 - 0x0)
// Function character.character_C.Get_harakethizT_Text_0
struct UCharacter_C_Get_harakethizT_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	struct FCharData                             CallFunc_getChar_char;                             // 0x18(0x148)(None)
	class FText                                  CallFunc_Conv_FloatToText_ReturnValue;             // 0x160(0x18)(None)
};

// 0x178 (0x178 - 0x0)
// Function character.character_C.Get_saldiriT_Text_0
struct UCharacter_C_Get_saldiriT_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	struct FCharData                             CallFunc_getChar_char;                             // 0x18(0x148)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x160(0x18)(None)
};

// 0x178 (0x178 - 0x0)
// Function character.character_C.Get_manaT_Text_0
struct UCharacter_C_Get_manaT_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	struct FCharData                             CallFunc_getChar_char;                             // 0x18(0x148)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x160(0x18)(None)
};

// 0x178 (0x178 - 0x0)
// Function character.character_C.Get_canT_Text_0
struct UCharacter_C_Get_canT_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	struct FCharData                             CallFunc_getChar_char;                             // 0x18(0x148)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x160(0x18)(None)
};

// 0x178 (0x178 - 0x0)
// Function character.character_C.Get_needexpT_Text_0
struct UCharacter_C_Get_needexpT_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	struct FCharData                             CallFunc_getChar_char;                             // 0x18(0x148)(None)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue;             // 0x160(0x18)(None)
};

// 0x178 (0x178 - 0x0)
// Function character.character_C.Get_expT_Text_0
struct UCharacter_C_Get_expT_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	struct FCharData                             CallFunc_getChar_char;                             // 0x18(0x148)(None)
	class FText                                  CallFunc_Conv_Int64ToText_ReturnValue;             // 0x160(0x18)(None)
};

// 0x178 (0x178 - 0x0)
// Function character.character_C.Get_seviyeT_Text_0
struct UCharacter_C_Get_seviyeT_Text_0_Params
{
public:
	class FText                                  ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ReturnParm)
	struct FCharData                             CallFunc_getChar_char;                             // 0x18(0x148)(None)
	class FText                                  CallFunc_Conv_IntToText_ReturnValue;               // 0x160(0x18)(None)
};

// 0x159 (0x159 - 0x0)
// Function character.character_C.getChar
struct UCharacter_C_GetChar_Params
{
public:
	struct FCharData                             Char;                                              // 0x0(0x148)(Parm, OutParm)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UM2data_C*                             K2Node_DynamicCast_AsM_2data;                      // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1 (0x1 - 0x0)
// Function character.character_C.PreConstruct
struct UCharacter_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x51 (0x51 - 0x0)
// Function character.character_C.ExecuteUbergraph_character
struct UCharacter_C_ExecuteUbergraph_character_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1338[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x8(0x8)(NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UM2data_C*                             K2Node_DynamicCast_AsM_2data;                      // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_133B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_1;            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UM2data_C*                             K2Node_DynamicCast_AsM_2data_1;                    // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_133C[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue_2;            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UM2data_C*                             K2Node_DynamicCast_AsM_2data_2;                    // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


