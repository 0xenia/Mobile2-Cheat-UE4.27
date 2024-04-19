#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x2F8 - 0x270)
// WidgetBlueprintGeneratedClass EscMenu.EscMenu_C
class UEscMenu_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x270(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                blocker;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button;                                          // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button_1;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button_2;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button_3;                                        // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button_4;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button_5;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           C_Button_6;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           GmChatban;                                         // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           GmCinema;                                          // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           GmEvent;                                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           GmPlayerban;                                       // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UC_Button_C*                           GmPriv;                                            // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_33;                                          // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UW_board_C*                            W_board;                                           // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Logouting;                                         // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E73[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        LogoutCounter;                                     // 0x2F4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEscMenu_C* GetDefaultObj();

	void Langer(const class FString& CallFunc_lang_lang, const class FString& CallFunc_lang_lang_1, bool CallFunc_Contains_ReturnValue, bool CallFunc_Contains_ReturnValue_1);
	void DoCharSelect(const class FString& CallFunc_gtext_ReturnValue, class UM2data_C* CallFunc_game_game, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void Logouter(const class FString& CallFunc_gtext_ReturnValue, class UM2data_C* CallFunc_game_game, class UM2data_C* CallFunc_game_game_1, TArray<class FString>& K2Node_MakeArray_Array, TArray<int32>& K2Node_MakeArray_Array_1, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void DoLogout(const class FString& CallFunc_gtext_ReturnValue, class UM2data_C* CallFunc_game_game, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue);
	void Charselecter(const class FString& CallFunc_gtext_ReturnValue, class UM2data_C* CallFunc_game_game, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array, TArray<int32>& K2Node_MakeArray_Array_1, int32 CallFunc_Subtract_IntInt_ReturnValue);
	void Quit();
	void bLock(class UM2data_C* CallFunc_game_game);
	struct FEventReply OnMouseButtonDown_0(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void Close();
	void Construct();
	void BndEvt__EscMenu_c_Button_6_K2Node_ComponentBoundEvent_0_click__DelegateSignature();
	void BndEvt__EscMenu_c_Button_1_K2Node_ComponentBoundEvent_1_click__DelegateSignature();
	void BndEvt__EscMenu_c_Button_3_K2Node_ComponentBoundEvent_2_click__DelegateSignature();
	void BndEvt__EscMenu_c_Button_2_K2Node_ComponentBoundEvent_3_click__DelegateSignature();
	void BndEvt__EscMenu_c_Button_7_K2Node_ComponentBoundEvent_4_click__DelegateSignature();
	void BndEvt__EscMenu_c_Button_8_K2Node_ComponentBoundEvent_5_click__DelegateSignature();
	void BndEvt__EscMenu_c_Button_5_K2Node_ComponentBoundEvent_6_click__DelegateSignature();
	void BndEvt__EscMenu_c_Button_K2Node_ComponentBoundEvent_7_click__DelegateSignature();
	void Tog();
	void BndEvt__EscMenu_gmChatban_K2Node_ComponentBoundEvent_8_click__DelegateSignature();
	void BndEvt__EscMenu_gmPlayerban_K2Node_ComponentBoundEvent_9_click__DelegateSignature();
	void BndEvt__EscMenu_c_Button_4_K2Node_ComponentBoundEvent_10_click__DelegateSignature();
	void BndEvt__EscMenu_gmCinema_K2Node_ComponentBoundEvent_11_click__DelegateSignature();
	void ExecuteUbergraph_EscMenu(int32 EntryPoint, class Ubanner_C* CallFunc_Create_ReturnValue, class Ubanner_C* CallFunc_Create_ReturnValue_1, class UM2data_C* CallFunc_game_game, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, class UM2data_C* CallFunc_game_game_1, bool CallFunc_isMobile_isMobile, class UM2data_C* CallFunc_game_game_2, class APControl_C* CallFunc_pControl_pc, class UM2data_C* CallFunc_game_game_3, class UPrivs_C* CallFunc_Create_ReturnValue_2, class UAddEvent_C* CallFunc_Create_ReturnValue_3, class UM2data_C* CallFunc_game_game_4, class UM2data_C* CallFunc_game_game_5, bool CallFunc_isTr_tr_, class UM2data_C* CallFunc_game_game_6);
};

}


