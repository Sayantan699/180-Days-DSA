#include <iostream>
using namespace std;

int countVowel(string str, int ind)
{

    int n = str.size();
    if (ind == n - 1) // Base case for last character
    {
        if (str[ind] == 'a' || str[ind] == 'e' || str[ind] == 'i' || str[ind] == 'o' || str[ind] == 'u')
            return 1;
        else
            return 0;
    }
    if (str[ind] == 'a' || str[ind] == 'e' || str[ind] == 'i' || str[ind] == 'o' || str[ind] == 'u')
        return 1 + countVowel(str, ind + 1); // if vowel add 1 and increment index
    else
        return countVowel(str, ind + 1); // if not vowel dont add 1 and increment index
}

int main()
{
    string str;
    cout << "Enter the String: ";
    cin >> str;

    cout << "The no of vowels in " << str << " is: " << countVowel(str, 0);

    return 0;
}