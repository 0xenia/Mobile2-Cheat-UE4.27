#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0xA8 - 0x90)
// BlueprintGeneratedClass drag2.drag2_C
class UDrag2_C : public UDragDropOperation
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x90(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UM2data_C*                             Game;                                              // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UUI_C*                                 Widgettodrag;                                      // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UDrag2_C* GetDefaultObj();

	void DragCancelled(struct FPointerEvent& PointerEvent);
	void Drop(struct FPointerEvent& PointerEvent);
	void ExecuteUbergraph_drag2(int32 EntryPoint, const struct FPointerEvent& K2Node_Event_PointerEvent_1, const struct FPointerEvent& K2Node_Event_PointerEvent);
};

}


