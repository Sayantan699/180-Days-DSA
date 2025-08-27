#include <iostream>
using namespace std;
int main()
{
    int L, B, H;

    cout << "Enter the Dimensions: ";
    cin >> L >> B >> H;

    int ***ptr = new int **[L]; // Main pointer which will contain the 2d arrays

    // now implement the 2d array and store it in the main pointer

    for (int i = 0; i < L; i++)
    {
        ptr[i] = new int *[B];

        // now implement the 1d array which contains numbers and which is stored in the 2d array
        for (int j = 0; j < B; j++)
        {
            ptr[i][j] = new int[H];
        }
    }

    // take the values from user
    cout << "Enter elements: \n";
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < B; j++)
        {
            for (int k = 0; k < H; k++)
            {
                cin >> ptr[i][j][k];
            }
        }
    }

    // print the 3d array
    cout << "\n3D Array:\n";
    for (int i = 0; i < L; i++)
    {
        for (int j = 0; j < B; j++)
        {
            for (int k = 0; k < H; k++)
            {
                cout << ptr[i][j][k] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    // Release the memory

    return 0;
}