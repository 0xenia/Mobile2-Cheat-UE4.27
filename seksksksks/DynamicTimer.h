#pragma once
#include <map>
class DynamicTimer
{
public:
	static std::map<std::string, DWORD> timersList;
	static bool CheckAutoSet(std::string timerName, DWORD timeMiliseconds)
	{
		if (timersList.count(timerName))
		{
			if (GetTickCount() - timersList[timerName] > timeMiliseconds)
			{
				timersList[timerName] = GetTickCount();
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			timersList.insert(std::make_pair(timerName, GetTickCount()));
			return true;
		}
	}

	static bool Check(std::string timerName, DWORD timeMiliseconds)
	{
		if (timersList.count(timerName))
		{
			if (GetTickCount() - timersList[timerName] > timeMiliseconds)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
		else
		{
			timersList.insert(std::make_pair(timerName, GetTickCount()));
			return true;
		}
	}
	static bool SetTick(std::string timerName)
	{
		if (timersList.count(timerName))
		{
			timersList[timerName] = GetTickCount();
			return true;
		}
		return false;
	}

	static bool IsActive(std::string timerName, DWORD timeMiliseconds)
	{
		if (timersList.count(timerName))
		{
			if (GetTickCount() - timersList[timerName] > timeMiliseconds)
			{
				return false;
			}
			else
			{
				return true;
			}
		}
		return false;
	}
};

std::map<std::string, DWORD> DynamicTimer::timersList;