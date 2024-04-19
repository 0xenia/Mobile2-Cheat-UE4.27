#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// Function ItemShopPay.ItemShopPay_C.openBrowser
struct UItemShopPay_C_OpenBrowser_Params
{
public:
	class FString                                URL;                                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UM2data_C*                             CallFunc_game_game;                                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWebBrowser_C*                         CallFunc_openWebBrowser_browser;                   // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function ItemShopPay.ItemShopPay_C.payOk
struct UItemShopPay_C_PayOk_Params
{
public:
	class FString                                CallFunc_Gtext_text;                               // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Gtext_text_1;                             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function ItemShopPay.ItemShopPay_C.GetVisibility_0
struct UItemShopPay_C_GetVisibility_0_Params
{
public:
	enum class ESlateVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x19 (0x19 - 0x0)
// Function ItemShopPay.ItemShopPay_C.checkWeb
struct UItemShopPay_C_CheckWeb_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E3F[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetUrl_url;                               // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xF1 (0xF1 - 0x0)
// Function ItemShopPay.ItemShopPay_C.Init
struct UItemShopPay_C_Init_Params
{
public:
	class UPayBox_C*                             CallFunc_Create_ReturnValue;                       // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UM2data_C*                             CallFunc_game_game;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UM2data_C*                             CallFunc_game_game_1;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_StrStr_ReturnValue;              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E48[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UM2data_C*                             CallFunc_game_game_2;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue;               // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue_1;             // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E49[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UM2data_C*                             CallFunc_game_game_3;                              // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_2;          // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Conv_IntToBool_ReturnValue_2;             // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E4A[0x5];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UPanelSlot*                            CallFunc_AddChild_ReturnValue;                     // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E4B[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        Temp_int_Variable;                                 // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue;              // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Multiply_IntInt_ReturnValue_1;            // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E4E[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPacket                               CallFunc_removeFirstIntFromPacket_pack;            // 0x70(0x28)(None)
	struct FPacket                               CallFunc_removeFirstIntFromPacket_pack_1;          // 0x98(0x28)(None)
	struct FPacket                               CallFunc_removeFirstIntFromPacket_pack_2;          // 0xC0(0x28)(None)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function ItemShopPay.ItemShopPay_C.OnFailure_7AA6B45744E2E2A564B463A8880238B8
struct UItemShopPay_C_OnFailure_7AA6B45744E2E2A564B463A8880238B8_Params
{
public:
	enum class EInAppPurchaseState               CompletionStatus;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E52[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInAppPurchaseRestoreInfo>     InAppRestorePurchaseInformation;                   // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function ItemShopPay.ItemShopPay_C.OnSuccess_7AA6B45744E2E2A564B463A8880238B8
struct UItemShopPay_C_OnSuccess_7AA6B45744E2E2A564B463A8880238B8_Params
{
public:
	enum class EInAppPurchaseState               CompletionStatus;                                  // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E54[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInAppPurchaseRestoreInfo>     InAppRestorePurchaseInformation;                   // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xB0 (0xB0 - 0x0)
// Function ItemShopPay.ItemShopPay_C.OnFailure_9B24A8254958F248A017F8B13B72B62D
struct UItemShopPay_C_OnFailure_9B24A8254958F248A017F8B13B72B62D_Params
{
public:
	enum class EInAppPurchaseState               PurchaseStatus;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E56[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInAppPurchaseProductInfo             InAppPurchaseReceipts;                             // 0x8(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0xB0 (0xB0 - 0x0)
// Function ItemShopPay.ItemShopPay_C.OnSuccess_9B24A8254958F248A017F8B13B72B62D
struct UItemShopPay_C_OnSuccess_9B24A8254958F248A017F8B13B72B62D_Params
{
public:
	enum class EInAppPurchaseState               PurchaseStatus;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E57[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInAppPurchaseProductInfo             InAppPurchaseReceipts;                             // 0x8(0xA8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function ItemShopPay.ItemShopPay_C.OnFailure_FDC88BAB48FB60ABFB12B8A897F910BE
struct UItemShopPay_C_OnFailure_FDC88BAB48FB60ABFB12B8A897F910BE_Params
{
public:
	enum class EInAppPurchaseStatus              PurchaseStatus;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E5A[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInAppPurchaseReceiptInfo2>    InAppPurchaseReceipts;                             // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x18 (0x18 - 0x0)
// Function ItemShopPay.ItemShopPay_C.OnSuccess_FDC88BAB48FB60ABFB12B8A897F910BE
struct UItemShopPay_C_OnSuccess_FDC88BAB48FB60ABFB12B8A897F910BE_Params
{
public:
	enum class EInAppPurchaseStatus              PurchaseStatus;                                    // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E5C[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInAppPurchaseReceiptInfo2>    InAppPurchaseReceipts;                             // 0x8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x5D9 (0x5D9 - 0x0)
// Function ItemShopPay.ItemShopPay_C.ExecuteUbergraph_ItemShopPay
struct UItemShopPay_C_ExecuteUbergraph_ItemShopPay_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue;            // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_E8D[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0x10)(ZeroConstructor, NoDestructor)
	enum class EInAppPurchaseState               K2Node_CustomEvent_CompletionStatus;               // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E8E[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInAppPurchaseRestoreInfo>     K2Node_CustomEvent_InAppRestorePurchaseInformation; // 0x20(0x10)(ConstParm, ReferenceParm)
	TArray<struct FInAppPurchaseRestoreInfo>     Temp_struct_Variable;                              // 0x30(0x10)(ReferenceParm)
	enum class EInAppPurchaseState               Temp_byte_Variable;                                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInAppPurchaseState               K2Node_CustomEvent_PurchaseStatus_3;               // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E8F[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInAppPurchaseProductInfo             K2Node_CustomEvent_InAppPurchaseReceipts_3;        // 0x48(0xA8)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xF0(0x10)(ZeroConstructor, NoDestructor)
	enum class EInAppPurchaseState               K2Node_CustomEvent_PurchaseStatus_2;               // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E90[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FInAppPurchaseProductInfo             K2Node_CustomEvent_InAppPurchaseReceipts_2;        // 0x108(0xA8)(ConstParm)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x1B0(0x10)(ZeroConstructor, NoDestructor)
	struct FInAppPurchaseProductInfo             Temp_struct_Variable_1;                            // 0x1C0(0xA8)(None)
	enum class EInAppPurchaseState               Temp_byte_Variable_1;                              // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E92[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x270(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x280(0x10)(ZeroConstructor, NoDestructor)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x290(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EInAppPurchaseStatus              K2Node_CustomEvent_PurchaseStatus_1;               // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E93[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInAppPurchaseReceiptInfo2>    K2Node_CustomEvent_InAppPurchaseReceipts_1;        // 0x2A8(0x10)(ConstParm, ReferenceParm)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x2B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x2C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x2D8(0x10)(ZeroConstructor, NoDestructor)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x2E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EInAppPurchaseStatus              K2Node_CustomEvent_PurchaseStatus;                 // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E98[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInAppPurchaseReceiptInfo2>    K2Node_CustomEvent_InAppPurchaseReceipts;          // 0x300(0x10)(ConstParm, ReferenceParm)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x310(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<struct FInAppPurchaseReceiptInfo2>    Temp_struct_Variable_2;                            // 0x320(0x10)(ReferenceParm)
	TArray<class FString>                        K2Node_MakeArray_Array;                            // 0x330(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x340(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x344(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x348(0x10)(ZeroConstructor, HasGetValueTypeHash)
	enum class EInAppPurchaseStatus              Temp_byte_Variable_2;                              // 0x358(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EA1[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x360(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0x370(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_8;              // 0x380(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_9;              // 0x390(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_10;             // 0x3A0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_11;             // 0x3B0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<class FString>                        K2Node_MakeArray_Array_1;                          // 0x3C0(0x10)(ReferenceParm)
	class FString                                CallFunc_Gtext_text;                               // 0x3D0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UM2data_C*                             CallFunc_game_game;                                // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        K2Node_MakeArray_Array_2;                          // 0x3E8(0x10)(ReferenceParm)
	TArray<int32>                                K2Node_MakeArray_Array_3;                          // 0x3F8(0x10)(ReferenceParm)
	class FString                                CallFunc_Gtext_text_1;                             // 0x408(0x10)(ZeroConstructor, HasGetValueTypeHash)
	TArray<int32>                                K2Node_MakeArray_Array_4;                          // 0x418(0x10)(ReferenceParm)
	class UM2save_C*                             CallFunc_m2save_save;                              // 0x428(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class FString>                        K2Node_MakeArray_Array_5;                          // 0x430(0x10)(ReferenceParm)
	class FString                                CallFunc_GetDefaultLanguage_ReturnValue;           // 0x440(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimer_ReturnValue;                  // 0x450(0x8)(NoDestructor, HasGetValueTypeHash)
	class UM2data_C*                             CallFunc_game_game_1;                              // 0x458(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x460(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EAB[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_GetUrl_url;                               // 0x468(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Contains_ReturnValue;                     // 0x478(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue_1;                   // 0x479(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Contains_ReturnValue_2;                   // 0x47A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x47B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EAE[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                CallFunc_Concat_StrStr_ReturnValue_12;             // 0x480(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_13;             // 0x490(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_isTr_tr_;                                 // 0x4A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EB0[0x3];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x4A4(0x10)(ZeroConstructor, NoDestructor)
	uint8                                        Pad_EB1[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class APlayerController*                     CallFunc_GetPlayerControllerFromID_ReturnValue;    // 0x4B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UM2data_C*                             CallFunc_game_game_2;                              // 0x4C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<int32>                                K2Node_MakeArray_Array_6;                          // 0x4C8(0x10)(ReferenceParm)
	class FString                                CallFunc_Gtext_text_2;                             // 0x4D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UM2data_C*                             CallFunc_game_game_3;                              // 0x4E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerControllerFromID_ReturnValue_1;  // 0x4F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_StrStr_ReturnValue_1;          // 0x4F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EB2[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UM2data_C*                             CallFunc_game_game_4;                              // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EInAppPurchaseState               K2Node_CustomEvent_CompletionStatus_1;             // 0x508(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_EB3[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInAppPurchaseRestoreInfo>     K2Node_CustomEvent_InAppRestorePurchaseInformation_1; // 0x510(0x10)(ConstParm, ReferenceParm)
	class FString                                CallFunc_Conv_IntToString_ReturnValue_1;           // 0x520(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Gtext_text_3;                             // 0x530(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_14;             // 0x540(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FInAppPurchaseProductRequest          K2Node_MakeStruct_InAppPurchaseProductRequest;     // 0x550(0x18)(None)
	struct FInAppPurchaseProductRequest2         K2Node_MakeStruct_InAppPurchaseProductRequest2;    // 0x568(0x18)(None)
	class UInAppPurchaseCallbackProxy*           CallFunc_CreateProxyObjectForInAppPurchase_ReturnValue; // 0x580(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FInAppPurchaseProductRequest>  K2Node_MakeArray_Array_7;                          // 0x588(0x10)(ConstParm, ReferenceParm)
	class UInAppPurchaseRestoreCallbackProxy*    CallFunc_CreateProxyObjectForInAppPurchaseRestore_ReturnValue; // 0x598(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x5A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EB4[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                K2Node_MakeArray_Array_8;                          // 0x5A8(0x10)(ReferenceParm)
	class UM2data_C*                             CallFunc_game_game_5;                              // 0x5B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerControllerFromID_ReturnValue_2;  // 0x5C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UInAppPurchaseCallbackProxy2*          CallFunc_CreateProxyObjectForInAppPurchase_ReturnValue_1; // 0x5C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ULoading_C*                            CallFunc_Create_ReturnValue;                       // 0x5D0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x5D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

}
}


