#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* prev;
    Node* next;
    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

class Dequeue {
    public:
    Node *front;
    Node *rear;
    Dequeue() {
        front = nullptr;
        rear = nullptr;
    }

    void push_front(int x){
        if(front == NULL)
            front = rear = new Node(x);
        else{
            Node* temp = new Node(x);
            temp->next = front;
            front->prev = temp;
            front = temp;
        }
    }

    void push_back(int x){
        if(rear == NULL)
            front = rear = new Node(x);
        else{
            Node* temp = new Node(x);
            temp->prev = rear;
            rear->next = temp;
            rear = temp;
        }
    }

    void pop_front(){
        if(front == NULL)
            return;
        Node* temp = front;
        front = front->next;
        if(front != NULL)
            front->prev = NULL;
        delete temp;
    }

    void pop_back(){
        if(rear = NULL){
            return;
        }
        Node *temp = rear;
        rear = rear->prev;
        if(rear != NULL)
            rear->next = NULL;
        delete temp;
    }

    int start(){
        if(front == NULL)
            return -1;
        return front->data;
    }

    int end(){
        if(rear == NULL)
            return -1;
        return rear->data;
    }
};
int main(){
    Dequeue dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_front(5);
    cout << "Front: " << dq.start() << endl;
    cout << "Rear: " << dq.end() << endl;
    dq.pop_front();
    cout << "Front after pop: " << dq.start() << endl;
    dq.pop_back();
    cout << "Rear after pop: " << dq.end() << endl;
    return 0;
}