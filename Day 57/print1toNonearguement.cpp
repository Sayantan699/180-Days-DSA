#include <iostream>
using namespace std;

void print(int n)
{
    if (n == 1)
    {
        cout << 1;
        return;
    }

    print(n - 1);
    cout << n;
}

int main()
{
    int N;
    cout << "Enter the number: ";
    cin >> N;

    print(N);

    return 0;
}