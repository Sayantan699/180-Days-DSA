// https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/

/*
 In a sorted array we have to find the target element by sum of two numbers from the array..
 We solve this problem using 2 pointer start and end....arr[start]+arr[end] is less than the target we increment start else we decrement end to get the desired value

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the numbers: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // sorting the array
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

    int target;
    cout << "Enter the target: " << endl;
    cin >> target;
    int start = 0, end = n - 1;
    while (start < end)
    {
        if (arr[start] + arr[end] == target)
        {
            cout << "Target present";
            return 1;
        }
        else if (arr[start] + arr[end] < target)
            start++;
        else
            end--;
    }
    cout << "Target Not present";
    return 0;
}