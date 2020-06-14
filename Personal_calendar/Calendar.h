#pragma once
#include "Meeting.h"
#include <vector>

class Calendar 
{
private:
	vector<Meeting> meetings;

public:
	Calendar();

	vector<Meeting> getMeeting();
	void bookMeeting(Meeting& meeting);
};