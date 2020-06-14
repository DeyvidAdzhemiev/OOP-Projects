#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

const int ROW = 25;
const int SEAT = 20;

class Halls
{
private:
	int seats[ROW][SEAT];

public:
	Halls();
	Halls& operator=(const Halls& other);

	bool operator==(const Halls& other);
	void printSeats(int seats[][SEAT]);

	int getSeats() const;
	void setSeats(const int seats[][SEAT]);

	friend ostream& operator<<(ostream& output, Halls& halls);

	~Halls();
};
