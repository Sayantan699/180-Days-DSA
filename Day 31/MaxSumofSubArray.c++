#include <iostream>
#include <vector>
#include <climits>
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

    int maxi = INT_MIN;
    for (int i = 0; i < n; i++)
    {

        int prefix = 0;

        for (int j = i; j < n; j++)
        {
            prefix += arr[j];
            maxi = max(maxi, prefix);
        }
    }
    cout << maxi;
}
