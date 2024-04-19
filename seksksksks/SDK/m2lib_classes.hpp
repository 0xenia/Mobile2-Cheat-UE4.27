#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// BlueprintGeneratedClass m2lib.m2lib_C
class UM2lib_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UM2lib_C* GetDefaultObj();

	void SetFontSize(class UTextBlock* NewParam, int32 NewSize, class UObject* __WorldContext, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void IsTr(class UObject* __WorldContext, bool* Tr_, const class FString& CallFunc_lang_lang, bool CallFunc_Contains_ReturnValue);
	void Lang(class UObject* __WorldContext, class FString* Lang, class UM2save_C* CallFunc_m2save_save);
	void RemoveFirstIntFromPacket(const struct FPacket& Packet, class UObject* __WorldContext, struct FPacket* Pack, const TArray<int32>& Temp, const struct FPacket& K2Node_MakeStruct_packet);
	void Gtext(const class FString& Name, class UObject* __WorldContext, class FString* Text, const class FString& CallFunc_gtext_ReturnValue);
	void GtextParam(const class FString& Name, TArray<class FString>& Strs, TArray<int32>& Ints, class UObject* __WorldContext, class FString* Text, const class FString& CallFunc_gtext_ReturnValue, const class FString& CallFunc_formatText_ReturnValue);
	void ToNpc(class AActor* NewParam, class UObject* __WorldContext, class ANpc** Npc, class ANpc* K2Node_DynamicCast_AsNpc, bool K2Node_DynamicCast_bSuccess);
	void Char(class UObject* __WorldContext, struct FCharData* NewParam, class UM2data_C* CallFunc_game_game);
	void PControl(class UObject* __WorldContext, class APControl_C** PC, class UM2data_C* CallFunc_game_game);
	void Set_Wheather(const class FString& WName, bool UpdateData, bool IsReset, class UObject* __WorldContext, class UM2data_C* CallFunc_game_game, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, class APControl_C* K2Node_DynamicCast_AsP_Control, bool K2Node_DynamicCast_bSuccess, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue_1, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue_2, class APControl_C* K2Node_DynamicCast_AsP_Control_1, bool K2Node_DynamicCast_bSuccess_1, class APControl_C* K2Node_DynamicCast_AsP_Control_2, bool K2Node_DynamicCast_bSuccess_2, class UM2data_C* CallFunc_game_game_1, class UParticleSystemComponent* CallFunc_AddComponentByClass_ReturnValue, class APControl_C* CallFunc_pControl_pc, int32 CallFunc_Array_Add_ReturnValue, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue_3, class APControl_C* K2Node_DynamicCast_AsP_Control_3, bool K2Node_DynamicCast_bSuccess_3, class UM2save_C* CallFunc_m2save_save, bool CallFunc_IsValid_ReturnValue, class UM2data_C* CallFunc_game_game_2, class UM2data_C* CallFunc_game_game_3, bool K2Node_SwitchString_CmpSuccess, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue_4, class APControl_C* K2Node_DynamicCast_AsP_Control_4, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_1);
	void Msgbox(const class FString& Text, class UObject* __WorldContext, class UMsgbox_C* CallFunc_Create_ReturnValue);
	void CheckArabic(class UTextBlock* Text, class UObject* __WorldContext, bool CallFunc_isArabic_is, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void IsArabic(class UObject* __WorldContext, bool* Is, class UM2data_C* CallFunc_game_game, bool CallFunc_EqualEqual_StrStr_ReturnValue);
	void CanvasAdd(class UUserWidget* Widget, class UObject* __WorldContext, class UM2data_C* CallFunc_game_game);
	void IsMobile(class UObject* __WorldContext, bool* IsMobile, class UM2data_C* CallFunc_game_game, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void M2save(class UObject* __WorldContext, class UM2save_C** Save, class UM2data_C* CallFunc_game_game, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess);
	void Game(class UObject* __WorldContext, class UM2data_C** Game, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess);
};

}


