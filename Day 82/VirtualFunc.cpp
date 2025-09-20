// Dont include this one in linkedin post

#include <iostream>
using namespace std;

class Animal
{

public:
    virtual void speak() // after adding virtual its decided on runtime
    {
        cout << "huhu\n";
    }
};

class Dog : public Animal
{
public:
    void speak()
    {
        cout << "Bu Bu\n";
    }
};

int main()
{
    Animal *p;
    p = new Dog();
    p->speak(); // huhu is printing coz its already decided on compile time which speak() to call
}