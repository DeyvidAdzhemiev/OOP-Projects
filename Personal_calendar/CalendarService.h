#pragma once
#include "Calendar.h"

class CalendarService
{
private:
	Calendar calendar;

public:
	CalendarService();

	void book(string, string, int, int, int, int, int, int, int, int, int, int);
	bool checkIsAlreadyBusy(Meeting);
	void unbook(int, int, int, int, int);
	void agenda(int, int, int);
	void change(string, string, int, int, int, int, int, int, int, int, int, int);
	void find(string);
	void holiday();
	void busydays(int, int, int, int, int, int, int, int, int, int);
	void findSlot();
	void findSlotWith();
	void merge();
};
