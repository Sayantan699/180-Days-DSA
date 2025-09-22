#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

int main()
{
    Node *Head;

    Node *temp;
    temp = new Node(45); // New Node

    // INSERTION AT START OF LL
    if (Head == NULL)
    { // Empty LL i.e at first create the first node
        Head = new Node(5);
    }
    else
    {                      // Insert the new node at the start of LL
        temp->next = Head; // point the temp to the head node of LL
        Head = temp;       // Make that temp as Head node of LL
    }
}