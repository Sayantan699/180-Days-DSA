#include<queue>
#include<iostream>
using namespace std;

void display(queue<int> q){
    queue<int> temp = q;
    cout << "The elements in the current window are: ";
    while(!temp.empty()){
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;
}

int main(){
    int k;
    cout << "Enter the size of the window: ";
    cin >> k;

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "The elements of array are: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    queue<int> q;
    for(int i=0;i<k-1;i++){
        q.push(arr[i]);
    }


    for(int i=k-1;i<n;i++){
        q.push(arr[i]);
        display(q);
        q.pop();
    }

    return 0;
}