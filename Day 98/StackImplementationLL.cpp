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

class Stack
{
public:
    Node *top;
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
        cout << "Pushed " << top->data << " in the stack\n";
    }

    void Pop()
    {
        if (top == NULL)
        {
            cout << "Stack Underflow!\n";
            return;
        }
        else
        {
            Node *temp = top;
            cout << "Popped " << top->data << " from the stack\n";
            top = top->next;
            delete temp;
            size--;
        }
    }

    int peek()
    {
        if (top == NULL)
        {
            cout << "Stack is Empty\n";
            return -1;
        }
        else
            return top->data;
    }

    bool isEmpty()
    {
        return top == NULL;
    }

    int IsSize()
    {
        return size;
    }
};

int main()
{
    Stack S;
    S.Push(5);
    S.Push(8);
    S.Push(9);
    S.Pop();
    cout << "Top element: " << S.peek() << endl;
    cout << "Current size: " << S.IsSize() << endl;
}