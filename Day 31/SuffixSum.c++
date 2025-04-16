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

    vector<int> suffix(n);
    suffix[n - 1] = arr[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        suffix[i] = suffix[i + 1] + arr[i];
    }

    cout << "suffix sum array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << suffix[i] << " ";
    }
    cout << endl;

    return 0;
}
