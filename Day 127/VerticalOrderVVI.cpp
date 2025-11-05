#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int value) {
        val = value;
        left = nullptr;
        right = nullptr;
    }
};

vector<vector<int>> verticalTraversal(TreeNode* root) {
        queue<pair<TreeNode*,pair<int,int>>> q;
        q.push({root,{0,0}}); //root node where vertical and level order both indexing is 0

        map<int,map<int,multiset<int>>> nodes;
        /*
        This map stores:
        key (int x) → vertical index (column)
        value → another map where:

        key (int y) → level (depth)
        value (multiset<int>) → all node values that exist at that (x, y) position
        */

        while(!q.empty()){

            auto temp = q.front(); //why we are using auto here? --> That means each element of q is of type: pair<TreeNode*, pair<int,int>>
            /*
            q.front() returns a reference to the first element of that queue,
            which is of type pair<TreeNode*, pair<int,int>>& and not TreeNode* itself.
            Using auto allows the compiler to automatically deduce the correct type for temp,
            */
            q.pop();

            TreeNode* node = temp.first; //node
            int x = temp.second.first; //vertical ind
            int y = temp.second.second; //level
            nodes[x][y].insert(node -> val); //value of that particular node stored in map

            if(node -> left)
                q.push({node -> left,{x-1,y+1}}); //going left and down vertical ind dec and level inc
            if(node -> right)
                q.push({node -> right,{x+1,y+1}}); //going right and down vertical ind inc and level dec
        }
    
        vector<vector<int>> ans;
        for(auto p:nodes){
            /*
            p is one key-value pair of the outer map
→ p.first = vertical index (x)
→ p.second = map<int, multiset<int>> (inner map of level → values)
*/
            vector<int> col; //This will store all node values index wise for a particular vertical index (x)
            for(auto q:p.second){
                /*
                Here, q is one key-value pair of the inner map:
                    q.first = level (y)
                    q.second = multiset<int> (values at this position)*/
                col.insert(col.end(),q.second.begin(),q.second.end()); //col.end() is an iterator that points just after the last element of the vector.


                /*
                q.second.begin() and q.second.end() represent all node values (sorted because multiset keeps ascending order).

                We use insert() to append these values to the end of col.
                */
            }
            ans.push_back(col);
        }

        return ans;
    }
int main() {
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->right = new TreeNode(6);
    vector<vector<int>> result = verticalTraversal(root);
    for(const auto& col : result) {
        for(int val : col) {
            cout << val << " ";
        }
        cout << endl;
    }
    return 0;
}