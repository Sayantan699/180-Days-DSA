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
    // Initialize Head to NULL to correctly represent an empty list
    Node *Head = NULL;

    Node *temp;
    temp = new Node(45); // New Node

    // INSERTION AT START OF LL
    if (Head == NULL)
    { // Empty LL i.e at first create the first node
        Head = new Node(5);
    }
    // Insert the new node at the start of LL
    temp->next = Head; // point the temp to the head node of LL
    Head = temp;       // Make that temp as Head node of LL

    // To print our LL

    // Create a another temporary pointer which point at head and is used to traverse the LL

    Node *temp1 = Head;
    while (temp1 != NULL)
    {
        cout << temp1->data << "->";
        temp1 = temp1->next;
    }
    cout << "NULL";
    return 0;
}