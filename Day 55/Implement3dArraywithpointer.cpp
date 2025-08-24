#include <iostream>
using namespace std;

int main()
{
    int x, y, z;
    cout << "Enter dimensions (x y z): ";
    cin >> x >> y >> z;

    // Create a 3D array dynamically
    int ***arr = new int **[x]; // Layers
    for (int i = 0; i < x; i++)
    {
        arr[i] = new int *[y];
        for (int j = 0; j < y; j++)
        {
            arr[i][j] = new int[z];
        }
    }

    // Taking values from user
    cout << "\nEnter " << x * y * z << " elements:\n";
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                cin >> arr[i][j][k];
            }
        }
    }

    cout << "\n3D Array elements:\n";
    for (int i = 0; i < x; i++)
    {
        cout << "Layer " << i + 1 << ":\n";
        for (int j = 0; j < y; j++)
        {
            for (int k = 0; k < z; k++)
            {
                cout << arr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // Release memory
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            delete[] arr[i][j]; // free each row
        }
        delete[] arr[i]; // free each layer's row pointers
    }
    delete[] arr; // free main pointer

    return 0;
}
