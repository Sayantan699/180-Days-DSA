#include <iostream>

using namespace std;

class student
{
    // private: // By default

    // Have to make it public to access
public:
    int age;
    string name;
    int roll;

    // Function getter and setter
    void setname(string s)
    {
        name = s;
    }
    void setage(int a)
    {
        age = a;
    }

    // To print the values
    void getname()
    {
        cout << name << endl;
    }

    void getage()
    {
        cout << age;
    }
};

int main()
{
    student s1;
    // s1.age = 20;
    // s1.name = "Sayantan";
    // s1.roll = 17;

    // cout << s1.name;
    // cout << s1.age;
    // cout << s1.roll;

    s1.setname("Sayantan");
    s1.setage(20);

    s1.getname();
    s1.getage();

    return 0;
}