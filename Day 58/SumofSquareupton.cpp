#include <iostream>
using namespace std;

int sumofsquare(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * n + sumofsquare(n - 1);
}
int main()
{
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    cout << sumofsquare(n);
    return 0;
}