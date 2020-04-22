#pragma once
#include <string>

class Task {
public:
	Task(int month, int day, int priority, std::string name, std::string description = "");
private:
	int mMonth, mDay, mPriority;
	std::string mName, mDescription;
};
