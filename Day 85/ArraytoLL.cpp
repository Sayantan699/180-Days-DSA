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

    Node *Head = NULL;

    for (int i = 0; i < n; i++)
    {
        if (Head == NULL)
            Head = new Node(arr[i]);
        else
        {
            // Insert at End of LL

            Node *x;
            x = new Node(arr[i]); // Node to be attach at end of LL

            Node *ptr = Head; // temp pointer to traverse to the end of LL
            while (ptr->next != NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = x;
        }
    }

    Node *temp1 = Head;
    while (temp1 != NULL)
    {
        cout << temp1->data << "->";
        temp1 = temp1->next;
    }
    cout << "NULL";

    return 0;
}