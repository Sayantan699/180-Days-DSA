#include <iostream>
using namespace std;
int main()
{

    string s;
    cout << "Enter the String: " << endl;
    getline(cin, s);
    cout << s << endl;
    cout << "Size of String: " << s.size() << endl;

    string s1 = '\0';
    cout << s1;
}