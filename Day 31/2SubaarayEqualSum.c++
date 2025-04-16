#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int total_sum = 0;
    for (int i = 0; i < n; i++)
    {
        total_sum += arr[i];
        for (int j = 0; j < -1; j++)
        {
            prefix += arr[i];
            ans = total_sum - prefix;
            if (ans == prefix)
                return 1;
        }
    }
    return 0;
}