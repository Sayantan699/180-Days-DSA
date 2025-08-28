// Given a Number N, check whether it is prime or not using Recursion.

#include <iostream>
using namespace std;

bool IsPrime(int n)
{

    if (n == 2)
    {
        return true;
    }
    int i = 3;
    if (n % i != 0)
    {
        i++;
        IsPrime(n - 1);
    }
    return false;
}
int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    if (IsPrime(n))
        cout << n << " is Prime";
    else
        cout << n << " is not Prime";

    return 0;
}