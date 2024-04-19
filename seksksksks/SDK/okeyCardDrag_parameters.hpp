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

// 0x70 (0x70 - 0x0)
// Function okeyCardDrag.okeyCardDrag_C.Drop
struct UOkeyCardDrag_C_Drop_Params
{
public:
	struct FPointerEvent                         PointerEvent;                                      // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x70 (0x70 - 0x0)
// Function okeyCardDrag.okeyCardDrag_C.DragCancelled
struct UOkeyCardDrag_C_DragCancelled_Params
{
public:
	struct FPointerEvent                         PointerEvent;                                      // 0x0(0x70)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x118 (0x118 - 0x0)
// Function okeyCardDrag.okeyCardDrag_C.ExecuteUbergraph_okeyCardDrag
struct UOkeyCardDrag_C_ExecuteUbergraph_okeyCardDrag_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1475[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerEvent                         K2Node_Event_PointerEvent_1;                       // 0x8(0x70)(ConstParm)
	struct FPointerEvent                         K2Node_Event_PointerEvent;                         // 0x78(0x70)(ConstParm)
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0xE8(0x10)(ReferenceParm)
	class UOkeyCard_C*                           K2Node_DynamicCast_AsOkey_Card;                    // 0xF8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1478[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                K2Node_MakeArray_Array_1;                          // 0x108(0x10)(ReferenceParm)
};

}
}


