#include <iostream>
using namespace std;

bool linearsearch(int arr[], int X, int ind, int N)
{

    if (ind == N)
        return false;

    if (arr[ind] == X)
        return true;

    return linearsearch(arr, X, ind + 1, N);
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

    int x;
    cout << "Enter the target element: ";
    cin >> x;

    if (linearsearch(arr, x, 0, n))

        cout << x << " found in the array";

    else
        cout << x << " not found in the array";

    return 0;
}