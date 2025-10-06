#include <iostream>
using namespace std;

class Node
{

    Node *next;
    int data;

    Node(int value)
    {
        data = value;
        next = NULL;
    }
}

class Stack
{
    int top;
    int size; // size is denoting the actual stack size

    Stack()
    {
        top = NULL;
        size = 0;
    }

    // Push
    void Push(int value)
    {
        Node *temp = new Node(value);
        if (temp == NULL)
        { // Heap is full i.e stack can not push any more elements i.e Stack Overflow!
            cout << "Stack Overflow!\n";
            return;
        }
        temp->next = top;
        top = temp;
        size++;
    }

    void Pop()
    {
        Node *temp = top;
        top = top->next;
        delete temp;
        size--;
    }
};

int main()
{
}