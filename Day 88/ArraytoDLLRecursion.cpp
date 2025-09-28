// Convert Array into Doubly Linked List
#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;
    Node(int value)
    {
        data = value;
        prev = NULL;
        next = NULL;
    }
};

Node *CreateLL(int arr[], int size, int ind, Node *prevNode = NULL)
{
    if (ind == size)
    {
        return NULL;
    }
    Node *temp = new Node(arr[ind]);
    temp->prev = prevNode;
    temp->next = CreateLL(arr, size, ind + 1, temp);
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

    Node *Head = CreateLL(arr, n, 0, NULL);

    Node *ptr = Head;

    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }

    cout << "NULL";

    return 0;
}