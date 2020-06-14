#pragma once
#include <iostream>
using namespace std;

class Date
{

private:
	int month, day, year;

public:
	Date();
	Date(int, int, int);
	Date& operator=(const Date& date);

	void setDay(int);
	void setMonth(int);
	void setYear(int);
	void showDate();
	int getDay();
	int getYear();
	int getMonth();

	friend ostream& operator<<(ostream& output, Date& date);
};
