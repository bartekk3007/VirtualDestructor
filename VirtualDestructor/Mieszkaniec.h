#include <iostream>
#include "Osoba.h"

class Mieszkaniec : public Osoba
{
	public:
	int* base;
	Mieszkaniec(int a, char b, int c) : Osoba(a, b), base(new int[c])
	{
		std::cout << "Derived class constructor\n";
	}
	~Mieszkaniec()
	{
		delete[] base;
		std::cout << "Derived class destructor\n";
	}
};