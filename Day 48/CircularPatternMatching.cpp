// Circular Pattern Matching
// s1 = "cdeabroab"
// s2 = "abcde"
// We have to find that s2 exists in s1 or not.
// Return 1 if exists else return -1.
//
// Approach: Concatenate s1 with itself and perform KMP search for s2.

#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to build LPS array for pattern
vector<int> buildLPS(string &pattern)
{
    int m = pattern.size();
    vector<int> lps(m, 0);
    int pre = 0, suf = 1;

    while (suf < m)
    {
        if (pattern[pre] == pattern[suf])
        {
            lps[suf] = pre + 1;
            pre++;
            suf++;
        }
        else
        {
            if (pre == 0)
                suf++;
            else
                pre = lps[pre - 1];
        }
    }
    return lps;
}

// Function to check if s2 exists in circular rotation of s1
int circularPatternMatch(string s1, string s2)
{
    string text = s1 + s1; // concatenate s1 with itself
    string pattern = s2;   // pattern on s2 as lps will be implemented on pattern

    vector<int> lps = buildLPS(pattern);
    int i = 0, j = 0; // i for text, j for pattern

    while (i < text.size())
    {
        // matching each characters
        if (text[i] == pattern[j])
        {
            i++;
            j++;
            if (j == pattern.size()) // when j equals to the pattern size i.e pattern found in text
                return 1;            // pattern found
        }
        else
        {

            if (j > 0) // checking if there any already matched characters to optimize the time using lps
                j = lps[j - 1];
            else
                i++;
        }
    }

    return -1; // not found
}

int main()
{
    string str1, str2;
    cout << "Enter the String1: ";
    getline(cin, str1);
    cout << "Enter the String2: ";
    getline(cin, str2);

    if (circularPatternMatch(str1, str2) == 1)
        cout << "s2 found in s1" << endl;
    else
        cout << "s2 not found in s1" << endl;

    return 0;
}
