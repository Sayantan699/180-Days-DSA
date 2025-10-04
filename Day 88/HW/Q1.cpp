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

    Node *Head = new Node(arr[0]);

    // Iterative Approach
    Node *curr = Head;

    for (int i = 1; i < n; i++)
    {

        Node *temp = new Node(arr[i]);
        curr->next = temp;
        temp->prev = curr;
        curr = temp;
    }

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