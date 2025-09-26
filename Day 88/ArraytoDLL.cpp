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

    // Node *Head = CreateLL(arr, n, 0, NULL, NULL);

    Node *Head, *Tail;
    Head = NULL;
    Tail = NULL;

    for (int i = 0; i < n; i++)
    {
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
            Tail = Head;
        }
        else
        {
            Node *temp = new Node(arr[i]);
            Tail->next = temp;
            temp->prev = Tail;
            Tail = temp;
        }
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