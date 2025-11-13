#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left, * right;
}; 

class Solution {
  public:
    
    
    vector<int> diagonal(Node *root) {
        // code here
        queue<Node*> q;
        vector<int> ans;
        
        q.push(root);
        
        while(!q.empty()){
            Node* temp = q.front();
            q.pop();
            
            while(temp){
                if(temp -> left) q.push(temp -> left);
            ans.push_back(temp -> data);
            temp = temp -> right;
            }
        }
        return ans;
    }
};

int main() {
    // Example usage:
    Node* root = new Node{1, nullptr, nullptr};
    root->left = new Node{2, nullptr, nullptr};
    root->right = new Node{3, nullptr, nullptr};
    root->left->left = new Node{4, nullptr, nullptr};
    root->left->right = new Node{5, nullptr, nullptr};
    root->right->right = new Node{6, nullptr, nullptr};

    Solution sol;
    vector<int> result = sol.diagonal(root);

    for (int val : result) {
        cout << val << " ";
    }
    return 0;
}