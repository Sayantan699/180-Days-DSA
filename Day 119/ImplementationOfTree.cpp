#include <iostream>
#include <queue>
using namespace std;

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

// Function to print the tree level-wise (BFS)
void printLevelOrder(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;
    q.push(root);

    cout << "\nLevel order traversal of the constructed tree:\n";
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if (temp->left != NULL)
            q.push(temp->left);

        if (temp->right != NULL)
            q.push(temp->right);
    }
    cout << endl;
}

int main() {
    int root;
    cout << "Enter root node value: ";
    cin >> root;

    Node* rootNode = new Node(root);
    queue<Node*> q;
    q.push(rootNode);

    // Construction of the Binary Tree
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();

        int left, right;
        cout << "Enter left child of " << temp->data << " (-1 for no child): ";
        cin >> left;
        if (left != -1) {
            temp->left = new Node(left);
            q.push(temp->left);
        }

        cout << "Enter right child of " << temp->data << " (-1 for no child): ";
        cin >> right;
        if (right != -1) {
            temp->right = new Node(right);
            q.push(temp->right);
        }
    }

    cout << "\nTree constructed successfully!" << endl;

    // Display the constructed tree
    printLevelOrder(rootNode);

    return 0;
}
