#pragma once
#include <iostream>
using namespace std;

struct DynamicArray
{
private:
    int* array = NULL;
    int currentSize;
    int maxSize;
public:
    DynamicArray();
    void addElement(int element);
    int findElement(int element);
    void removeElement(int index);
    void growArray(); 
    void display();
};