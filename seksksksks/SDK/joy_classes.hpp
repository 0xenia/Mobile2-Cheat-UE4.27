#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x328 - 0x270)
// WidgetBlueprintGeneratedClass joy.joy_C
class UJoy_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_45;                                          // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Joy;                                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM2data_C*                             Game;                                              // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             DownPos;                                           // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MoveArea;                                          // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             LocalPos;                                          // 0x29C(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        X;                                                 // 0x2A4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Y;                                                 // 0x2A8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1312[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMobileUI_C*                           Main;                                              // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Tid;                                               // 0x2B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1313[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, struct FTouchData>               Datas;                                             // 0x2C0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         Clear;                                             // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DragOffsetSet;                                     // 0x311(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1314[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NeedDragOffset;                                    // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             JoyPos;                                            // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Joying;                                            // 0x320(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1315[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        JoyTouch;                                          // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UJoy_C* GetDefaultObj();

	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, class UM2data_C* CallFunc_game_game, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FEventReply& CallFunc_Unhandled_ReturnValue_1, class UM2data_C* CallFunc_game_game_1, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, class UM2data_C* CallFunc_game_game_2, float CallFunc_GetInputTouchState_LocationX, float CallFunc_GetInputTouchState_LocationY, bool CallFunc_GetInputTouchState_bIsCurrentlyPressed, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void SetStartPos(int32 Temp_int_Variable, enum class ETouchIndex Temp_byte_Variable, enum class ETouchIndex Temp_byte_Variable_1, enum class ETouchIndex Temp_byte_Variable_2, enum class ETouchIndex Temp_byte_Variable_3, enum class ETouchIndex Temp_byte_Variable_4, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, enum class ETouchIndex K2Node_Select_Default, float CallFunc_GetInputTouchState_LocationX, float CallFunc_GetInputTouchState_LocationY, bool CallFunc_GetInputTouchState_bIsCurrentlyPressed, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void StopJoy(const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void Mover(float Xm, float Ym, int32 Tid, float Yr, float Xr, const struct FVector2D& CallFunc_GetViewportSize_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, bool CallFunc_IsValid_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FClamp_ReturnValue_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Normal2D_ReturnValue, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_BreakVector2D_X_3, float CallFunc_BreakVector2D_Y_3, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_3);
	void DetDrag(bool* NewParam, class UJoyDrag_C* CallFunc_CreateDragDropOperation_ReturnValue, const struct FGeometry& CallFunc_GetCachedGeometry_ReturnValue, const struct FVector2D& CallFunc_GetLocalSize_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, const struct FVector2D& CallFunc_LocalToAbsolute_ReturnValue);
	void EndTouch();
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ExecuteUbergraph_joy(int32 EntryPoint, int32 Temp_int_Variable, enum class ETouchIndex Temp_byte_Variable, enum class ETouchIndex Temp_byte_Variable_1, enum class ETouchIndex Temp_byte_Variable_2, enum class ETouchIndex Temp_byte_Variable_3, enum class ETouchIndex Temp_byte_Variable_4, enum class ETouchIndex Temp_byte_Variable_5, enum class ETouchIndex K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, float CallFunc_GetInputTouchState_LocationX, float CallFunc_GetInputTouchState_LocationY, bool CallFunc_GetInputTouchState_bIsCurrentlyPressed, bool CallFunc_EqualEqual_Vector2DVector2D_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess);
};

}


