#include <iostream>
using namespace std;

void SubsetSum(int arr[], int ind, int n, int sum)
{
    if (ind == n)
    {
        cout << sum << " "; // print with space
        return;
    }

    // Case 1 = do not include arr[ind]
    SubsetSum(arr, ind + 1, n, sum);

    // Case 2 = include arr[ind]
    SubsetSum(arr, ind + 1, n, sum + arr[ind]);
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The elements of the array are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Subset sums are: ";
    SubsetSum(arr, 0, n, 0);
    cout << endl;

    return 0;
}
