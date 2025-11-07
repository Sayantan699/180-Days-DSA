// User function Template for C++

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};
class Solution {
  public:
    vector<int> postOrder(Node* node) {
        // code here
        stack<Node*> st1,st2;
        st1.push(node);
        vector<int> ans;
        
        //this stack contains node in the order Node Right Left
        while(!st1.empty()){
            Node* temp = st1.top();
            st1.pop();
            st2.push(temp);
            //pushing left then right so that right node stay at top and stack follows the order NRL
            if(temp -> left)
                st1.push(temp -> left);
            if(temp -> right)
                st1.push(temp -> right);
            
        }
        
        //if we reverse the previous stack we get out desired order of Left Right Node
        
        while(!st2.empty()){
            ans.push_back(st2.top() -> data);
            st2.pop();
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
    root->left->right = new Node();
    root->left->right->data = 5;
    Solution obj;
    vector<int> res = obj.postOrder(root);
    for(int i : res)
        cout<<i<<" ";
    return 0;
}