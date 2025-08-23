#include <iostream>
using namespace std;
int main()
{
    int row, col;
    cout << "Enter the no of rows: ";
    cin >> row;

    cout << "Enter the no of cols: ";
    cin >> col;

    int **ptr = new int *[row];
    // Create 2D array
    for (int i = 0; i < row; i++)
    {
        ptr[i] = new int[col];
    }

    // taking the value from user
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> ptr[i][j];
        }
    }

    // print the value
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << ptr[i][j] << " ";
        }
        cout << endl;
    }

    // Release the memory from heap
    for (int i = 0; i < row; i++)
    {
        delete[] ptr[i];
    }
    delete[] ptr;

    return 0;
}