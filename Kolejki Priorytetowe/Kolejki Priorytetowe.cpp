#include <iostream>
#include "listPrioQ.h"

void printPeaked(ListPrioQ &kolejka)
{
	std::cout << "I spy with my little eye " << kolejka.peek() << " at the front!\n";
	//bardzo powa¿ne programowanie lol
}

int main()
{
	ListPrioQ kolejka;
	kolejka.enQ(5, 5);
	kolejka.enQ(10, 1);
	kolejka.enQ(1, 10);
	kolejka.enQ(7, 7);
	kolejka.displayTemp();
	kolejka.deQ();
	kolejka.changePriority(7, 0);
	printPeaked(kolejka);
}
