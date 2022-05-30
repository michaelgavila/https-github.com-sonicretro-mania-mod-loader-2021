#include "stdafx.h"
#include "Events.h"

std::vector<ModEvent> modLinkEvents;
std::vector<ModEvent> modScreenUpdateEvents;
std::vector<ModEvent> modScreenDrawUpdateEvents;
std::vector<ModEvent> modFrameEvents;
std::vector<ModEvent> modFramePostEvents;
/**
* Registers an event to the specified event list.
* @param eventList The event list to add to.
* @param module The module for the mod DLL.
* @param name The name of the exported function from the module (i.e OnFrame)
*/
void RegisterEvent(std::vector<ModEvent>& eventList, HMODULE module, const char* name)
{
	const ModEvent modEvent = (const ModEvent)GetProcAddress(module, name);

	if (modEvent != nullptr)
		eventList.push_back(modEvent);
}
