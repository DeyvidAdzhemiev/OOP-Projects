#include "Ticket.h"

Ticket::Ticket() : name(" "), date() {}

Ticket::Ticket(const string name, Date date) : name(name), date(date) {}

Ticket::Ticket(const Ticket& other) : name(other.name), date(other.date) {}

Ticket& Ticket::operator=(const Ticket& other)
{
	if (this != &other)
	{
		this->name = name;
		this->date = date;
	}
	return *this;
}

string Ticket::getName() const
{
	return this->name;
}

Date Ticket::getDate()
{
	return this->date;
}

void Ticket::setName(const string name)
{
	this->name = name;
}

void Ticket::setDate(Date date)
{
	this->date = date;
}

ostream& operator<<(ostream& output, Ticket& ticket)
{
	output << ticket.name;

	return output;
}

Ticket::~Ticket()
{
}