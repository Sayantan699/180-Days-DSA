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
    vector<int> topView(Node *root) {
        // code here
        vector<int> ans;
        if(root == NULL)
            return ans;
        queue<pair<Node*,int>>q; //queue contains Node and its corresponding vertical index
        map<int,int> mpp; //map contains the vertical index and the corresponding node
        q.push({root,0}); //at first pushing the root node and its vertical ind which is 0 
        
        
        while(!q.empty()){
            auto temp = q.front();
            q.pop();
            Node* node = temp.first; //the node
            int vertical_ind = temp.second; //the vertical index of node
            
            if(mpp.find(vertical_ind) == mpp.end()) 
                mpp[vertical_ind] = node -> data;
            
            if(node -> left)
                q.push({node -> left, vertical_ind-1});//goes left
            if(node -> right)
                q.push({node -> right, vertical_ind+1});//goes right
        }
        
        for(auto i:mpp){
            ans.push_back(i.second);//pushing the node value to our ans vector
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
    vector<int> ans = obj.topView(root);
    for(int i:ans)
        cout<<i<<" ";
    return 0;
}