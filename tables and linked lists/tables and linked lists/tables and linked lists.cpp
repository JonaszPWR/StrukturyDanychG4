#include <iostream>
#include "DynamicArray.h"
using namespace std;

//TODO: testy

struct Link
{
    int value;
    Link* next;
    Link()
    {
        value = 0;
        next = NULL;
    }
    Link(int element)
    {
        this->value = element;
        this->next = NULL;
    }
};

struct LinkedList //TODO: usuwanie i wyszukiwanie
{
    Link* head;
    LinkedList() { head = NULL; }
    void addLink(int element)
    {
        Link* newLink = new Link(element);
        if (head == NULL) {
            head = newLink;
            return;
        }
        
        Link* temp = head;
        while (temp->next != NULL) {

            temp = temp->next;
        }
 
        temp->next = newLink;
    }
    void display()
    {
        Link* temp = head;
        if (head == NULL)
        {
            cout << "List empty" << endl;
            return;
        }
        while (temp != NULL)
        {
            cout << temp->value << ", ";
            temp = temp->next;
        }
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

    LinkedList test2;
    test2.addLink(3);
    test2.addLink(4);
    test2.display();
}