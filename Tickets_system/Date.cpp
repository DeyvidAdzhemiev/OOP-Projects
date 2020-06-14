#include "Date.h"

using namespace std;

Date::Date() {}

Date::Date(int Month, int Day, int Year)
{
	setDay(Day);
	setMonth(Month);
	setYear(Year);
}

Date& Date::operator=(const Date& date)
{
	if (this != &date)
	{
		this->day = date.day;
		this->month = date.month;
		this->year = date.year;
	}

	return *this;
}

int Date::getDay()
{
	return this->day;
}

int Date::getYear()
{
	return this->year;
}

int Date::getMonth()
{
	return this->month;
}

void Date::setDay(int d)
{
	if (d < 1 && d > 31)
		exit(0);
	else
		day = d;
}

void Date::setMonth(int m)
{
	if (m < 1 && m > 12)
		exit(0);
	else
		month = m;
}

void Date::setYear(int y)
{
	if (y < 2020)
		exit(0);
	else
		year = y;
}

void Date::showDate()
{
	cout << " /" << month << " /" << day << " /" << year << endl;
}

ostream& operator<<(ostream& output, Date& date)
{
	output << date.day << "/" << date.month << "/" << date.year;
	return output;
}