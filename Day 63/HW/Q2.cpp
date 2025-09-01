// Write a recursive function to reverse the elements of an array.

#include <iostream>
using namespace std;
void reversearray(int arr[], int start, int end)
{

    if (start >= end)
    {
        return;
    }

    swap(arr[start], arr[end]);

    reversearray(arr, start + 1, end - 1);
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

    reversearray(arr, 0, n - 1);

    cout << "The elements of the array after reversing: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}