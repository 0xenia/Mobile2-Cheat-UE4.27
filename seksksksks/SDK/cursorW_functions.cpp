#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass cursorW.cursorW_C
// (None)

class UClass* UCursorW_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("cursorW_C");

	return Clss;
}


// cursorW_C cursorW.Default__cursorW_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCursorW_C* UCursorW_C::GetDefaultObj()
{
	static class UCursorW_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCursorW_C*>(UCursorW_C::StaticClass()->DefaultObject);

	return Default;
}

}


