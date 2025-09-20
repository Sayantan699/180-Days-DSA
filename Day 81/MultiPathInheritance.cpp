#include <iostream>
using namespace std;

class Human
{
public:
    string name;

    void display()
    {
        cout << "My name is: " << name << endl;
    }
};

class Engineer : virtual public Human // with virtual we are using only one shared copy of the same variable from parent class
{                                     // Inherits from Human
public:
    string specialization;

    void work()
    {
        cout << "I have specialization in: " << specialization << endl;
    }
};

class Youtuber : virtual public Human
{ // Inherits from engineer
public:
    int subscribers;

    void contentCreator()
    {
        cout << "I have a subscriber base of: " << subscribers << endl;
    }
};

class CodeTeacher : public Engineer, public Youtuber
{ // CodeTeacher class inherits from both Engineer and Youtuber
public:
    int salary;

    // If we already defined a parameterized constructor and dont create a default constructor
    // then the compiler will not create a default one by itself i.e encoutering error so we need to create a default constructor
    CodeTeacher() // default constructor
    {
    }
    CodeTeacher(string name, string specialization, int subscribers, int salary)
    {
        this->name = name; // here  compiler gets confused which copy of name to use as coz name is also present in parent class Human
        this->specialization = specialization;
        this->subscribers = subscribers;
        this->salary = salary;
    }

    void showDetails()
    {
        display();
        work();
        contentCreator();
        cout << "My salary is: " << salary << endl;
    }
};
int main()
{
    CodeTeacher A1("Sayantan", "CSE", 500, 7900);
    A1.showDetails();
};