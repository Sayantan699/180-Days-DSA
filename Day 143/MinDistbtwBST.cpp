
#include <bits/stdc++.h>
using namespace std;
    
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
class Solution {
public:
    void minDist(TreeNode* root,int &prev,int &ans){
        if(!root)
            return;
        minDist(root -> left,prev,ans);
        if(prev != INT_MIN)
            ans = min(ans,root -> val - prev);
        prev = root -> val;
        minDist(root -> right,prev,ans);
    }
    int minDiffInBST(TreeNode* root) {
        int prev = INT_MIN;
        int ans = INT_MAX;
        minDist(root,prev,ans);
        return ans;
    }
};
int main(){
     TreeNode* root = new TreeNode(4);
    root->left = new TreeNode(2);
    root->right = new TreeNode(6);
    root->left->left = new TreeNode(1);
    root->left->right = new TreeNode(3);
    Solution sol;
    cout<<sol.minDiffInBST(root);
              
    return 0;
}