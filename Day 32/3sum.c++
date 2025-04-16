#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool hastripletsum(vector<int> &arr, int target)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 2; i++)
    {
        int ans = target - arr[i];
        int start = i + 1, end = n - 1;
        while (start < end)
        {
            int sum = arr[start] + arr[end];
            if (sum == ans)
                return true;
            else if (sum < ans)
                start++;
            else
                end--;
        }
    }
    return false;
}

int main()
{
    int n;
    cout << "Enter the length of the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the array elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int t;
    cout << "Enter the target value: ";
    cin >> t;

    if (hastripletsum(arr, t))
        cout << "Triplet with the target sum exists!" << endl;
    else
        cout << "No such triplet exists." << endl;

    return 0;
}
