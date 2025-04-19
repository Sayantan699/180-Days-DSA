/*
    Find First and Last Position of Element in Sorted Array


    Implementation - Just like binary search...

    In case of First occurence after finding an element we store the index and look the previos indexes as the element may be present in the
    previous index since we are finding the 1st occurence we will try to get the minimum position of the target elementi.e we check on left side
    by using end = mid-1

     In case of Last occurence after finding an element we store the index and look the next indexes as the element may be present in the
    next index since we are finding the last occurence we will try to get the max position of the target element i.e we check on right side
    start = mid +1

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

    int first = -1, last = -1;
    int start = 0, end = n - 1;
    // For 1st occurence
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }
    cout << "1st occurence: " << first << endl;
    // for last occurence
    start = 0, end = n - 1; // we have to reset before the next binary search
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] < target)
            start = mid + 1;
        else
            end = mid - 1;
    }

    cout << "last occurence: " << last;
    return 0;
}