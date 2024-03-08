#include <iostream>
#include "DynamicArray.h"
using namespace std;

//TODO: testy

struct Link
{
    int value;
    Link* next;
    Link(int element)
    {
        this->value = element;
        this->next = nullptr;
    }
};

struct LinkedList //TODO: usuwanie i wyszukiwanie
{
    Link* head;
    LinkedList()
    {
        this->head = nullptr;
    }
    void addLink(int element)
    {
        Link* newLink = new Link(element);
        newLink->next = this->head;
        this->head = newLink;
    }
    void display()
    {
        while (head->value)
        {
            cout << head->value;//TODO: b³¹d memory access
            head = head->next;
            if (head)
                cout << ", ";
        }
        cout << endl;
    }
};

int main()
{
    DynamicArray test;
    test.addElement(1);
    test.addElement(1734);
    test.addElement(173234);
    test.removeElement(0);
    test.findElement(1734);
    test.findElement(9);
    test.addElement(5, 1);
    test.display();

    /*LinkedList test2;
    test2.addLink(3);
    test2.addLink(4);
    test2.display();*/
}