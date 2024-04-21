#include "listPrioQ.h"

void ListPrioQ::enQ(int element, int prio)
{
	Link* newLink = new Link(element, prio);
	if (head == NULL)
	{
		head = newLink;
		return;
	}
	Link* temp = head;
	if (temp->priority < prio)
	{
		newLink->next = head;
		head = newLink;
		return;
	}
	while (temp->next != NULL && temp->next->priority >= prio)
		temp = temp->next;
	if (temp->next == NULL)
	{
		temp->next = newLink;
		return;
	}
	else if (temp->next->priority < prio)
	{
		auto after = temp->next;
		temp->next = newLink;
		newLink->next = after;
		return;
	}
	else
		std::cout << "your code is broken lol";
};
void ListPrioQ::deQ(int prio) //TODO: delet this
{
	if (head == NULL)
	{
		std::cout << "can't remove elements from empty queue\n";
		return;
	}
	Link* temp = head;
	while (temp->next != NULL && temp->next->priority != prio)
		temp = temp->next;
	if (temp->next == NULL)
	{
		std::cout << "no element with given priority in queue\n";
		return;
	}
	else
	{
		auto deleteThis = temp->next;
		temp->next = temp->next->next;
		delete deleteThis;
	}
}
int ListPrioQ::deQ() //delet this
{
	if (head == NULL)
	{
		std::cout << "can't remove elements from empty queue\n";
		return -1;
	}
	Link* temp = head;
	head = temp->next;
	int tempVal = temp->value;
	delete temp;
	return tempVal;
}
int ListPrioQ::peek()
{
	if (head == NULL)
	{
		std::cout << "can't remove elements from empty queue\n";
		return -1;
	}
	else return head->value;
}
void ListPrioQ::changePriority(int oldPrio, int newPrio)
{
	Link* temp = head;
	if (head->priority == oldPrio)
	{
		int valueBuffer = head->value;
		auto toDelete = head;
		head = toDelete->next;
		delete toDelete;
		enQ(valueBuffer, newPrio);
		return;
	}
	while (temp->next != NULL && temp->next->priority != oldPrio)
		temp = temp->next;
	if (temp->next == NULL)
	{
		std::cout << "No queued element with that priority";
		return;
	}
	else
	{
		int valueBuffer = temp->next->value;
		auto toDelete = temp->next;
		temp->next = toDelete->next;
		delete toDelete;
		enQ(valueBuffer, newPrio);
	}
}
void ListPrioQ::displayTemp()
{
	Link* temp = head;
	if (head == NULL)
	{
		cout << "No one in Q" << endl;
		return;
	}
	while (temp != NULL)
	{
		cout << temp->value << " with prio " << temp->priority << ", ";
		temp = temp->next;
	}
	cout << endl;
}