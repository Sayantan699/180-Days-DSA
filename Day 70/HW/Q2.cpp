// // Permutations of a String

// Given a string s, which may contain duplicate characters, your task is to generate and return an array of
// all unique permutations of the string.You can return your answer in any order.

// Examples :

//     Input : s = "ABC" Output : [ "ABC", "ACB", "BAC", "BCA", "CAB", "CBA" ]
//     Explanation : Given string ABC has 6 unique permutations.

#include <iostream>
#include <vector>
using namespace std;

void permuteString(string str, string temp, vector<string> &ans, vector<bool> &visited, int n)
{
    if (temp.size() == visited.size())
    {
        ans.push_back(temp);
        return;
    }
    for (int i = 0; i < n; i++)
    {
        if (visited[i])
            continue;

        // checking if the prev and current character is same or not
        //  !visited[i - 1] prevent from picking the 2nd duplicated character without picking the first duplicate
        if (i > 0 && str[i] == str[i - 1] && !visited[i - 1])
            continue;

        visited[i] = 1;
        permuteString(str, temp + str[i], ans, visited, n);
        visited[i] = 0;
    }
}

int main()
{

    string str;
    cout << "Enter the String: ";
    cin >> str;

    int n = str.size();

    vector<string> ans;
    string temp;
    vector<bool> visited(n, 0);

    permuteString(str, temp, ans, visited, n);

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
        {
            cout << ans[i][j];
        }
        cout << endl;
    }

    return 0;
}