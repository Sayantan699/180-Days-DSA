
#include <bits/stdc++.h>
using namespace std;
#include <vector>
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
}; 

// Function to return a list containing the level order traversal in spiral form.
class Solution {
  public:
    int count(Node* root) {
        // code here
        if(root == NULL)
            return 0;
        return 1 + count(root -> left) + count(root -> right);
    }
};

int main(){
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    Solution sol;
    int result = sol.count(root);
    cout << "Size of  binary tree: " << result << endl;

    return 0;
}