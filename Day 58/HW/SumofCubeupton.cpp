/*
Q1.Sum of cubes of N natural numbers using Recursion

*/

#include <iostream>
using namespace std;

int sumofcube(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * n * n + sumofcube(n - 1);
}
int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << sumofcube(n);
    return 0;
}