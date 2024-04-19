#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x1D0 - 0x178)
// Class AnimatedTexture.AnimatedTexture2D
class UAnimatedTexture2D : public UTexture
{
public:
	uint8                                        Pad_57E[0x8];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	enum class ETextureAddress                   AddressX;                                          // 0x180(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureAddress                   AddressY;                                          // 0x181(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SupportsTransparency;                              // 0x182(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_57F[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DefaultFrameDelay;                                 // 0x184(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0x188(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLooping;                                          // 0x18C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_580[0x23];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<uint8>                                FileBlob;                                          // 0x1B0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bPlaying;                                          // 0x1C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_581[0xF];                                      // Fixing Size Of Struct [ Dumper-7 ]

	static class UClass* StaticClass();
	static class UAnimatedTexture2D* GetDefaultObj();

	void Stop();
	void SetPlayRate(float NewRate);
	void SetLooping(bool bNewLooping);
	void PlayFromStart();
	void Play();
	bool IsPlaying();
	bool IsLooping();
	float GetPlayRate();
	float GetAnimationLength();
	void Delete();
};

// 0x0 (0x88 - 0x88)
// Class AnimatedTexture.MaterialExpressionTextureSampleParameterAnim
class UMaterialExpressionTextureSampleParameterAnim : public UMaterialExpressionTextureSampleParameter
{
public:

	static class UClass* StaticClass();
	static class UMaterialExpressionTextureSampleParameterAnim* GetDefaultObj();

};

}


