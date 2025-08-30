#include <iostream>
using namespace std;

void printarr(int arr[], int ind)
{
    if (ind == -1)
    { // start from end of the array
        return;
    }

    printarr(arr, ind - 1);
    cout << arr[ind] << " ";
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

    cout << "The Elements of the array  are: " << endl;
    printarr(arr, n - 1);
    return 0;
}