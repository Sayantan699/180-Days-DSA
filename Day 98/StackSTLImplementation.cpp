#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> S;
    S.push(6);
    S.push(6);
    S.push(6);

    cout << S.top() << endl;

    S.pop();

    cout << S.top() << endl;

    cout << S.size();
}