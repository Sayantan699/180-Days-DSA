#include <iostream>
using namespace std;

class Customer
{
    string name;
    int acc_number;
    int balance;

public:
    // Default constructor
    Customer()
    {
        // cout << "Hello Constructor\n";
        name = "Sayantan";
        acc_number = 70;
        balance = 10;
    }

    // Parameterized Constructor
    Customer(string name, int acc_number, int balance)
    {
        // this stores the address of the object created..
        this->name = name;
        this->acc_number = acc_number;
        this->balance = balance;
    }

    void display()
    {
        cout << name << " " << acc_number << " " << balance << endl;
    }
};

int main()
{
    Customer A1; // Object is being formed!!
    A1.display();

    Customer A2;
    ;
    A2.display();
}