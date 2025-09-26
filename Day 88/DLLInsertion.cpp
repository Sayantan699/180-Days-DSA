// Insert one element at start of Doubly Linked List
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

    // Node *CreateLL(int arr[], int size, int ind, Node *prev, Node *next)
    // {
    //     if (ind == size)
    //     {
    //         return NULL;
    //     }
    //     Node *temp = new Node(arr[ind]);
    //     temp->next = CreateLL(arr, size, ind + 1, prev, next);
    //     temp->prev = CreateLL(arr, size, ind, prev, next);
    //     return temp;
    // }
};

int main()
{
    // int n;
    // cout << "Enter the size of the array: ";
    // cin >> n;

    // int arr[n];
    // cout << "Enter the elements of the array: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }

    // cout << "Elements of the array are: ";
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // cout << endl;
    // Node *prev = NULL;
    // Node *next = NULL;
    // Node *Head = CreateLL(arr, n, 0, NULL, NULL);

    Node *Head = NULL;
    // Head = Tail = NULL;
    // Node *curr = Head;

    if (Head == NULL)
    {
        Head = new Node(5);
    }

    // Insert at start of LL

    Node *newNode = new Node(69);
    newNode->next = Head;
    Head->prev = newNode;
    Head = newNode;

    Node *ptr = Head;

    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }

    cout << "NULL";

    return 0;
}