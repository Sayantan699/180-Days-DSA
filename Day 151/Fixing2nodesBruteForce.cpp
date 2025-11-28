// Tc - O(NlogN) + O(N) , Sc - O(N)

#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *left, *right;
    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};


class Solution {
  public:
    
    void inorder(Node* root,vector<int> &ans){
        if(!root)
            return;
        inorder(root -> left,ans);
        ans.push_back(root -> data);
        inorder(root -> right,ans);
    }
    void BuildBST(Node* root,vector<int> &ans,int &ind){
        if(!root)
            return;
        BuildBST(root -> left,ans,ind);
        root -> data = ans[ind++];
        BuildBST(root -> right,ans,ind);
    }
    void correctBST(Node* root) {
        // add code here.
        vector<int> ans;
        inorder(root,ans);
        sort(ans.begin(),ans.end());
        int ind = 0;
        BuildBST(root,ans,ind);
    }
};
int main(){
    return 0;
}