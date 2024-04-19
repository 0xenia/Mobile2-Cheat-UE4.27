#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA8 - 0x90)
// BlueprintGeneratedClass okeyCardDrag.okeyCardDrag_C
class UOkeyCardDrag_C : public UDragDropOperation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x90(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UM2data_C*                             Game;                                              // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UOkeyCard_C*                           Card;                                              // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UOkeyCardDrag_C* GetDefaultObj();

	void Drop(struct FPointerEvent& PointerEvent);
	void DragCancelled(struct FPointerEvent& PointerEvent);
	void ExecuteUbergraph_okeyCardDrag(int32 EntryPoint, const struct FPointerEvent& K2Node_Event_PointerEvent_1, const struct FPointerEvent& K2Node_Event_PointerEvent, TArray<class FString>& K2Node_MakeArray_Array, class UOkeyCard_C* K2Node_DynamicCast_AsOkey_Card, bool K2Node_DynamicCast_bSuccess, TArray<int32>& K2Node_MakeArray_Array_1);
};

}


