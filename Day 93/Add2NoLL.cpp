// Add Number Linked Lists

// You are given the head of two singly linked lists head1 and head2 representing two
// non - negative integers.You have to return the head of the linked list representing the sum of these two numbers.

// Note : There can be leading zeros in the input lists,but there should not be any leading zeros in the output list.

// Approach :-
// 1.Reverse the two LL
// 2.Add data of Nodes
// 3.Reverse the final LL

#include <iostream>
using namespace std;

class Node
{
public:
    Node *next;
    int data;

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

Node *ReverseLL(Node *curr, Node *prev)
{
    if (curr == NULL)
    {
        return prev;
    }
    Node *fut = curr->next;
    curr->next = prev;
    return ReverseLL(fut, curr);
}

int main()
{

    int n, n2;
    cout << "Enter the size of the 1st array: ";
    cin >> n;

    cout << "Enter the size of the 2nd array: ";
    cin >> n2;

    int arr1[n];
    int arr2[n2];
    cout << "Enter the elements of array1: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter the elements of array2: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    cout << endl;

    // Create LL directly
    Node *Head = CreateLL(arr1, 0, n);
    Node *Head2 = CreateLL(arr2, 0, n2);

    cout << "1st Linked List: ";
    Node *ptr1 = Head;
    while (ptr1 != NULL)
    {
        cout << ptr1->data << "->";
        ptr1 = ptr1->next;
    }
    cout << "NULL" << endl;

    Head = ReverseLL(Head, NULL);

    cout << "1st Linked List after being reversed: ";
    Node *revptr1 = Head;
    while (revptr1 != NULL)
    {
        cout << revptr1->data << "->";
        revptr1 = revptr1->next;
    }
    cout << "NULL" << endl;

    cout << "2nd Linked List: ";
    Node *ptr2 = Head2;
    while (ptr2 != NULL)
    {
        cout << ptr2->data << "->";
        ptr2 = ptr2->next;
    }
    cout << "NULL" << endl;

    Head2 = ReverseLL(Head2, NULL);

    cout << "2nd Linked List after being reversed: ";
    Node *revptr2 = Head2;
    while (revptr2 != NULL)
    {
        cout << revptr2->data << "->";
        revptr2 = revptr2->next;
    }
    cout << "NULL" << endl;

    Node *curr1 = Head;
    Node *curr2 = Head2;

    Node *head = new Node(0); // head and tail pointing to dummy node 0
    Node *tail = head;

    int carry = 0;
    while (curr1 && curr2)
    {
        int sum = curr1->data + curr2->data + carry;
        tail->next = new Node(sum % 10);
        tail = tail->next;
        curr1 = curr1->next;
        curr2 = curr2->next;
        carry = sum / 10;
    }

    while (curr1)
    {
        int sum = curr1->data + carry;
        tail->next = new Node(sum % 10);
        tail = tail->next;
        curr1 = curr1->next;
        carry = sum / 10;
    }

    while (curr2)
    {
        int sum = curr2->data + carry;
        tail->next = new Node(sum % 10);
        tail = tail->next;
        curr2 = curr2->next;
        carry = sum / 10;
    }

    while (carry)
    {
        tail->next = new Node(carry % 10);
        carry = carry / 10;
    }

    head = ReverseLL(head->next, NULL);

    cout << "Final Linked List after sum: ";
    Node *sumptr = head;
    while (sumptr != NULL)
    {
        cout << sumptr->data << "->";
        sumptr = sumptr->next;
    }
    cout << "NULL" << endl;

    return 0;
}