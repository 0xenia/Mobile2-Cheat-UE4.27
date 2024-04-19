#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1BC (0x42C - 0x270)
// WidgetBlueprintGeneratedClass tip.tip_C
class UTip_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            T0;                                                // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_view_C*                             W_view;                                            // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FIitem                                Item;                                              // 0x288(0x148)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FString                                Text;                                              // 0x3D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSlateColor                           ColorText;                                         // 0x3E0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FFontOutlineSettings                  OutlineText;                                       // 0x408(0x20)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        Size;                                              // 0x428(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTip_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_tip(int32 EntryPoint, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
};

}


