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

    void display()
    {
        cout << name << " " << acc_number << " " << balance;
    }
};

int main()
{
    Customer A1; // Object is being formed!!
    A1.display();
}