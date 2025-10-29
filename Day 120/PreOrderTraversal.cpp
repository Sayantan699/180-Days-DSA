
#include <bits/stdc++.h>
using namespace std;
#include <vector>

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};


class Solution {
  public:
    vector<int> preOrder(Node* root) {
        // code here
        
        vector<int> preorder;
        helper(root,preorder);
        return preorder;
        
    }
    void helper(Node* root,vector<int> &preorder){ //Call By Reference
        if(root == NULL)
            return;
        // PreOrder -> Root -> Left -> Right
        preorder.push_back(root -> data);// Root
        helper(root -> left,preorder); //Left
        helper(root -> right,preorder); //Right
        
    }
};

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    Solution sol;
    vector<int> result = sol.preOrder(root);

    cout << "Preorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}