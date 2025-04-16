// https://practice.geeksforgeeks.org/problems/segregate-0s-and-1s5106/1?utm_source=geeksforgeeks&utm_medium=article_practice_tab&utm_campaign=article_practice_tab

/*
    Here we are given an array with 0 and 1 placed randomly we have to sort all 0s first then all 1s..alignas
    Here we are using binary search with time complexity o[n]

    Logic - take a variable start from index 0 and an variable end from last index...if the starting element of array is 0 then
    we will traverse right increaing startelse if arr[end] is 0 we will swap start and end, if the last element is 1 we will traverse left
    for checking..
*/

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter only 0s and 1s: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = 0, end = n - 1;
    while (start < end)
    {
        if (arr[start] == 0)
            start++;
        else
        {
            if (arr[end] == 0)
            {
                swap(arr[start], arr[end]);
                start++;
                end--;
            }
            else
                end--;
        }
    }

    cout << "The segregated array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
