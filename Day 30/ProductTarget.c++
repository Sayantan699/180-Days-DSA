// https://practice.geeksforgeeks.org/problems/equal-to-product3836/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

/*
 In a sorted array we have to find the target element by product of two numbers from the array..
 We solve this problem using 2 pointer start and end....arr[start]*arr[end] is less than the target we increment start else we decrement end to get the desired value

*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    if (n < 2)
        return false; // Need at least two elements for a pair
    int *arr = new int[n];
    cout << "Enter the numbers: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

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

    int start = 0, end = n - 1;

    int target;
    cout << "Enter the target: " << endl;
    cin >> target;
    while (start < end)
    {
        long long product = (long long)arr[start] * arr[end];
        if (product == target)
        {
            return true;
        }
        else if (product < target)
        {
            start++;
        }
        else
        {
            end--;
        }
    }

    return false;
}