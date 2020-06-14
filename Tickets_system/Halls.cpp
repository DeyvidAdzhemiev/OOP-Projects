#include "Halls.h"

Halls::Halls() 
{
	seats[ROW][SEAT] = {0};
}

Halls& Halls::operator=(const Halls& other)
{
	if (this != &other)
	{
		this->seats[ROW][SEAT] = seats[ROW][SEAT];
	}
	return *this;
}

//bool Halls::operator==(const Halls& other)
//{
//	return this->seats[ROW][SEAT] == other.seats[ROW][SEAT];
//}

void Halls::printSeats(int seats[][SEAT])
{
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < SEAT; j++)
		{
			cout << seats[i][j];
		}
		cout << endl;
	}
}

//int Halls::getSeats() const
//{
//	return this->seats[ROW][SEAT];
//}
//
//void Halls::setSeats(const int seats[][SEAT])
//{
//	this->seats[ROW][SEAT] = seats[ROW][SEAT];
//}

//ostream& operator<<(ostream& output, Halls& halls)
//{
//	output << halls.seats[ROW][SEAT];
//
//	return output;
//}

Halls::~Halls() {}