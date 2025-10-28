// 2444. Count Subarrays With Fixed Bounds
// https://leetcode.com/problems/count-subarrays-with-fixed-bounds/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int minK, maxK;
    cout << "Enter minK and maxK: ";
    cin >> minK >> maxK;

    long long count = 0;

    // Brute-force: check all subarrays
    for (int i = 0; i < n; i++) {
        bool hasMinK = false, hasMaxK = false;
        for (int j = i; j < n; j++) {
            // If element out of range, stop expanding
            if (arr[j] < minK || arr[j] > maxK)
                break;

            if (arr[j] == minK) hasMinK = true;
            if (arr[j] == maxK) hasMaxK = true;

            // If both found in current subarray, count it
            if (hasMinK && hasMaxK)
                count++;
        }
    }

    cout << "Count of subarrays with fixed bounds: " << count << endl;

    return 0;
}
