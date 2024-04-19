#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x128 - 0x30)
// Class BuildPatchServices.BuildPatchManifest
class UBuildPatchManifest : public UObject
{
public:
	uint8                                        ManifestFileVersion;                               // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFileData;                                       // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82F[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	uint32                                       AppID;                                             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AppName;                                           // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BuildVersion;                                      // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LaunchExe;                                         // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                LaunchCommand;                                     // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSet<class FString>                          PrereqIds;                                         // 0x78(0x50)(NativeAccessSpecifierPublic)
	class FString                                PrereqName;                                        // 0xC8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PrereqPath;                                        // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PrereqArgs;                                        // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFileManifestData>             FileManifestList;                                  // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FChunkInfoData>                ChunkList;                                         // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomFieldData>              CustomFields;                                      // 0x118(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UBuildPatchManifest* GetDefaultObj();

};

}


