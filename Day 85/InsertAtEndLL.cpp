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
    Node *Head = NULL;

    Node *temp;
    temp = new Node(45); // New Node to add at beginning

    if (Head == NULL)
        Head = new Node(5);

    // Insert At Start of LL
    temp->next = Head;
    Head = temp;

    // Insert at End of LL

    Node *x;
    x = new Node(96); // Node to be attach at end of LL

    // Never modify Head directly during traversal, unless you really want to change the starting point of the list.

    Node *ptr = Head; // temp pointer to traverse to the end of LL
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = x;

    Node *temp1 = Head;
    while (temp1 != NULL)
    {
        cout << temp1->data << "->";
        temp1 = temp1->next;
    }
    cout << "NULL";

    return 0;
}