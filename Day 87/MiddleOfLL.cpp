

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

    Node *Head = CreateLL(arr, 0, n);

    // Count the no of nodes of the LL
    int c = 0;
    Node *temp = Head;
    while (temp != NULL)
    {
        c++;
        temp = temp->next;
    }

    c = c / 2; // Got the mid position

    temp = Head;

    while (c--)
    {
        temp = temp->next;
    }

    cout << temp->data;

    return 0;
}