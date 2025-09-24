#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

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

    // Delete Node At Last

    // To delete Node at last we need a pointer to traverse till last

    if (Head != NULL) // Base Case 1: check if LL  exist or not..
    {
        if (Head->next == NULL)
        { // Base Case 2: Check if LL contains only 1 node
            Node *tmp = Head;
            Head = NULL;
            delete tmp;
        }
        else
        {
            Node *ptr = Head;
            Node *prev = NULL;
            while (ptr->next != NULL)
            {
                prev = ptr; // now prev node is pointing to ptr
                ptr = ptr->next;
            }

            delete ptr;
            prev->next = NULL;
        }
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