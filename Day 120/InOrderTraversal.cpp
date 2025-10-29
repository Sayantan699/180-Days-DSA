#include <bits/stdc++.h>
using namespace std;
#include <vector>
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};


class Solution {
  public:
    vector<int> inOrder(Node* root) {
        // code here
        // code here
        
        vector<int> inorder;
        helper(root,inorder);
        return inorder;
        
    }
    void helper(Node* root,vector<int> &inorder){ //Call By Reference
        if(root == NULL)
            return;
        // InOrder -> Left -> Root -> Right
        helper(root -> left,inorder); //Left
        inorder.push_back(root -> data);// Root
        helper(root -> right,inorder); //Right
        
    }
    
};

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    Solution sol;
    vector<int> result = sol.inOrder(root);

    cout << "Inorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}