#include <bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
  public:
    vector<int> preOrder(Node* root) {
        // code here
        stack<Node*> st;
        st.push(root);
        vector<int> ans;
        
        while(!st.empty()){
            Node* temp = st.top();
            st.pop();
            
            ans.push_back(temp -> data);
            
            if(temp -> right)
                st.push(temp -> right);
            if(temp -> left)
                st.push(temp -> left);
            
        }
        
        return ans;
    }
};