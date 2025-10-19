#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    cout << "Front element is: " << q.front() << endl;
    q.pop();
    cout << "Front element after pop is: " << q.front() << endl;
    
    cout << "Back element is: " << q.back() << endl;

    cout << "Size of the queue is: " << q.size() << endl;

    if(q.empty()){ 
        cout << "Queue is empty" << endl;
    } else {
        cout << "Queue is not empty" << endl;
    }
    return 0;
}