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
    if (ind < 0)
    {
        return NULL;
    }
    Node *temp = new Node(arr[ind]);
    temp->prev = prevNode;
    temp->next = CreateDLL(arr, ind - 1, size, temp);
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

    // Iterative Approach
    // Node *Head = new Node(arr[0]);

    // Node *curr = Head;

    // for (int i = 1; i < n; i++)
    // {

    //     Node *temp = new Node(arr[i]);
    //     curr->next = temp;
    //     temp->prev = curr;
    //     curr = temp;
    // }

    Node *Head = CreateDLL(arr, n - 1, n, NULL);

    cout << "The Doubly Linked List is: ";
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