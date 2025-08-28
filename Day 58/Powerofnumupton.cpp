#include <iostream>
using namespace std;

int pow(int num, int n)
{
    if (n == 1)
    {
        return num;
    }
    return num * pow(num, n - 1);
}
int main()
{
    int num, n;
    cout << "Enter the number: ";
    cin >> num;

    cout << "Enter value of n upto which u want num...";
    cin >> n;
    cout << pow(num, n);
    return 0;
}