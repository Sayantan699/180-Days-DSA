#include <iostream>
using namespace std;

bool ispal(string str, int start, int end)
{
    if (start >= end)
        return true;

    if (str[start] != str[end])
        return false;
    return ispal(str, start + 1, end - 1);
}

int main()
{
    string str;
    cout << "Enter the String: ";
    cin >> str;

    int start = 0;
    int end = str.size();

    if (ispal(str, 0, str.size() - 1))
        cout << "The String is palindrome";
    else
        cout << "The String is not palindrome";

    return 0;
}