#include <iostream>
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

struct LinkedList 
{
    Link* head;
    LinkedList()
    {
        this->head == nullptr; 
    }
    void addLink(int element)
    {
        Link* newLink = new Link(element);
        newLink->next = this->head;
        this->head = newLink;
    }
    void display()
    {
        while(head->value) 
        {
            cout << head->value;//TODO: b³¹d memory access
            head = head->next;
            if (head)
                cout << ", ";
        }
        cout << endl;
    }
};

struct DynamicArray //TODO: removeElement(), findElement()
{
private:
    int* array = NULL;
    int currentSize;
    int maxSize;
public:
    DynamicArray()
    {
        maxSize = 2;
        currentSize = 0;
        array = new int[maxSize];
    }
    void addElement(int element)
    {
        if (currentSize == maxSize)
            ggrowArray();
        array[currentSize] = element;
        currentSize++;
    }
    void growArray()
    {
        int* buffer = new int[maxSize];
        for (int i = 0; i < currentSize; i++)
            buffer[i] = array[i];
        maxSize = 2 * maxSize;
        delete[] array;
        array = new int[maxSize];
        for(int i = 0; i < currentSize; i++)
            array[i] = buffer[i];
        delete[] buffer;
    }
    void display()
    {
        for (int i = 0; i < currentSize; i++)
            std::cout << array[i] << ", ";
        std::cout << "\nMax size: " << maxSize;
    }
};

int main()
{
    /*
    DynamicArray test;
    test.addElement(1);
    test.addElement(1734);
    test.addElement(173234);
    test.display();*/
    LinkedList test2;
    test2.addLink(3);
    test2.addLink(4);
    test2.display();
}