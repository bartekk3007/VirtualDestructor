#include <iostream>
#include "Mieszkaniec.h"

int main()
{
	Osoba* o1 = new Mieszkaniec(1, 'b', 10);
	delete o1;

	return 0;
}