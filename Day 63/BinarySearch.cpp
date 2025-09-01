#include <iostream>
using namespace std;

bool binsearch(int arr[], int start, int end, int X)
{

    if (start > end)
        return false;

    int mid = start + (end - start) / 2;

    if (arr[mid] == X)
        return 1;
    else if (arr[mid] < X)
        return binsearch(arr, mid + 1, end, X);
    else
        return binsearch(arr, start, mid - 1, X);
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

    int x;
    cout << "Enter the target element: ";
    cin >> x;

    // sorting the array in ascending order using bubble sort coz Binary search works only on sorted array
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }

    cout << "The elements of the array are: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    if (binsearch(arr, 0, n - 1, x))

        cout << x << " found in the array";

    else
        cout << x << " not found in the array";

    return 0;
}