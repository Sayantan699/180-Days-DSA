// Ways to sum to N

//         Points : 4 Given a set of m distinct positive integers and a value ‘N’.Count the total number of ways we can form ‘N’ by adding the array elements.Repetitions and different arrangements are allowed.Note : Answer can be quite large output the answer modulo 109 +
//     7.

//     Example 1 :

//     Input : m = 3,
//             N = 7 Arr[] = {1, 5, 6} Output : 6 Explanation : The different ways are : 1 + 1 + 1 + 1 + 1 + 1 + 1 1 + 1 + 5 1 + 5 + 1 5 + 1 + 1 1 + 6 6 + 1

class Solution
{
public:
    // function to count the total
    // number of ways to sum up to 'N'
    int countWays(int arr[], int m, int N)
    {
        // code here.
        if (N == 0)
            return 1;
        if (N < 0)
            return 0;

        int ans = 0;
        for (int i = 0; i < m; i++)
        {
            ans += countWays(arr, m, N - arr[i]);
        }

        return ans;
    }
};
