#include <iostream>
#include <vector>
using namespace std;

void permute(int arr[], vector<vector<int>> &ans, vector<int> &temp, vector<bool> &visited)
{
    if (temp.size() == visited.size())
    {
        ans.push_back(temp);
        return;
    }
    for (int i = 0; i < visited.size(); i++)
    {

        if (visited[i] == 0)
        {

            visited[i] = 1;
            temp.push_back(arr[i]);

            permute(arr, ans, temp, visited);

            visited[i] = 0;
            temp.pop_back();
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The elements of the array are: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<vector<int>> ans;
    vector<int> temp;
    vector<bool> visited(n, 0);

    permute(arr, ans, temp, visited);

    cout << "All the Sub arrays possible are:- " << endl;
    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++) //
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}