#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x454 (0x6C4 - 0x270)
// WidgetBlueprintGeneratedClass slot.slot_C
class USlot_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Arti;                                              // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                bg;                                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CanHere;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Content;                                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CText;                                             // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFocus_C*                              Focus;                                             // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageSkill;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                RedLine;                                           // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                SlotObject;                                        // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        Slotid;                                            // 0x2C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1089[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FItem                                 SlotItem;                                          // 0x2C8(0x64)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_108A[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FIitem                                Itemref;                                           // 0x330(0x148)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                Des;                                               // 0x478(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         IsDown;                                            // 0x488(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         IsQuickTarget;                                     // 0x489(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_108B[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QuickTargetId;                                     // 0x48C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USlot_C*                               DownSlot;                                          // 0x490(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SkillId;                                           // 0x498(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        SkillPid;                                          // 0x49C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FSkill                                Skill;                                             // 0x4A0(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         SkillUsed;                                         // 0x548(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_108C[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        QuickId;                                           // 0x54C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class USlot_C*                               QuickTarget;                                       // 0x550(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Time;                                              // 0x558(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsQuickSlotMobile;                                 // 0x55C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsCreate;                                          // 0x55D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsLocal;                                           // 0x55E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_108D[0x1];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        PrivateShopId;                                     // 0x560(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class ESlotType                         Type;                                              // 0x564(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_108E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UM2data_C*                             Game;                                              // 0x568(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HideBg;                                            // 0x570(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsNew;                                             // 0x571(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_108F[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        ShopSlotId;                                        // 0x574(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FItem                                 ItemShow;                                          // 0x578(0x64)(Edit, BlueprintVisible, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1090[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class USlot_C*                               TradeTargetSlot;                                   // 0x5E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TradeId;                                           // 0x5E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         TradeIsLocal;                                      // 0x5EC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1091[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        GroupSlotId;                                       // 0x5F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1092[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UView_C*                               TempView;                                          // 0x5F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSkill                                TransingSkill;                                     // 0x600(0xA8)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDateTime                             LastQuickUse;                                      // 0x6A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	int32                                        ClickCount;                                        // 0x6B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SingleClickUse;                                    // 0x6B4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_1093[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMobileButton_C*                       TargetMobileButton;                                // 0x6B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowRedLine;                                       // 0x6C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsDouble;                                          // 0x6C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         MobileNoBig;                                       // 0x6C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsMobileQuick;                                     // 0x6C3(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class USlot_C* GetDefaultObj();

	void CheckSkillUsed(bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void ResetDoubleClick(bool CallFunc_Greater_IntInt_ReturnValue);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, class UM2data_C* CallFunc_game_game, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 Temp_int_Variable);
	void DragOut();
	void Item_Drag(class AActor* Hito, const class FString& CallFunc_gtext_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, TArray<int32>& K2Node_MakeArray_Array, TArray<class FString>& K2Node_MakeArray_Array_1, TArray<class FString>& K2Node_MakeArray_Array_2, const class FString& CallFunc_gtext_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array_3, class ANpc* K2Node_DynamicCast_AsNpc, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, TArray<int32>& K2Node_MakeArray_Array_4, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool K2Node_SwitchString_CmpSuccess, TArray<int32>& K2Node_MakeArray_Array_5, bool CallFunc_IsValid_ReturnValue);
	void HaveAttu(bool* Res, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool K2Node_SwitchInteger_CmpSuccess);
	void OnDragDetected(const struct FGeometry& MyGeometry, struct FPointerEvent& PointerEvent, class UDragDropOperation** Operation, class UDrag1_C* CallFunc_CreateDragDropOperation_ReturnValue, const struct FVector2D& CallFunc_PointerEvent_GetScreenSpacePosition_ReturnValue, const struct FVector2D& CallFunc_AbsoluteToLocal_ReturnValue, class UItemView_C* CallFunc_Create_ReturnValue, class UM2data_C* CallFunc_game_game, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FDateTime& CallFunc_UtcNow_ReturnValue);
	void GetItemSubType(class FString* Type);
	void GetItemType(class FString* Type);
	void GetItemFlag(const class FString& Flag, bool* IsHave, bool CallFunc_Contains_ReturnValue);
	void VisibleTimer();
	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void DeSelectSlot_0(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void SelectSlot(bool CallFunc_IsValid_ReturnValue, class USlot_C* K2Node_DynamicCast_AsSlot, bool K2Node_DynamicCast_bSuccess);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, bool CallFunc_PointerEvent_IsMouseButtonDown_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FEventReply& CallFunc_DetectDragIfPressed_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
	void CheckFocus();
	void CheckStatus(const struct FIitem& Ref, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_checkAlt_can, bool CallFunc_checkUst_res, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_itemCanUse_isCanUse, const class FString& CallFunc_itemCanUse_message, const class FString& CallFunc_itemCanUse_whoUse, bool CallFunc_equpCanTake_can, bool CallFunc_quickSlotCanTake_res, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, class USlot_C* CallFunc_getSlot_slotOut, bool CallFunc_getSlot_findo, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, bool CallFunc_checkAlt_can_1, bool CallFunc_checkUst_res_1, class USlot_C* CallFunc_getSlot_slotOut_1, bool CallFunc_getSlot_findo_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_4, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_Less_IntInt_ReturnValue_6, bool CallFunc_EqualEqual_BoolBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_Greater_IntInt_ReturnValue_3, bool CallFunc_EqualEqual_BoolBool_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_EqualEqual_BoolBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_8, bool CallFunc_BooleanAND_ReturnValue_9, bool CallFunc_BooleanAND_ReturnValue_10, bool CallFunc_checkUseItem_can, bool CallFunc_checkUseItem_local, bool CallFunc_BooleanAND_ReturnValue_11, bool CallFunc_EqualEqual_IntInt_ReturnValue_5, bool CallFunc_checkStackable_can, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_6);
	void SetStatus(enum class ESlotStatus Status, bool K2Node_SwitchEnum_CmpSuccess);
	void InitShop();
	void InitMobile(const struct FButtonStyle& K2Node_MakeStruct_ButtonStyle, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo);
	void RunSlot(TArray<class FString>& K2Node_MakeArray_Array, bool CallFunc_EqualEqual_IntInt_ReturnValue, TArray<int32>& K2Node_MakeArray_Array_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const class FString& CallFunc_gtext_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<int32>& K2Node_MakeArray_Array_2, TArray<class FString>& K2Node_MakeArray_Array_3, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UM2data_C* CallFunc_game_game, const struct FItem& K2Node_MakeStruct_item, const class FString& CallFunc_gtext_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, TArray<class FString>& K2Node_MakeArray_Array_4, int32 CallFunc_getEmptySlot_emptySlotId, const class FString& CallFunc_Conv_IntToString_ReturnValue, TArray<int32>& K2Node_MakeArray_Array_5, bool CallFunc_NotEqual_IntInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess);
	void Refresh(bool K2Node_SwitchEnum_CmpSuccess);
	void DropItem(const class FString& CallFunc_gtext_ReturnValue, const class FString& CallFunc_gtext_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_Contains_ReturnValue);
	void DeSelectSlot(bool CallFunc_EqualEqual_ByteByte_ReturnValue);
	void InitPrivateShop();
	void QuickUse(bool TargetIsPlayer, const struct FDateTime& CallFunc_Now_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue_1, const struct FTimespan& CallFunc_Subtract_DateTimeDateTime_ReturnValue, float CallFunc_GetTotalMilliseconds_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, class UPlayerAnim_C* K2Node_DynamicCast_AsPlayer_Anim, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_useSkill_result, const class FString& CallFunc_useSkill_res, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const class FString& CallFunc_gtext_ReturnValue, float CallFunc_Vector_Distance_ReturnValue, bool CallFunc_selectNeartarget_selected, const class FString& CallFunc_gtext_ReturnValue_1, const class FString& CallFunc_gtext_ReturnValue_2, const class FString& CallFunc_canUseSkill_res, bool CallFunc_canUseSkill_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class ANpc* K2Node_DynamicCast_AsNpc, bool K2Node_DynamicCast_bSuccess_1, const struct FSkill& CallFunc_getClientSkill_Skill, class ANpc* CallFunc_toNpc_npc, bool CallFunc_canAttack_ReturnValue, bool CallFunc_EqualEqual_BoolBool_ReturnValue_1, bool CallFunc_NotEqual_StrStr_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_3, const struct FCharData& CallFunc_getCharData_chardata, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess);
	void SetQuickSkill(const struct FSkill& S, class UM2data_C* CallFunc_game_game, const struct FDateTime& CallFunc_getServerTime_ReturnValue, const struct FSkill& CallFunc_getClientSkill_Skill, const struct FTimespan& CallFunc_dateDiff_diff, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_GetTotalSeconds_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class UTexture2D* CallFunc_Array_Get_Item, class UTexture2D* CallFunc_Array_Get_Item_1, class UTexture2D* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue);
	void UsedSkill(float Time, bool SelfOnly, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FQuickSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform);
	void SetCountText(const class FString& T, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetQuickTarget(class USlot_C* Tt, class UM2data_C* CallFunc_game_game, bool CallFunc_quickSlotCanTake_res, const class FString& CallFunc_getDes_itemDes);
	void ClearOtherPids(class USlot_C* CallFunc_getSkillSlot_skill, class USlot_C* CallFunc_getSkillSlot_skill_1, class USlot_C* CallFunc_getSkillSlot_skill_2, class USlot_C* CallFunc_getSkillSlot_skill_3, bool CallFunc_EqualEqual_IntInt_ReturnValue, class USlot_C* CallFunc_getSkillSlot_skill_4, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, class USlot_C* CallFunc_getSkillSlot_skill_5);
	void SetSkill(const struct FSkill& Skill, int32 FontSize, int32 ImgId, class UTexture2D* CallFunc_Array_Get_Item, class UTexture2D* CallFunc_Array_Get_Item_1, class UTexture2D* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const class FString& CallFunc_MakeLiteralString_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, const class FString& CallFunc_MakeLiteralString_ReturnValue_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const class FString& CallFunc_MakeLiteralString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_2, const struct FFontOutlineSettings& K2Node_MakeStruct_FontOutlineSettings_3, bool CallFunc_isMobile_isMobile, const struct FMargin& K2Node_MakeStruct_Margin, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_3);
	void SetEmptySkill(bool IsEmpty);
	void ToggleSlot(bool IsVisible);
	void SetItemShow(const struct FItem& ShowItem);
	void InitItemShow(bool bgVisible, bool RedLine);
	void SetView(bool Init, class UView_C* CallFunc_Create_ReturnValue, class UView_C* CallFunc_Create_ReturnValue_1, class UView_C* CallFunc_Create_ReturnValue_2, bool CallFunc_isMobile_isMobile, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void ShowTempView(bool IsNew, class UView_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector2D& CallFunc_GetMousePositionOnViewport_ReturnValue);
	void Set_Item2(const struct FIitem& Item, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_getDes_itemDes, const struct FIitem& CallFunc_getItem_item, const class FString& CallFunc_Replace_ReturnValue);
	void Set_Item(const struct FItem& Item, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_getDes_itemDes, const class FString& CallFunc_Replace_ReturnValue, const struct FIitem& CallFunc_getItem_item, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void InitQuickSlot(int32 Temp_int_Array_Index_Variable, const struct FQuickSlot& K2Node_MakeStruct_quickSlot, const struct FQuickSlot& K2Node_MakeStruct_quickSlot_1, const struct FQuickSlot& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void SetBg();
	void Init(enum class ESlotType Type, bool K2Node_SwitchEnum_CmpSuccess);
	void Init_Skill();
	void ResetSlot(int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class USlot_C* CallFunc_getSlot_slotOut, bool CallFunc_getSlot_findo, bool K2Node_SwitchEnum_CmpSuccess, const struct FCharData& CallFunc_getCharData_chardata, const struct FInvItem& K2Node_MakeStruct_invItem, bool K2Node_SwitchEnum_CmpSuccess_1, class UM2data_C* CallFunc_game_game, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void InitInvItem(bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, class USlot_C* CallFunc_getSlot_slotOut, bool CallFunc_getSlot_findo);
	void UpdateFocus(bool CallFunc_EqualEqual_BoolBool_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void SetFocuss(enum class EFocusType Type);
	void CheckUpSlot(int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class USlot_C* CallFunc_getSlot_slotOut, bool CallFunc_getSlot_findo, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void SetDown(bool IsDown);
	void AddToInvData(bool Findo, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, const struct FSlot& K2Node_MakeStruct_slot);
	void UpdateItemCount(int32 Count, const struct FQuickSlot& CallFunc_getQuickSlot_q, bool CallFunc_LessEqual_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FInvItem& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void UpdateCountText(class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
	void SetBrush(bool CallFunc_EqualEqual_BoolBool_ReturnValue, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform, bool CallFunc_BooleanAND_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform_1, const struct FWidgetTransform& K2Node_MakeStruct_WidgetTransform_2);
	void Tickk_Event_0();
	void CANCEL_Event_0();
	void OK_Event_0();
	void buyPriv();
	void ShowBuyMsgbox();
	void AskDroper();
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void OnDragEnter(const struct FGeometry& MyGeometry, const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnDragLeave(const struct FPointerEvent& PointerEvent, class UDragDropOperation* Operation);
	void OnMouseEnter(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent);
	void OnMouseLeave(struct FPointerEvent& MouseEvent);
	void BndEvt__arti_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_slot(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UMsgbox_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UMsgbox_C* CallFunc_Create_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, const class FString& CallFunc_gtext_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UM2data_C* CallFunc_game_game, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class UM2data_C* K2Node_DynamicCast_AsM_2data_1, bool K2Node_DynamicCast_bSuccess_1, class UM2data_C* CallFunc_game_game_1, bool CallFunc_canChangeSlot_can, TArray<class FString>& K2Node_MakeArray_Array, TArray<int32>& K2Node_MakeArray_Array_1, const class FString& CallFunc_Conv_IntToString_ReturnValue, const struct FIitem& CallFunc_getItem_ob, bool CallFunc_getItem_found, const class FString& CallFunc_dotNumberS_ReturnValue, bool K2Node_Event_IsDesignTime, TArray<class FString>& K2Node_MakeArray_Array_2, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class UM2data_C* K2Node_DynamicCast_AsM_2data_2, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_SwitchEnum_CmpSuccess, const struct FGeometry& K2Node_Event_MyGeometry_1, const struct FPointerEvent& K2Node_Event_PointerEvent_1, class UDragDropOperation* K2Node_Event_Operation_1, bool CallFunc_BooleanAND_ReturnValue, const struct FPointerEvent& K2Node_Event_PointerEvent, class UDragDropOperation* K2Node_Event_Operation, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, class USlot_C* CallFunc_getSlot_slotOut, bool CallFunc_getSlot_findo, const struct FGeometry& K2Node_Event_MyGeometry, const struct FPointerEvent& K2Node_Event_MouseEvent_1, const struct FPointerEvent& K2Node_Event_MouseEvent, bool K2Node_SwitchEnum_CmpSuccess_1, TArray<class FString>& K2Node_MakeArray_Array_3, TArray<int32>& K2Node_MakeArray_Array_4, TArray<int32>& K2Node_MakeArray_Array_5, const class FString& CallFunc_gtext_ReturnValue_1, const class FString& CallFunc_formatText_ReturnValue);
};

}


