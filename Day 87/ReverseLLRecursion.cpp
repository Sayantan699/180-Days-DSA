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

Node *Reverse(Node *curr, Node *prev)
{
    if (curr == NULL)
        return prev;
    Node *future = curr->next;
    curr->next = prev;
    return Reverse(future, curr);
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

    Head = Reverse(Head, NULL);

    Node *ptr = Head;

    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << "NULL";
}