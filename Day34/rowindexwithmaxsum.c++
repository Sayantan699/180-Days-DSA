#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of columns: ";
    cin >> col;

    // Dynamic allocation of 2D array
    int **arr = new int *[row];
    for (int i = 0; i < row; ++i)
    {
        arr[i] = new int[col];
    }

    cout << "Enter the array elements: " << endl;
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

    int maxSum = INT_MIN, index = 0;
    for (int i = 0; i < row; i++)
    {
        int total = 0;
        for (int j = 0; j < col; j++)
        {
            total += arr[i][j];
        }
        if (maxSum < total)
        {
            maxSum = total;
            index = i;
        }
    }

    cout << "Row with maximum sum is: " << index + 1 << endl;

    return 0;
}