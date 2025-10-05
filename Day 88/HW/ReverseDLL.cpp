#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int value)
    {
        data = value;
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
};

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
    cout << "NULL" << endl;

    // Reversing the DLL
    Node *curr = Head;
    Node *future = NULL;

    Node *previous = NULL;
    while (curr)
    {
        future = curr->next;
        curr->next = previous;
        curr->prev = future;
        previous = curr;
        curr = future;
    }

    Head = previous;

    cout << "Reversed Doubly Linked List: ";
    Node *ptr2 = Head;
    while (ptr2)
    {

        if (ptr2->next == NULL)
        {
            cout << ptr2->data << "->";
            break;
        }
        cout << ptr2->data << "<->";
        ptr2 = ptr2->next;
    }
    cout << "NULL";
    return 0;
}