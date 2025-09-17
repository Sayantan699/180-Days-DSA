#include <iostream>
using namespace std;

class Student
{
    string name;
    int *data;

public:
    Student()
    {
        name = "Sayantan";
        data = new int[100];
        *data = 10;
        cout << "Constructor is called.." << endl;
    }

    // Destructor is a function that is going to be called before an object is destroyed
    // Its releases the memory that are dynamically allocated to the object
    ~Student()
    {
        // Destructor is releasing the dynamically allocated memory for data
        delete data;
        cout << "Destructor is called..";
    }
};

int main()
{
    Student A1; // A1 is a stack object i.e automcatically cleanup no need to write delete A1
    // dynamically created object

    Student *A2 = new Student;
    // A2 is a heap object..Needs to cleanup manually coz compiler doesnt know when its work ended..

    delete A2; // Have to call destructor dynamically for this else memory leak will occur

    return 0;
}