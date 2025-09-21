#include <iostream>

using namespace std;

int main()
{

    try
    {
        int *p = new int[1000000000]; // Bad Allocation
        cout << "Memory Allocated!!" << endl;
        delete[] p;
    }
    catch (const exception &e)
    { // The type of exception is handled by keyword "exception"
        cout << "Exception occured: " << e.what();
    }
}