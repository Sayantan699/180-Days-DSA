#include <bits/stdc++.h> 

class Node{
    public:
    int ind;
    Node *next;
    Node(int x){
        ind = x;
        next = NULL;
    }
};
class NStack
{
public:
    // Initialize your data structure.
    int *arr;
    Node **top;

    stack<int> st;
    NStack(int N, int S)
    {
        // Write your code here.
        arr = new int[S]; //original array which contains the element of stack
        top = new Node*[N];
        for(int i=0;i<N;i++){
            top[i] = NULL;
        }

        for(int i=0;i<S;i++){
            st.push(i); //empty stack that contains the empty index number
        }
       
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        // Write your code here.
        if(st.empty())
            return false;
        arr[st.top()] = x;
        Node *temp = new Node(st.top());
        temp -> next = top[m-1];
        top[m-1] = temp;
        st.pop(); //once pushed removed that previous index from stack
        return true;
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        // Write your code here.
        if(top[m-1] == NULL)
            return -1;
        st.push(top[m-1] -> ind);
        int ele = arr[top[m-1] -> ind];
        top[m-1] = top[m-1] -> next;
        return ele;
    }
};