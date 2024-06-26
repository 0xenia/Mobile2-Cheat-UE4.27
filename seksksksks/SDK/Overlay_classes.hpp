#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x30 - 0x30)
// Class Overlay.Overlays
class UOverlays : public UObject
{
public:

	static class UClass* StaticClass();
	static class UOverlays* GetDefaultObj();

};

// 0x10 (0x40 - 0x30)
// Class Overlay.BasicOverlays
class UBasicOverlays : public UOverlays
{
public:
	TArray<struct FOverlayItem>                  Overlays;                                          // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBasicOverlays* GetDefaultObj();

};

// 0x58 (0x88 - 0x30)
// Class Overlay.LocalizedOverlays
class ULocalizedOverlays : public UOverlays
{
public:
	class UBasicOverlays*                        DefaultOverlays;                                   // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class UBasicOverlays*>   LocaleToOverlaysMap;                               // 0x38(0x50)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class ULocalizedOverlays* GetDefaultObj();

};

}


