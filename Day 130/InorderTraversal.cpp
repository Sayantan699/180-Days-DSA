#include <bits/stdc++.h>
using namespace std;


struct Node {
    int data;
    Node* left;
    Node* right;
};
class Solution {
  public:
    vector<int> inOrder(Node* root) {
        // code here
        vector<int> ans;
        stack<Node*> s; //contain the nodes
        stack<bool> visited; //contains the count of visited as per node
        
        s.push(root);
        visited.push(0); //initially 0 because we start from child of node not not itself coz order is LNR
        
        while(!s.empty()){
            Node* temp = s.top();
            s.pop();
            bool flag = visited.top();
            visited.pop();
            
            if(!flag){//if flag = 0 i.e not visited
                if(temp -> right){ //pushing the child in stack s which are stil not visited
                    s.push(temp -> right);
                    visited.push(0);
                }
                
                s.push(temp); //the node itself is now visited so we pushed it and increment visited to 1
                visited.push(1);
                
                if(temp -> left){ //pushing the child in stack s which are stil not visited
                    s.push(temp -> left);
                    visited.push(0);
                }
            }
            else //if flag is 1 i.e we are visiting that node 2 i.e we directly store it in our ans vector
                ans.push_back(temp -> data);
        }
        
        return ans;
        
    }
};

int main(){
    Node* root = new Node();
    root->data = 1;
    root->left = new Node();
    root->left->data = 2;
    root->right = new Node();
    root->right->data = 3;
    root->left->left = new Node();
    root->left->left->data = 4;

    Solution sol;
    vector<int> inorder = sol.inOrder(root);
    for (int val : inorder) {
        cout << val << " ";
    }
    return 0;
}