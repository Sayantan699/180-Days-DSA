#include <iostream>
using namespace std;
int main()
{

    string s;
    cout << "Enter the String: " << endl;
    getline(cin, s);
    cout << "The Original String is: ";
    cout << s << endl;

    int start = 0, end = s.size() - 1;
    while (start < end)
    {
        swap(s[start], s[end]);
        start++;
        end--;
    }
    cout << "The Modified String is: " << endl;
    cout << s;

    return 0;
}