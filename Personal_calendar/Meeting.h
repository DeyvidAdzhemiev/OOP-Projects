#pragma once
#include <string>
#include "Date.h"

class Meeting
{
private:
	string name;
	string description;
	Date startTime;
	Date endTime;

public:
	Meeting();
	Meeting(string name, string description, Date& startTime, Date& endTime);


	void setName(string name);
	void setDescription(string description);
	void setStartTime(Date startTime);
	void setEndTime(Date endTime);
	Date getStartDate();
	Date getEndDate();
	string getName();
	string getDescription();

	void showMeeting();
};