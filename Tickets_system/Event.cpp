#include "Event.h"

Event::Event() : ticket(0) {}

Event& Event::operator=(const Event& other)
{
	if (this != &other)
	{
		this->ticket = ticket;
	}
	return *this;
}

vector<Ticket> Event::geTicket()
{
	return this->ticket;
}

void Event::setTicket(vector<Ticket> ticket)
{
	this->ticket = ticket;
}

//ostream& operator<<(ostream& output, Event& event)
//{
//	for (int i = 0; i < event.ticket.size(); i++)
//	{
//		output << event.ticket[i];
//	}
//	
//	return output;
//}

Event::~Event() {}