#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x320 - 0x270)
// WidgetBlueprintGeneratedClass cameraMove.cameraMove_C
class UCameraMove_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_123;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UM2data_C*                             Game;                                              // 0x280(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             DownPos;                                           // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MoveArea;                                          // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Drag;                                              // 0x294(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         DragOffsetSet;                                     // 0x295(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CF6[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NeedDragOffset;                                    // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CF8[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMobileUI_C*                           Main;                                              // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                Tid;                                               // 0x2A8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         Down;                                              // 0x2B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CF9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, struct FTouchData>               Datas;                                             // 0x2C0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	bool                                         Clear;                                             // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CFA[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Toucher;                                           // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             LastDownPose;                                      // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCameraMove_C* GetDefaultObj();

	struct FEventReply OnTouchEnded(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	struct FEventReply OnTouchStarted(const struct FGeometry& MyGeometry, struct FPointerEvent& InTouchEvent, class UM2data_C* CallFunc_game_game, const class FString& CallFunc_Conv_IntToString_ReturnValue, class UM2data_C* CallFunc_game_game_1, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, float CallFunc_GetInputTouchState_LocationX, float CallFunc_GetInputTouchState_LocationY, bool CallFunc_GetInputTouchState_bIsCurrentlyPressed, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UM2data_C* CallFunc_game_game_2, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void MoveTouch(float Xm, float Ym, int32 ID, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FTouchData& K2Node_MakeStruct_touchData, const struct FTouchData& K2Node_MakeStruct_touchData_1, const struct FTouchData& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_1, const struct FVector2D& CallFunc_Multiply_Vector2DFloat_ReturnValue, float CallFunc_Distance2D_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_Add_Vector2DVector2D_ReturnValue, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_FMod_Remainder, int32 CallFunc_FMod_ReturnValue, float CallFunc_ClampAngle_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue_2);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_cameraMove(int32 EntryPoint, int32 Temp_int_Variable, enum class ETouchIndex Temp_byte_Variable, enum class ETouchIndex Temp_byte_Variable_1, enum class ETouchIndex Temp_byte_Variable_2, enum class ETouchIndex Temp_byte_Variable_3, enum class ETouchIndex Temp_byte_Variable_4, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, enum class ETouchIndex K2Node_Select_Default, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_GetInputTouchState_LocationX, float CallFunc_GetInputTouchState_LocationY, bool CallFunc_GetInputTouchState_bIsCurrentlyPressed, bool K2Node_Event_IsDesignTime, int32 CallFunc_getTouchCount_tCount, bool CallFunc_EqualEqual_IntInt_ReturnValue_1);
};

}


