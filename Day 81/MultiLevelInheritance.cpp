#include <iostream>
using namespace std;

class Person
{
protected:
    string name;

public:
    void introduce()
    {
        cout << "Hello My name is: " << name << endl;
    }
};

class Employee : public Person
{
protected:
    int salary;

public:
    void monthlysalary()
    {
        cout << "The monthly salary is: " << salary << endl;
    }
};

class Manager : public Employee
{

public:
    string dept;

    Manager(string name, int salary, string dept)
    {
        this->name = name;
        this->salary = salary;
        this->dept = dept;
    }

    void display()
    {
        cout << "I am leading the department " << dept << endl;
    }
};

int main()
{
    Manager A1("Sayantan", 45000, "Tech");
    A1.display();

    // and we can access the monthly salary as well as name from previous classes as its a multi-level Inheritance

    A1.monthlysalary();
    A1.introduce();
};