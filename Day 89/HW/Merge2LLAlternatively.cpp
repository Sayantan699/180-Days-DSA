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

Node *CreateDLL(int arr[], int ind, int size)
{
    if (ind == size)
    {
        return NULL;
    }

    Node *temp = new Node(arr[ind]);
    temp->next = CreateDLL(arr, ind + 1, size);
    return temp;
};

int main()
{
    int n, n2;
    cout << "Enter the elements of the array1: ";
    cin >> n;

    cout << "Enter the elements of the array2: ";
    cin >> n2;

    int arr[n];
    int arr2[n2];
    cout << "Enter the elements of the array1: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The elements of the array1 are: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    cout << "Enter the elements of the array2: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    cout << "The elements of the array2 are: ";
    for (int i = 0; i < n2; i++)
    {
        cout << arr2[i] << " ";
    }

    cout << endl;

    Node *Head = CreateDLL(arr, 0, n);
    Node *Head2 = CreateDLL(arr2, 0, n2);

    cout << "The first Linked List created is: ";
    Node *ptr = Head;
    while (ptr)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << "NULL" << endl;

    cout << "The second Linked List created is: ";
    Node *ptr2 = Head2;
    while (ptr2)
    {
        cout << ptr2->data << "->";
        ptr2 = ptr2->next;
    }
    cout << "NULL" << endl;

    // Alternate Merging of Elements

    Node *head = new Node(0);
    Node *tail = head;
    while (Head && Head2)
    {
        tail->next = Head;
        Head = Head->next;
        tail = tail->next;

        tail->next = Head2;
        Head2 = Head2->next;
        tail = tail->next;
    }

    while (Head)
    {
        tail->next = Head;
    }

    while (Head2)
    {
        tail->next = Head2;
    }

    tail = head;
    head = head->next;
    delete tail;

    cout << "The Merged Linked List created is: ";
    Node *ptr3 = head;
    while (ptr3)
    {
        cout << ptr3->data << "->";
        ptr3 = ptr3->next;
    }
    cout << "NULL" << endl;

    return 0;
}