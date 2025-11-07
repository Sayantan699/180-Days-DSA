#include <bits/stdc++.h>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};


class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
        vector<int> ans;
        if(root == NULL)
            return ans;
        queue<pair<Node*,int>> q;
        map<int,int> mpp; //ind and its corresponding node value
        
        q.push({root,0});
        
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
           
            Node* node = temp.first;//node
            int ind = temp.second;//vertical index of the node
            
            mpp[ind] = node -> data;
            
            if(node -> left)
                q.push({node -> left,ind-1});
            
            if(node -> right)
                q.push({node -> right,ind+1});
            
        }
        
        for(auto p:mpp){
            ans.push_back(p.second);
        }
        
        return ans;
    }
};

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->left->right->right = new Node(5);
    Solution obj;
    vector<int> res = obj.bottomView(root);
    for(int i : res){
        cout << i << " ";
    }
    return 0;
}