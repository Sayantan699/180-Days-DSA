#include <iostream>
using namespace std;

class Student
{
    string name;
    int *data;

public:
    Student()
    {
        cout << "Constructor is called.." << endl;
    }

    // Destructor is a function that is going to be called before an object is destroyed
    // Its releases the memory that are dynamically allocated to the object
    ~Student()
    {
        cout << "Destructor is called..";
    }
};

int main()
{
    Student A1;

    return 0;
}