#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass w_board.w_board_C
// (None)

class UClass* UW_board_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("w_board_C");

	return Clss;
}


// w_board_C w_board.Default__w_board_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UW_board_C* UW_board_C::GetDefaultObj()
{
	static class UW_board_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UW_board_C*>(UW_board_C::StaticClass()->DefaultObject);

	return Default;
}

}


