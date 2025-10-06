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
};

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
        cout << "Pushed" << value << "into the stack\n";
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
        cout << "Poped" << arr[top + 1] << "from the stack\n";
    }
}
int main()
{

    return 0;
}