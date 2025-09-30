// Remove loop in Linked List

// Given the head of a singly linked list, the task is to remove a cycle if present.
// A cycle exists when a node's next pointer points back to a previous node, forming a loop.
// Internally, a variable pos denotes the index of the node where the cycle starts, but it is not passed as a parameter.
// The terminal will print true if a cycle is removed otherwise, it will print false.

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

Node *CreateCLL(int arr[], int size)
{
    if (size == 0)
        return NULL;

    Node *head = new Node(arr[0]);
    Node *last = head;

    for (int i = 1; i < size; i++)
    {
        Node *temp = new Node(arr[i]);
        last->next = temp; // forward link only
        last = temp;
    }

    // close the circle
    last->next = head;

    return head;
}

void RemoveLoop(Node *head)
{
    if (head == NULL)
        return;

    Node *slow = head;
    Node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
            break;
    }
    if (fast == NULL || fast->next == NULL)
    { // i.e its not a circular LL
        return;
    }
    slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    while (slow->next != fast)
    {
        slow = slow->next;
    }

    slow->next = NULL;
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

    // Create CLL directly
    Node *Head = CreateCLL(arr, n);

    // Print CLL (print n times to avoid infinite loop)
    cout << "Circular Linked List: ";
    Node *ptr = Head;
    for (int i = 0; i < n; i++)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
    }
    cout << "(back to Head)" << endl;

    return 0;
}
