#include <iostream>
using namespace std;

class Node
{

public:
    Node *prev;
    Node *next;
    int data;

    Node(int value)
    {
        data = value;
    }
};

Node *CreateDLL(int arr[], int size, int ind, Node *prevNode)
{
    if (ind == size)
    {
        return NULL;
    }
    Node *temp = new Node(arr[ind]);
    temp->prev = prevNode;
    temp->next = CreateDLL(arr, size, ind + 1, temp);
    return temp;
}
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Elements of the array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    Node *Head = CreateDLL(arr, n, 0, NULL);

    int pos;
    cout << "Enter the position  the Node u want to delete: ";
    cin >> pos;

    if (pos == 1)
    { // i.e delete the first node

        Node *curr = Head;
        Head = curr->next;
        delete curr;
        Head->prev = NULL;
    }
    else if (pos == n)
    { // delete last node of Linked List

        Node *curr = Head;
        while (curr->next != NULL)
            curr = curr->next;
        // Now curr is at last node
        curr->prev->next = NULL;
        delete curr;
    }
    else
    {
        Node *curr = Head;
        while (--pos)
        {
            curr = curr->next;
        }
        curr->prev->next = curr->next;
        curr->next->prev = curr->prev;
        delete curr;
    }

    Node *ptr = Head;

    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }

    cout << "NULL";

    return 0;
}