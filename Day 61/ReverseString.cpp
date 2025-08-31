#include <iostream>
using namespace std;

string revstr(string &str, int start, int end)
{
    if (start >= end)
        return str;
    char c = str[start];
    str[start] = str[end];
    str[end] = c;
    return revstr(str, start + 1, end - 1);
}

int main()
{
    string str;
    cout << "Enter the String: ";
    cin >> str;

    cout << "The original String: " << str;

    cout << endl;

    cout << "The reversed String: " << revstr(str, 0, str.size() - 1);

    return 0;
}