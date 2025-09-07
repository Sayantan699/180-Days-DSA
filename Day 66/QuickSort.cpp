#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int start, int end)
{

    int pivot = arr[end];
    int pos = start;
    for (int i = start; i < end; i++)
    {
        if (arr[i] < pivot)
        {
            swap(arr[i], arr[pos]);
            pos++;
        }
    }
    swap(arr[pos], arr[end]); // put pivot in correct place
    return pos;
}

void quicksort(vector<int> &arr, int start, int end)
{
    if (start >= end)
        return; // base case
    int pivot = partition(arr, start, end);
    quicksort(arr, start, pivot - 1);
    quicksort(arr, pivot + 1, end);
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    vector<int> arr(n);
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

    quicksort(arr, 0, n - 1);

    cout << "The elements of the array after sorting are: " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}