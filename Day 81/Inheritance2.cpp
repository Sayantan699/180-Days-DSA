#include <iostream>
using namespace std;

class Human
{
protected:
    string name;
    int age;

public:
    void work()
    {
        cout << "I am working \n";
    }

    void display()
    { // Same function is present in both parent and child but while calling it will first check child if not present then comes to parent class
        cout << name << endl;
    }
};

class Student : public Human
{
    int roll_number, fees;

public:
    Student(string name, int age, int roll_number, int fees)
    {
        this->name = name;
        this->age = age;
        this->roll_number = roll_number;
        this->fees = fees;
    }

    void display()
    {
        cout << name << " " << age << " " << roll_number << " " << fees << endl;
    }
};

int main()
{
    Student A1("Sayantan", 20, 17, 690);
    A1.work(); // we can also access work() from Human class as its public
    A1.display();
}