#include <iostream>
using namespace std;
int main()
{

    string s;
    cout << "Enter the String: " << endl;
    getline(cin, s);
    cout << "The Original String is: ";
    cout << s << endl;

    int size = 0;
    while (s[size] != '\0')
    {
        size++;
    }
    cout << "The Size of  String is: " << endl;
    cout << size;

    return 0;
}