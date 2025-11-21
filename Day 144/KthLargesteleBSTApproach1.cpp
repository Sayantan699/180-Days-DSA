//In this approach we will do inorder traversal of BST and store the elements in a vector
//Then we will return the (size - k)th element from the vector as the kth largest element
#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};


// return the Kth largest element in the given BST rooted at 'root'
class Solution {
  public:
    void inorder(Node *root,vector<int> &nodelist){
        if(!root)
            return;
        inorder(root -> left,nodelist);
        nodelist.push_back(root -> data);
        inorder(root -> right,nodelist);
    }
    int kthLargest(Node *root, int k) {
        // Your code here
        vector<int> nodelist;
        inorder(root,nodelist); //filled the vector nodelist using call by reference
        int size = nodelist.size();
        return nodelist[size - k]; //if the largest element is v[size] then kth largest is v[size() - k]
        
    }
};

int main(){
        Node* root = new Node(5);
        root->left = new Node(3);
        root->right = new Node(8);
        root->left->left = new Node(2);
        root->left->right = new Node(4);
        int k = 3;
        Solution sol;
        cout<<sol.kthLargest(root,k);
                
        return 0;
}