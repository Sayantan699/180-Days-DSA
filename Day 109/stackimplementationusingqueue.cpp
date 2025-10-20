class MyStack {
public:
    queue<int> q1;
    queue<int> q2;
    MyStack() {
        
    }

    void push(int x) {
        // push will happen only in the queue which  is not empty
        if(empty()) //when both q1 and q2 is empty!!
            q1.push(x);
        else if(q1.empty())
            q2.push(x);
        else
            q1.push(x);
    }
    
    int pop() {
         if(empty()) //when both q1 and q2 is empty!!
            return 0;
        else if(q1.empty()){
            while(q2.size() > 1){
                q1.push(q2.front());
                q2.pop();
            }
            int ele = q2.front(); //last ele of q2
            q2.pop();
            return ele;

        }
        else{
             while(q1.size() > 1){
                q2.push(q1.front());
                q1.pop();
            }
            int ele = q1.front(); //last ele of q2
            q1.pop();
            return ele;
        }
    }
    
    int top() {
        if(empty()) //when both q1 and q2 is empty!!
            return 0;
        else if(q1.empty()){
            return q2.back();
        }
        else{
           return q1.back();
        }
    }
    
    bool empty() {
         return q1.empty() && q2.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */