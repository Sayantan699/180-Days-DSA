class SpecialStack {
  public:
  stack<int> s1;
    SpecialStack() {
        // Define Stack
        
    }

    void push(int x) {
        // Add an element to the top of Stack
        if(s1.empty()){
            s1.push(x*101+x);
        }
        else{
            s1.push(x*101+min(x,s1.top()%101));
        }
    }

    void pop() {
        // Remove the top element from the Stack
        if (!s1.empty()) {
            s1.pop();
        }
    }

    int peek() {
        // Returns top element of the Stack
        if(s1.empty())
            return -1;
        else
            return s1.top()%101;
    }

    bool isEmpty() {
        // Check if stack is empty
        return s1.empty();
    }

    int getMin() {
        // Finds minimum element of Stack
        if(!s1.empty())
            return s1.top()%101;
        return -1;
    }
};