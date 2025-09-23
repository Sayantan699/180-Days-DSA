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

    int x = 3;      // position where we want to insert
    int value = 60; // New Node value

    Node *Head = NULL;
    Node *tail = NULL;

    for (int i = 0; i < n; i++)
    {
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
            tail = Head;
        }
        else
        {
            tail->next = new Node(arr[i]);
            tail = tail->next;
        }
    }

    if (x == 1)
    {
        Node *temp2 = new Node(value);
        temp2->next = Head;
        Head = temp2;
    }
    else
    {
        Node *temp = Head;
        int steps = x - 1; // move to (x-1)th node
        while (--steps && temp != NULL)
        {
            temp = temp->next;
        }

        if (temp != NULL)
        {
            Node *temp2 = new Node(value);
            temp2->next = temp->next;
            temp->next = temp2;
        }
        else
        {
            cout << "Position out of range!" << endl;
        }
    }

    // Printing the LL
    Node *temp1 = Head;
    while (temp1 != NULL)
    {
        cout << temp1->data << "->";
        temp1 = temp1->next;
    }
    cout << "NULL";

    return 0;
}
