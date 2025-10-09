#include <bits/stdc++.h> // or include specific headers
vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    stack<int> st;
    vector<int> ans(n, -1);

    for (int i = 0; i < n; i++)
    {
        // While stack is not empty and current element is smaller than the element at st.top()
        while (!st.empty() && arr[st.top()] > arr[i])
        {
            ans[st.top()] = arr[i];
            st.pop();
        }

        st.push(i); // Push index
    }

    return ans;
}
