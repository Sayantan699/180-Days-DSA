#include <iostream>
using namespace std;

class Node
{
public:
    Node *next;
    Node *prev;
    int data;
    Node(int value)
    {
        data = value;
        next = NULL;
        prev = NULL;
    }
};

Node *CreateDLL(int arr[], int ind, int size, Node *prevNode)
{
    if (ind == size)
    {
        return NULL;
    }
    Node *temp = new Node(arr[ind]);
    temp->prev = prevNode;
    temp->next = CreateDLL(arr, ind + 1, size, temp);
    return temp;
}

int main()
{

    int n;
    cout << "Enter the elements of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The elements of the array are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    Node *Head = CreateDLL(arr, 0, n, NULL);

    int x;
    cout << "Enter the value of the new node u want to insert: ";
    cin >> x;

    int pos;
    cout << "Enter the position of the new node: ";
    cin >> pos;

    Node *temp = new Node(x);

    if (pos == 0) // at start
    {
        temp->next = Head;
        Head->prev = temp;
        Head = temp;
    }

    else if (pos == n)
    { // at last
        Node *curr = Head;
        while (curr->next)
        {
            curr = curr->next;
        }
        curr->next = temp;
        temp->prev = curr;
        temp->next = NULL;
    }

    else
    {
        pos = pos - 1;
        Node *curr = Head;
        while (pos--)
        {
            curr = curr->next;
        }
        // Now curr is at specified position
        temp->next = curr->next;
        curr->next->prev = temp;
        curr->next = temp;
        temp->prev = curr;
    }

    cout << "The Doubly Linked List created is: ";
    Node *ptr = Head;
    while (ptr)
    {

        if (ptr->next == NULL)
        {
            cout << ptr->data << "->";
            break;
        }
        cout << ptr->data << "<->";
        ptr = ptr->next;
    }
    cout << "NULL";

    return 0;
}