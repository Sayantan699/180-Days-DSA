
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
    vector<int> postOrder(Node* root) {
        // code here
        vector<int> postorder;
        helper(root,postorder);
        return postorder;
        
    }
    void helper(Node* root,vector<int> &postorder){ //Call By Reference
        if(root == NULL)
            return;
        // PostOrder -> Left -> Right -> Root
        helper(root -> left,postorder); //Left
        helper(root -> right,postorder); //Right
        postorder.push_back(root -> data);// Root
        
        
    }
    
};

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    Solution sol;
    vector<int> result = sol.postOrder(root);

    cout << "Postorder Traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}