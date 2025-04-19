/*
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it
would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int *arr = new int[n];
    cout << "Enter the numbers in the array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The original array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;
    // selection sorting the array
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    // sort(arr.begin(), arr.end());

    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    int target;
    cout << "Enter the target: ";
    cin >> target;

    int start = 0, end = n - 1;
    // For 1st occurence
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return start;
}