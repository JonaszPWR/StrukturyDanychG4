#include <iostream>
#include <chrono>
#include <windows.h>
#include "DynamicArray.h"
#include "LinkedList.h"
using namespace std;
using namespace std::chrono;

int main()
{
	DynamicArray tablica;
	LinkedList lista;
	
	auto start = high_resolution_clock::now();
	for (int i = 0; i < 100; i++) { tablica.addElement(i); }
	auto stop = high_resolution_clock::now();
	auto duration = duration_cast<microseconds>(stop - start);
	cout << duration.count() <<endl;

	auto start2 = high_resolution_clock::now();
	for (int i = 0; i < 100; i++) { lista.addLink(i); }
	auto stop2 = high_resolution_clock::now();
	auto duration2 = duration_cast<microseconds>(stop2 - start2);
	cout << duration2.count() << endl;

}

/*DynamicArray test;
test.addElement(1);
test.addElement(1734);
test.addElement(173234);
test.removeElement(0);
test.findElement(1734);
test.findElement(9);
test.addElement(5, 1);
test.display();

LinkedList test2;
test2.addLink(3);
test2.addLink(4);
test2.addLink(7);
test2.addLink(4);
test2.removeLink(0);
cout << test2.findElement(7) << endl;
cout << test2.findElement(2) << endl;
test2.display();*/
