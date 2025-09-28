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

    int x;
    cout << "Enter the value of new node u want to insert: ";
    cin >> x;

    int pos;
    cout << "Enter the position to enter the new Node: ";
    cin >> pos;

    if (pos == 0)
    { // i.e enter at first

        Node *ptr = new Node(x);
        ptr->next = Head;
        Head->prev = ptr;
        Head = ptr;
    }
    else if (pos == n)
    { // last of Linked List

        Node *ptr = new Node(x);
        Node *curr = Head;
        while (curr->next != NULL)
            curr = curr->next;
        // Now curr is at last node
        curr->next = ptr;
        ptr->prev = curr;
        ptr->next = NULL;
    }
    else
    {

        Node *curr = Head;
        while (--pos)
        {
            curr = curr->next;
        }
        Node *ptr = new Node(x);
        ptr->next = curr->next;
        ptr->prev = curr;
        curr->next = ptr;
        ptr->next->prev = ptr;
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