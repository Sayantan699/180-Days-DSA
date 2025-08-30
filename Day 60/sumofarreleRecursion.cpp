#include <iostream>
using namespace std;

int sum(int arr[], int ind)
{
    if (ind == 0)
    { // start from end of the array
        return arr[0];
    }

    return arr[ind] + sum(arr, ind - 1);
}

int main()
{

    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    int arr[n];

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The sum of Elements of the array  is: " << sum(arr, n - 1);

    return 0;
}