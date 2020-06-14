#pragma once
#include <iostream>
#include "Halls.h"
#include "Event.h"

class TicketSystemService
{
private:
	Halls halls[3];

public:
	TicketSystemService();
	void addEvent();
	void freeSeats();
	void book();
	void unbook();
	void buy();
	void booking();
	void check();
	void report();
};
