#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x318 - 0x270)
// WidgetBlueprintGeneratedClass shopWindow.shopWindow_C
class UShopWindow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UC_Button_C*                           buyBut;                                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWrapBox*                              Content;                                           // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           SellBut;                                           // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Sizer;                                             // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_window_C*                           W_window;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                Title;                                             // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	struct FShopData                             Data;                                              // 0x2B0(0x48)(Edit, BlueprintVisible, ExposeOnSpawn)
	class UM2data_C*                             Game;                                              // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ShopId;                                            // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Counter;                                           // 0x304(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FIitem>                        Items;                                             // 0x308(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UShopWindow_C* GetDefaultObj();

	void InitMobile();
	void buy(class UM2data_C* CallFunc_game_game, TArray<class FString>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, TArray<int32>& K2Node_MakeArray_Array_1);
	void Init(int32 Lindex, const struct FIitem& Temp_struct_Variable, class USlot_C* CallFunc_Create_ReturnValue, class USlot_C* CallFunc_Create_ReturnValue_1, class USlot_C* CallFunc_Create_ReturnValue_2, uint8 CallFunc_MakeLiteralByte_ReturnValue, class USlot_C* CallFunc_Create_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, uint8 CallFunc_MakeLiteralByte_ReturnValue_1, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, const struct FItem& K2Node_MakeStruct_item, class UPanelSlot* CallFunc_AddChild_ReturnValue, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue_1, int32 Temp_int_Variable_1, bool CallFunc_LessEqual_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_6, const struct FItem& K2Node_MakeStruct_item_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue_2, class UPanelSlot* CallFunc_AddChild_ReturnValue_2, const struct FItem& K2Node_MakeStruct_item_2, uint8 CallFunc_MakeLiteralByte_ReturnValue_3, class UPanelSlot* CallFunc_AddChild_ReturnValue_3, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, int32 CallFunc_Subtract_IntInt_ReturnValue_2, const struct FIitem& CallFunc_getItem_item, const struct FItem& K2Node_MakeStruct_item_3, int32 CallFunc_Array_Add_ReturnValue_1);
	void Construct();
	void BndEvt__shopWindow_w_window_K2Node_ComponentBoundEvent_3__close__DelegateSignature();
	void BndEvt__shopWindow_buyBut_K2Node_ComponentBoundEvent_0_click__DelegateSignature();
	void BndEvt__shopWindow_sellBut_K2Node_ComponentBoundEvent_4_click__DelegateSignature();
	void Destruct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_shopWindow(int32 EntryPoint, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class UM2data_C* K2Node_DynamicCast_AsM_2data, bool K2Node_DynamicCast_bSuccess, const struct FMob& CallFunc_getMob_mob, bool CallFunc_isMobile_isMobile, TArray<int32>& K2Node_MakeArray_Array, TArray<class FString>& K2Node_MakeArray_Array_1, class USlot_C* K2Node_DynamicCast_AsSlot, bool K2Node_DynamicCast_bSuccess_1, bool K2Node_Event_IsDesignTime, class USlot_C* K2Node_DynamicCast_AsSlot_1, bool K2Node_DynamicCast_bSuccess_2);
};

}


