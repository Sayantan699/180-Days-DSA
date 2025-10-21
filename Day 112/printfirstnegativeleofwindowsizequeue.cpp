#include<queue>
#include<iostream>
using namespace std;

int display(queue<int> q){
    queue<int> temp = q;
    while(!temp.empty()){
        if(temp.front() < 0){
            cout << "First negative element in the current window is: " << temp.front() << endl;
            return temp.front();
        }
        temp.pop();
    }
    return 0;
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
        if(arr[i] < 0)
            q.push(arr[i]);
    }

    vector<int> result;

    for(int i=k-1;i<n;i++){
        if(arr[i] < 0)
            q.push(arr[i]);
        result.push_back(display(q));
        q.pop();
    }

    return 0;
}