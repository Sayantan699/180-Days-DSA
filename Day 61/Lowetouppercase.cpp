#include <iostream>
using namespace std;

string lowertoupper(string &str, int ind)
{
    int n = str.size();
    if (ind == n) // checking if beyond string length
        return str;
    if ((int)(str[ind]) >= 65 && (int)(str[ind]) <= 90) // Already in upper case
    {
        return lowertoupper(str, ind + 1);
    }
    if (ind == n - 1)
    { // Base condition to check if last character is lower or upper case
        int c = (int)(str[ind]);
        if (c >= 97 && c <= 122)
        { // lower case to uppercase
            str[ind] -= 32;
            return str;
        }
        else // i.e already in Upper case
            return str;
    }
    if ((int)(str[ind]) >= 97 && (int)(str[ind]) <= 122)
    {
        str[ind] -= 32;
        return lowertoupper(str, ind + 1);
    }
}

int main()
{
    string str;
    cout << "Enter the String: ";
    cin >> str;

    cout << "The original String: " << str;

    cout << endl;

    cout << "The String in Upper Case is: " << lowertoupper(str, 0);

    return 0;
}