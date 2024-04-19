#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x80 - 0x30)
// Class AnimationCore.AnimationDataSourceRegistry
class UAnimationDataSourceRegistry : public UObject
{
public:
	TMap<class FName, TWeakObjectPtr<class UObject>> DataSources;                                       // 0x30(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UAnimationDataSourceRegistry* GetDefaultObj();

};

}


