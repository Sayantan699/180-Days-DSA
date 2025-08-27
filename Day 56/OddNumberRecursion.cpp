#include <iostream>
using namespace std;

void odd(int n)
{

    if (n % 2 == 0)
    { // make sure the number is odd otherwise n-2 wont works
        n = n - 1;
    }
    if (n == 1)
    {
        cout << 1;
        return;
    }
    cout << n << " ";

    odd(n - 2);
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    odd(n);

    return 0;
}