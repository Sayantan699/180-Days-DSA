// Apporach 2

/*
Step 1 : Create 3 nodes prev,curr and future
Step2:future points to next node of current
Step3: curr points to prev node
Step 4: now prev updates to curr
Step 5: curr updates to future

*/

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

    // Reverse the LL
    Node *curr = Head;
    Node *prev = NULL;
    Node *future = NULL;

    while (curr)
    { // until Curr is not NULL
        future = curr->next;
        curr->next = prev;
        prev = curr;
        curr = future;
    }

    Head = prev;

    Node *ptr = Head;

    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << "NULL";
}