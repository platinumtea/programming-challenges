#include "Task.h"

Task::Task(int month, int day, int priority, std::string name, std::string description = "") :
	mMonth(month), mDay(day), mPriority(priority), mName(name), mDescription(description) 
{
}

