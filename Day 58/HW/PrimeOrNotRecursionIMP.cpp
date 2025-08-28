// Given a Number N, check whether it is prime or not using Recursion.

#include <iostream>
using namespace std;

bool IsPrimeHelper(int n, int i)
{
    if (i * i > n) // i.e no divisor i.e Prime
    {
        return true;
    }
    if (n % i == 0)
    {
        return false;
    }

    return IsPrimeHelper(n, i + 1);
}

bool isPrime(int n)
{
    if (n < 2)
    {
        return false;
    }
    if (n == 2)
    {
        return true;
    }
    return IsPrimeHelper(n, 2);
}

int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    if (isPrime(n))
        cout << n << " is Prime";
    else
        cout << n << " is not Prime";

    return 0;
}