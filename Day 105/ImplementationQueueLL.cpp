#include <iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class Queue{
    public:
    Node *front;
    Node *rear;
    Queue(){
        front = nullptr;
        rear = nullptr;
    }

    bool isEmpty(){
        return front == nullptr && rear == nullptr;
    }

   void enqueue(int value){
    //Empty
    if(isEmpty()){
        Node* newNode = new Node(value);
        front = rear = newNode;
        cout << "Enqueued " << value << " into the queue!" << endl;
        return;
    }
    rear->next = new Node(value);
    cout << "Enqueued " << value << " into the queue!" << endl;
    rear = rear -> next;
   }

   void dequeue(){
    if(isEmpty()){
        cout << "Queue Underflow!" << endl;
        return;
    }
    else{
        cout << "Dequeued " << front -> data << " from the queue!" << endl;
        Node *temp = front;
        front = front -> next;
        delete temp;
        
    }
   }

   int start(){
    if(isEmpty()){
        cout << "Queue Empty..";
        return -1;
    }
    else{
        cout << "Start value of the queue is : " << front -> data  << endl;
        return front -> data;
    }
   }

};

int main(){
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    q.dequeue();
    if(!q.isEmpty())
        q.start();

    return 0;
}