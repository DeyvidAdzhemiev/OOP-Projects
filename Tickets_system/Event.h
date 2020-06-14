#pragma once
#include <iostream>
#include <vector>
#include "Ticket.h"
using namespace std;

class Event
{
private:
	vector<Ticket> ticket;
public:
	Event();
	Event& operator=(const Event& other);

	vector<Ticket> geTicket();
	void setTicket(vector<Ticket> ticket);

	// friend ostream& operator<<(ostream& output, Event& event);

	~Event();
};