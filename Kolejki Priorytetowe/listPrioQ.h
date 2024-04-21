#pragma once
#include <iostream>
#include <optional> // this for deQ() if it works
using namespace std;

struct Link
{
    int value;
    int priority;
    Link* next;
    Link()
    {
        value = 0;
        priority = 0;
        next = NULL;
    }
    Link(int element, int prio)
    {
        this->value = element;
        this->priority = prio;
        this->next = NULL;
    }
};

struct ListPrioQ
{
    Link* head;
    Link* tail;
    ListPrioQ() { head = NULL; }
    void enQ(int element, int priority);
    void deQ(int priority); //TODO: delet this (including implementation)
    int deQ();
    int peek();
    void changePriority(int oldPriority, int newPriority);
    void displayTemp();
};