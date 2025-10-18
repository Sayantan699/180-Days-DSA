#include<iostream>
using namespace std;

class Queue {
    public:
    int *arr;
    int front;
    int rear;
    int size;
    Queue(int n){
        arr = new int[n];
        front = -1;
        rear = -1;
        size = n;
    }

    bool isEmpty(){
        return front == -1 && rear == -1;
    }

    bool isFull(){
        return rear == size - 1;
    }

    void enqueue(int value){
        if(isEmpty()){
            cout << "Enqueued "<< value << " into the queue!\n";
            front = rear = 0;
            arr[0] = value;
            return;
        }
        if(isFull()){
            cout << "Queue Overflow!" << endl;
            return;
        }
        else
            rear++;
        
        arr[rear] = value;
        cout << "Enqueued " << value << " to the queue" << endl;
    }

    void dequeue(){
        if(isEmpty()){
            cout << "Queue Underflow!" << endl;
            return;
        }
        else{

        if(front == rear){
            cout << "Dequeued " << arr[front] << " from the queue!" << endl;
            front = rear = -1;
        }
        else{
            cout << "Dequeued " << arr[front] << "from the queue!" << endl;
            front = front + 1;
            
        }
        
        }
    }

    int start(){
        if(isEmpty()){
            cout << "Queue is Empty!" << endl;
            return -1;
        }
        else{
            return arr[front];
        }
    }
    
};

int main(){
    Queue q(5);
    q.enqueue(5);
    q.enqueue(6);
    q.dequeue();
    cout << q.start() << endl;
}