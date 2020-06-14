#include <fstream>
#include "CalendarService.h"

int main()
{
	ofstream file1;
	cout << "*********************************************" << endl;
	cout << "	Hello to your personal calendar!" << endl;
	cout << "*********************************************" << endl;
	cout << endl;
	cout << "-> Open" << endl;
	cout << "-> Help" << endl;
	cout << "-> Exit" << endl;
	cout << endl;
	cout << "Please, type the name of command:" << endl;
	string choice;
	cin >> choice;


Open:if (choice == "open" || choice == "Open")
	{
		file1.open("Schelude.txt", ios::out | ios::trunc);

		if (!file1)
		{
			cout << "Error in creating file";
		}
		if (file1.is_open())
		{
			/*cout << "Enter name of your meeting:" << endl;*/
			Meeting meeting1, meeting2;

			//Meeting 1
			meeting1.setName("Meeting with bff");
			meeting1.setDescription("Talking about something important");
			Date date1, date2;
			date1.setHour(17);
			date1.setMinute(30);
			date1.setDay(21);
			date1.setMonth(10);
			date1.setYear(2020);
			meeting1.setStartTime(date1);

			date2.setHour(19);
			date2.setMinute(30);
			date2.setDay(21);
			date2.setMonth(10);
			date2.setYear(2020);
			meeting1.setEndTime(date2);

			// Meeting 2
			meeting2.setName("Meeting with my mum");
			meeting2.setDescription("Lunch somewhere");
			Date date3, date4;
			date3.setHour(12);
			date3.setMinute(30);
			date3.setDay(22);
			date3.setMonth(10);
			date3.setYear(2020);
			meeting2.setStartTime(date3);

			date4.setHour(13);
			date4.setMinute(30);
			date4.setDay(22);
			date4.setMonth(10);
			date4.setYear(2020);
			meeting2.setEndTime(date4);

			Calendar calendar;
			calendar.bookMeeting(meeting1);
			calendar.bookMeeting(meeting2);
			
			/*char name[100];
			cin >> name;
			cin.getline(name, 100);*/
			file1 << "	Meeting 1:   " << endl;
			file1 << "Name: " << meeting1.getName() << endl;
			file1 << "Description: " << meeting1.getDescription() << endl;
			file1 << "Start date: " << date1 << endl;
			file1 << "End date: " << date2 << endl;
			file1 << endl;

			file1 << "	Meeting 2:   " << endl;
			file1 << "Name: " << meeting2.getName() << endl;
			file1 << "Description: " << meeting2.getDescription() << endl;
			file1 << "Start date: " << date3 << endl;
			file1 << "End date: " << date4 << endl;

		}
	}

Help:if(choice == "help" || choice == "Help")
	{
		cout << "The following commands are supported:" << endl;
		cout << "-open  ->  open your schelude" << endl;
		cout << "-help  ->  prints this information" << endl;
		cout << "-exit  ->  exit from your personal calendar" << endl;
		
		cout << endl;
		cout << "Please, type the name of command:" << endl;
		cin >> choice;
		if (choice == "open" || choice == "Open")
		{
			goto Open;
		}
		else if (choice == "help" || choice == "Help")
		{
			goto Help;
		}
		else exit(0);
		
	} 
	else exit(0);
}