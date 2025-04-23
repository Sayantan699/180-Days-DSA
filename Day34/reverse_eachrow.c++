#include <iostream>
using namespace std;
int main()
{
    int row, col;

    cout << "Enter the no of row: ";
    cin >> row;

    cout << "Enter the no of col ";
    cin >> col;

    int **arr = new int *[row];
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }

    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "The array elements are: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int start, end;
    // reversing each row
    for (int i = 0; i < row; i++)
    {
        start = 0, end = col - 1;
        while (start < end)
        {
            swap(arr[i][start], arr[i][end]);
            start++, end--;
        }
    }

    cout << "The array elements after reversed: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}