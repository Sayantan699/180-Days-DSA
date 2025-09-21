#include <iostream>
using namespace std;

class Customer
{

    string name;
    int balance;
    int acc_number;

public:
    Customer() {}

    Customer(string name, int balance, int acc_number)
    {
        this->name = name;
        this->balance = balance;
        this->acc_number = acc_number;
    }

    void deposit(int amount)
    {
        if (amount <= 0)
            throw runtime_error("Invalid amount!!"); // Remaining statement will not execute
        balance += amount;
        cout << amount << "rs credited Successfully!!" << endl;
    }

    void withdraw(int amount)
    {
        if (amount <= 0 || amount > balance)
            throw runtime_error("Invalid amount!!"); // Remaining statement will not execute
        balance -= amount;
        cout << amount << "rs withdraws Successfully!!" << endl;
    }
};

int main()
{
    Customer C("Sayantan", 5000, 620);

    try
    {
        C.deposit(100);
        C.withdraw(6000); // If exception occurs no statement will execute after this
        C.deposit(200);
    }
    catch (const runtime_error &e) // its error occurs in runtime  so the exception time is runtime error
    {
        cout << "Exception Occured: " << e.what() << endl; // e stores the throw statement
    }
}