// Given a number n, find the sum of its digits uisng recursion
#include <iostream>
using namespace std;

int sumofdig(int n)
{
    if (n == 0)
        return 0;

    return n % 10 + sumofdig(n / 10);
}
int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "The sum of digits of the number " << " n is: " << sumofdig(n);

    return 0;
}