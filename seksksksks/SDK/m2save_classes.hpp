#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0xB0 - 0x30)
// BlueprintGeneratedClass m2save.m2save_C
class UM2save_C : public USaveGame
{
public:
	struct FGameSettings                         Settings;                                          // 0x30(0x60)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        MobileCameraDis;                                   // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MobileCamSpeed;                                    // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                Loc;                                               // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         FirstCharSelectLoaded;                             // 0xA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_D88[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SelectedServerIndex;                               // 0xAC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UM2save_C* GetDefaultObj();

	void Save(bool CallFunc_SaveGameToSlot_ReturnValue);
};

}


