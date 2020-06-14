#include <iostream>
#include <string>
#include "Date.h"
using namespace std;

class Ticket
{
private:
	string name;
	Date date;
public:
	Ticket();
	Ticket(const string name, Date date);
	Ticket(const Ticket& other);
	Ticket& operator=(const Ticket& other);

	string getName() const;
	Date getDate();
	void setName(const string name);
	void setDate(Date date);

	friend ostream& operator<<(ostream& output, Ticket& ticket);

	~Ticket();
};