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

    // Convert the Array into LL
    for (int i = 0; i < n; i++)
    {
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
        }
        else
        {
            Node *temp = Head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = new Node(arr[i]);
        }
    }

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

    // print LL
    Node *temp1 = Head;
    while (temp1 != NULL)
    {
        cout << temp1->data << "->";
        temp1 = temp1->next;
    }
    cout << "NULL";

    return 0;
}
