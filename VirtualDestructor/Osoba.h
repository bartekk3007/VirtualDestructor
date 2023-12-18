#include <iostream>

class Osoba
{
	public:
	int liczba;
	char znak;
	Osoba(int liczba, char znak) : liczba(liczba), znak(znak)
	{
		std::cout << "Base class constructor\n";
	}
	virtual ~Osoba()
	{
		std::cout << "Base class destructor\n";
	}
};