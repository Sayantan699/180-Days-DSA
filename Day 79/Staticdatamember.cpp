#include <iostream>
using namespace std;

class Customer
{
    string name;
    int acc_number;
    int balance;
    static int total_customer;
    static int total_balance;

public:
    Customer(string name, int acc_number, int balance)
    {
        this->name = name;
        this->balance = balance;
        this->acc_number = acc_number;
        total_balance += balance;
        total_customer++;
    }

    static void accstatic()
    {
        cout << "Total number of customers: " << total_customer << endl;
        cout << "Total Balance: " << total_balance << endl;
    }

    void deposit(int amount)
    {
        if (amount > 0)
        {
            balance += amount;
            total_balance += amount;
        }
        else
            cout << "Invalid amount!!";
    }

    void withdraw(int amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            total_balance -= amount;
        }
        else
            cout << "Invalid amount!!";
    }

    void display()
    {
        cout << name << " " << acc_number << " " << balance << endl;
    }
};

// Have to initialize static data members to access them
// Only static data members can be accessed like this..
int Customer::total_customer = 0;
int Customer::total_balance = 0;

int main()
{
    Customer A1("Sayantan", 9820, 2000);
    Customer A2("Rohit", 1150, 9200);
    A1.display();
    A2.display();
    A1.deposit(2000);
    A2.withdraw(4000);
    A2.accstatic();
}