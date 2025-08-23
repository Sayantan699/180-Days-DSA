#include <iostream>
using namespace std;
int main()
{

    int *ptr = new int; // dynamic memory allocation
    *ptr = 50;          // value assignment
    cout << *ptr << endl;

    float *ptr2 = new float;
    *ptr2 = 69.8;
    cout << *ptr2;

    cout << *ptr2 << endl;

    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int *p = new int[n];

    // assigning values
    for (int i = 0; i < n; i++)
    {
        p[i] = i + 1;
    }

    // printing values of p
    for (int i = 0; i < n; i++)
    {
        cout << p[i] << " ";
    }

    // The memory of ptr,ptr2 and p are stored in HEAP and HEAP doesnt free memory as STACk after execution so need to delete Manualy

    delete ptr;
    delete ptr2;
    delete[] p;

    return 0;
}