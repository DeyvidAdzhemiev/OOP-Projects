#include <iostream>
#include <fstream>
#include "TicketSystemService.h"
using namespace std;


int main()
{
	cout << "********************************" << endl;
	cout << "	TICKET SYSTEM" << endl;
	cout << "********************************" << endl;
	cout << endl;
	cout << "HALL #1" << endl;
	cout << "HALL #2" << endl;
	cout << "HALL #3" << endl;

	fstream file1, file2, file3;
	int number;
	cout << "Type the number of the hall that you want to open:" << endl;
	cin >> number;

	if (number == 1)
	{
		file1.open("Hall1.txt", ios::in | ios::out);

		if (!file1)
		{
			cout << "Error in creating file!";
		}
		if (file1.is_open())
		{
			Date date1, date2;
			date1.setDay(2);
			date1.setMonth(7);
			date1.setYear(2020);
			date2.setDay(3);
			date2.setMonth(7);
			date2.setYear(2020);

			Ticket ticket1, ticket2;
			ticket1.setName("Fast & Furious 9");
			ticket1.setDate(date1);
			ticket2.setName("The Wolf of Wall Street");
			ticket2.setDate(date2);

			file1 << "	Movie 1:" << endl;
			file1 << "Name: " << ticket1 << endl;
			file1 << "Date: " << date1 << endl;
			file1 << "Sold tickets: " << "20" << endl;
			file1 << endl;
			file1 << "	Movie 2: " << endl;
			file1 << "Name: " << ticket2 << endl;
			file1 << "Date: " << date2 << endl;
			file1 << "Sold tickets: " << "45" << endl;

			file1.close();
		}

	}

	else if (number == 2)
	{
		file2.open("Hall2.txt", ios::in | ios::out);

		if (!file2)
		{
			cout << "Error in creating file!";
		}
		if (file2.is_open())
		{
			Date date3, date4;
			date3.setDay(3);
			date3.setMonth(7);
			date3.setYear(2020);
			date4.setDay(4);
			date4.setMonth(7);
			date4.setYear(2020);

			Ticket ticket3, ticket4;
			ticket3.setName("Taken 3");
			ticket3.setDate(date3);
			ticket4.setName("A Star is Born");
			ticket4.setDate(date4);

			file2 << "	Movie 1:" << endl;
			file2 << "Name: " << ticket3 << endl;
			file2 << "Date: " << date3 << endl;
			file2 << "Sold tickets: " << "56" << endl;
			file2 << endl;
			file2 << "	Movie 2: " << endl;
			file2 << "Name: " << ticket4 << endl;
			file2 << "Date: " << date4 << endl;
			file2 << "Sold tickets: " << "37" << endl;

			file2.close();
		}
	}

	else if (number == 3)
	{
		file3.open("Hall3.txt", ios::in | ios::out);

		if (!file3)
		{
			cout << "Error in creating file!";
		}
		if (file3.is_open())
		{
			Date date5, date6;
			date5.setDay(4);
			date5.setMonth(7);
			date5.setYear(2020);
			date6.setDay(5);
			date6.setMonth(7);
			date6.setYear(2020);

			Ticket ticket5, ticket6;
			ticket5.setName("Star Wars: The Last Jedi");
			ticket5.setDate(date5);
			ticket6.setName("Mission: Impossible - Fallout");
			ticket6.setDate(date6);

			file3 << "	Movie 1:" << endl;
			file3 << "Name: " << ticket5 << endl;
			file3 << "Date: " << date5 << endl;
			file3 << "Sold tickets: " << "29" << endl;
			file3 << endl;
			file3 << "	Movie 2: " << endl;
			file3 << "Name: " << ticket6 << endl;
			file3 << "Date: " << date6 << endl;
			file3 << "Sold tickets: " << "53" << endl;

			file3.close();
		}
	}
	else exit(0);
	
}