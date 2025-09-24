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

Node *CreateLL(int arr[], int ind, int size)
{

    if (ind == size)
        return NULL;

    Node *temp = new Node(arr[ind]);
    temp->next = CreateLL(arr, ind + 1, size);
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

    Head = CreateLL(arr, 0, n);

    // Delete Node At Start

    if (Head != NULL)
    {
        Node *temp = Head;

        Head = Head->next;

        delete temp;
    }

    Node *temp2 = Head;
    while (temp2 != NULL)
    {
        cout << temp2->data << "->";
        temp2 = temp2->next;
    }

    cout << "NULL";

    return 0;
}