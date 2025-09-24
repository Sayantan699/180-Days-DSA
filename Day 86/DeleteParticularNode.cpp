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

    // Delete Node At Particular Position

    if (Head != NULL) // Base Case 1: check if LL  exist or not..
    {
        int x;
        cout << "Enter the position to be deleted: ";
        cin >> x;

        if (x < 0 || x > n)
        {
            cout << "Invalid Position";
            return 0;
        }

        if (Head->next == NULL)
        { // Base Case 2: Check if LL contains only 1 node
            Node *tmp = Head;
            Head = NULL;
            delete tmp;
        }
        else
        {
            if (x == 1)
            { // user want to delete the first Node
                Node *tmp = Head;
                Head = tmp->next;
                delete tmp;
            }
            else
            {
                Node *ptr = Head;
                Node *prev = NULL;
                x--;
                while (x--)
                {
                    prev = ptr;
                    ptr = ptr->next;
                }
                // Now ptr is pointing to positon x and prev to position x-1;

                prev->next = ptr->next; // Before deleting ptr point prev to next node of ptr
                delete ptr;
            }
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