#include<iostream>
using namespace std;

typedef struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
}  Node;

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    cout << "Root Node: " << root->data << endl;
    cout << "Left Child of Root: " << root->left->data << endl;
    cout << "Right Child of Root: " << root->right->data << endl;
    cout << "Left Child of Left Node: " << root->left->left->data << endl;
    cout << "Right Child of Left Node: " << root->left->right->data << endl;
    return 0;
}