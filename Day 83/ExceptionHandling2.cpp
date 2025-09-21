#include <iostream>
#include <exception>
#include <new> //header for std::bad_alloc
using namespace std;

int main()
{

    try
    {
        int *p = new int[2147452462]; // Bad Allocation
        cout << "Memory Allocated!!" << endl;
        delete[] p;
    }
    catch (const bad_alloc &e)
    {                                                             // The type of exception is handled by keyword "exception"
        cout << "Exception occured due to line 10: " << e.what(); // gives  human readable description of the exception.
    }
}