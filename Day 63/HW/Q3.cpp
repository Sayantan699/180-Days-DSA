// Write a recursive function to rotate elements in an array to the right by 1 position.
#include <iostream>
using namespace std;
void rotatearrtoright(int arr[], int end)
{

    if (end == 0)
    {
        return;
    }

    swap(arr[end], arr[end - 1]);

    rotatearrtoright(arr, end - 1);
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

    rotatearrtoright(arr, n - 1);

    cout << "The elements of the array after rotating by 1 : " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}