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

Node *InsertAtBegin(int arr[], int ind, int size, Node *prev)
{
    if (ind == size)
        return prev;

    Node *temp;
    temp = new Node(arr[ind]);

    temp->next = prev;

    return InsertAtBegin(arr, ind + 1, size, temp); // temp contains the node address which becomes prev for next node
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

    Node *Head = NULL;

    Head = InsertAtBegin(arr, 0, n, NULL); // Head becomes the last ele of array

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