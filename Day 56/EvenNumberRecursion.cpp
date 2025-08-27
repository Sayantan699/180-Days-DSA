#include <iostream>
using namespace std;

void even(int n)
{

    if (n % 2 != 0) // make sure the number is even otherwise n-2 wont works
        n--;

    if (n == 0)
    {
        cout << 0;
        return;
    }
    cout << n << " ";
    even(n - 2);
}
int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    even(n);

    return 0;
}