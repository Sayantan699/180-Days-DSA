#include<iostream>
using namespace std;

class Dequeue{
    int *arr;
    int size;
    int front,rear;
    
    public:
    Dequeue(int n){
        size = n;
        arr = new int[n];
        front = rear = -1;
    }

    bool isEmpty(){
        if(front == rear == -1)
            return true;
        return false;
    }

    bool isFull(){
        if((rear + 1) % size == front)
            return true;
        return false;
    }

    int push_front(int x){
        if(isEmpty()){
            front = rear = 0;
            arr[0] = x;
            return 0;
        }

        else if(isFull()){
            cout<<"Dequeue is full"<<endl;
            return -1;
        }

        else{
            front = (front - 1 + size) % size;
            arr[front] = x;
            return 0;
        }

    }

    int push_back(int x){
        if(isEmpty()){
            front = rear = 0;
            arr[0] = x;
            return 0;
        }

        else if(isFull()){
            cout<<"Dequeue is full"<<endl;
            return -1;
        }

        else{
            rear = (rear + 1) % size;
            arr[rear] = x;
            return 0;
        }
    }

    void pop_front(){
        if(isEmpty()){
            cout<<"Dequeue is empty"<<endl;
            return;
        }

        else if(front == rear){
            front = rear = -1;
        }

        else{
            front = (front + 1) % size;
        }
    }

    void pop_back(){
        if(isEmpty()){
            cout<<"Dequeue is empty"<<endl;
            return;
        }

        else if(front == rear){
            front = rear = -1;
        }

        else{
            rear = (rear - 1 + size) % size;
        }
    }

    int start(){
        if(isEmpty()){
            cout<<"Dequeue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }

    int end(){
        if(isEmpty()){
            cout<<"Dequeue is empty"<<endl;
            return -1;
        }
        return  arr[rear];
    }
};

int main(){
    Dequeue dq(5);
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(30);
    dq.push_front(40);
    dq.pop_front();
    dq.pop_back();  
    cout << "Front: " << dq.start() << endl;
    cout << "Rear: " << dq.end() << endl;
    return 0;
}
