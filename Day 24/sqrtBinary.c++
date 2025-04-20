#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the Number: ";
    cin >> num;
    if (num < 2)
    {
        cout << "Invalid";
        return -1;
    }
    int start = 0, end = num, mid, ans;
    while (start <= end)
    {
        mid = start + (end - start) / 2;
        if (mid * mid == num)
        {
            ans = mid;
            break;
        }
        else if (mid * mid < num)
        {
            ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }
    cout << ans;
    return 0;
}
