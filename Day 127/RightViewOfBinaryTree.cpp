#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};


class Solution {
  public:
  
    void Rview(Node* root,int level,vector<int> &ans){
        
        if(root == NULL)
            return;
        
        if(level == ans.size()){
            ans.push_back(root -> data);
        }
        
        Rview(root -> right,level + 1,ans);
        Rview(root -> left,level + 1,ans);
        
    }
    vector<int> rightView(Node *root) {
        // code here
        vector<int> ans;
        if(root == NULL)
            return ans;
        
        Rview(root,0,ans);
        return ans;
        
    }
};

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    Solution sol;
    vector<int> result = sol.rightView(root);
    for(int val : result) {
        cout << val << " ";
    }
    return 0;
}