#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// AnimBlueprintGeneratedClass mobAnim_Child.mobAnim_Child_C
// (None)

class UClass* UMobAnim_Child_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("mobAnim_Child_C");

	return Clss;
}


// mobAnim_Child_C mobAnim_Child.Default__mobAnim_Child_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMobAnim_Child_C* UMobAnim_Child_C::GetDefaultObj()
{
	static class UMobAnim_Child_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMobAnim_Child_C*>(UMobAnim_Child_C::StaticClass()->DefaultObject);

	return Default;
}

}


