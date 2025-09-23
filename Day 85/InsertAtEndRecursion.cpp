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

Node *InsertAtEnd(int arr[], int ind, int size)
{
    if (ind == size)
        return NULL;

    Node *temp;
    temp = new Node(arr[ind]);

    temp->next = InsertAtEnd(arr, ind + 1, size);

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

    Node *Head = NULL;

    Head = InsertAtEnd(arr, 0, n); // Head contains the Base Address of LL

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