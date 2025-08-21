#include <iostream>
using namespace std;

void swap(int *p1, int *p2)
{
    *p1 = *p1 ^ *p2;
    *p2 = *p1 ^ *p2;
    *p1 = *p1 ^ *p2;
}

int main()
{
    int n1, n2;
    cout << "Enter the value of n1: ";
    cin >> n1;

    cout << "Enter the value of n2: ";
    cin >> n2;

    swap(&n1, &n2);

    cout << "The value of n1 and n2 after swap: " << n1 << " and " << n2;
    return 0;
}