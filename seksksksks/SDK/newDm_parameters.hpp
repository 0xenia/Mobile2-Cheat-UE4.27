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

// 0x19 (0x19 - 0x0)
// Function newDm.newDm_C.BndEvt__newDm_c_TextBox_K2Node_ComponentBoundEvent_2_onTextCommit__DelegateSignature
struct UNewDm_C_BndEvt__newDm_c_TextBox_K2Node_ComponentBoundEvent_2_onTextCommit__DelegateSignature_Params
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	enum class ETextCommit                       CommitMethod;                                      // 0x18(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6A (0x6A - 0x0)
// Function newDm.newDm_C.ExecuteUbergraph_newDm
struct UNewDm_C_ExecuteUbergraph_newDm_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_116B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Gtext_text;                               // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UM2data_C*                             CallFunc_game_game;                                // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                K2Node_MakeArray_Array;                            // 0x20(0x10)(ReferenceParm)
	class FString                                CallFunc_text_text;                                // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        K2Node_MakeArray_Array_1;                          // 0x40(0x10)(ReferenceParm)
	class FText                                  K2Node_ComponentBoundEvent_Text;                   // 0x50(0x18)(None)
	enum class ETextCommit                       K2Node_ComponentBoundEvent_CommitMethod;           // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


