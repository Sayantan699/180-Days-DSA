#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{
    vector<int> temp(end - start + 1);
    int left = start, right = mid + 1, ind = 0;
    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp[ind] = arr[left];
            left++, ind++;
        }
        else
        {
            temp[ind] = arr[right];
            right++, ind++;
        }
    }

    // remaing ele of left array
    while (left <= mid)
    {
        temp[ind] = arr[left];
        left++, ind++;
    }

    // remaing ele of right array
    while (right <= end)
    {
        temp[ind] = arr[right];
        right++, ind++;
    }

    // adding the merge and sorted subarray in the main array
    ind = 0;
    while (start <= end)
    {
        arr[start] = temp[ind];
        start++, ind++;
    }
}

void mergesort(int arr[], int start, int end)
{
    if (start == end)
        return;
    int mid = start + (end - start) / 2;
    mergesort(arr, start, mid);
    mergesort(arr, mid + 1, end);
    merge(arr, start, mid, end);
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

    mergesort(arr, 0, n - 1);

    cout << "The elements of the array after sorting are: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}