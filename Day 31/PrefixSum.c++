#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The original array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    cout << "Prefix sum array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << prefix[i] << " ";
    }
    cout << endl;

    return 0;
}
