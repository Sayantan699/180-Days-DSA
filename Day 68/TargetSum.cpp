
#include <iostream>
using namespace std;

bool targetsum(int arr[], int ind, int n, int target)
{
    if (target == 0)
        return 1;
    if (ind == n || target < 0)
        return 0;
    return targetsum(arr, ind + 1, n, target) || targetsum(arr, ind + 1, n, target - arr[ind]);
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

    int target;
    cout << "Enter the target: ";
    cin >> target;

    if (targetsum(arr, 0, n, target))
        cout << "Target Found!!";
    else
        cout << "Target not  Found!!";

    return 0;
}
