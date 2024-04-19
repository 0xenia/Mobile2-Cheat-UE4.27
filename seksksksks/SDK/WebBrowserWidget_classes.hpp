#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x158 - 0x110)
// Class WebBrowserWidget.WebBrowser
class UWebBrowser : public UWidget
{
public:
	FMulticastInlineDelegateProperty_            OnUrlChanged;                                      // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnBeforePopup;                                     // 0x120(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                InitialURL;                                        // 0x130(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsTransparency;                             // 0x140(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F7[0x17];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWebBrowser* GetDefaultObj();

	void OnUrlChanged__DelegateSignature(class FText& Text);
	void OnBeforePopup__DelegateSignature(const class FString& URL, const class FString& Frame);
	void LoadURL(const class FString& NewURL);
	void LoadString(const class FString& Contents, const class FString& DummyURL);
	class FString GetUrl();
	class FText GetTitleText();
	void ExecuteJavascript(const class FString& ScriptText);
};

// 0x50 (0x80 - 0x30)
// Class WebBrowserWidget.WebBrowserAssetManager
class UWebBrowserAssetManager : public UObject
{
public:
	TSoftObjectPtr<class UMaterial>              DefaultMaterial;                                   // 0x30(0x28)(Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F8[0x28];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UWebBrowserAssetManager* GetDefaultObj();

};

}


