#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{

    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of columns: ";
    cin >> col;

    vector<vector<int>> matrix(row, vector<int>(col));

    cout << "Enter the elements in the array: " << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matrix[i][j];
        }
    }

    cout << "The 2d array is: " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // waveform
    for (int j = 0; j < col; j++)
    {
        // up-down
        if (j % 2 == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << matrix[i][j] << " ";
            }
        }
        else
        {

            // down-up
            for (int i = row - 1; i >= 0; i--)
            {
                cout << matrix[i][j] << " ";
            }
        }
    }

    return 0;
}