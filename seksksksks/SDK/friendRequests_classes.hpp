#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x288 - 0x270)
// WidgetBlueprintGeneratedClass friendRequests.friendRequests_C
class UFriendRequests_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          Data;                                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_window_C*                           W_window;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFriendRequests_C* GetDefaultObj();

	void BndEvt__friendRequests_w_window_K2Node_ComponentBoundEvent_0__close__DelegateSignature();
	void ExecuteUbergraph_friendRequests(int32 EntryPoint);
};

}


