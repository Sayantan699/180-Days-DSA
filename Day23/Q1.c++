/*
        An array is given in decreasing order with Key, Find the index of key, if key is not present, print -1;
*/

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    int *arr = new int[n];

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The original array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    // sorting the array in descending order using insertion sort
    int index;
    for (int i = 0; i < n - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] > arr[index])
            {
                index = j;
            }
        }
        swap(arr[i], arr[index]);
    }

    cout << "The modified array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    int key;
    cout << "Enter the key: ";
    cin >> key;

    int start = 0, end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            cout << mid << endl;
            return 0;
        }
        else if (arr[mid] < key)
            end = mid - 1; // move left
        else
            start = mid + 1; // move right
    }

    cout << -1 << endl;
    return 0;
}