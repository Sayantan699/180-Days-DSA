#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int size;
    int top;

public:
    Stack(int s)
    {
        size = s;
        top = -1;
        arr = new int[s];
    }

    // Push
    void push(int value)
    {
        if (top == size - 1)
        {
            cout << "Stack Overflow";
            return;
        }
        else
        {
            top++;
            arr[top] = value;
            cout << "Pushed " << value << " into the stack\n";
        }
    }

    // Pop
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow";
            return;
        }
        else
        {
            top--;
            cout << "Poped " << arr[top + 1] << " from the stack\n";
        }
    }

    // Peek
    int peek()
    {
        if (top == -1)
        {
            cout << "Stack is Empty\n";
            return -1;
        }

        return arr[top];
    }

    bool isEmpty()
    {

        return top == -1;
    }

    int stack_size()
    {
        return top + 1;
    }

    ~Stack() // Destructor
    {
        delete[] arr;
    }
};
int main()
{
    Stack s(5); // Array created of size 5
    s.push(3);
    s.push(6);
    s.push(7);
    s.push(39);
    s.pop();
    cout << "Top element: " << s.peek() << endl;
    cout << "Current size: " << s.stack_size() << endl;
    if (s.isEmpty())
        cout << "Stack is empty!!";
    else
        cout << "Stack is not empty!!";
    return 0;
}