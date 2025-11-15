

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
        vector<int> ans;
        
       Node* curr = node;
        while(curr){
            if(!curr -> right){
                ans.push_back(curr -> data);
                curr = curr -> left;
            }
            else{
                Node* temp = curr -> right;
                while(temp -> left != NULL && temp -> left != curr){
                    temp = temp -> left;
                }
                if(temp -> left == NULL){
                    ans.push_back(curr -> data);
                    temp -> left = curr;
                    curr = curr -> right;
                }
                else{ //link was already creaated
                    temp -> left = NULL; //break the link
                    curr = curr -> left;
                }
                
            }
        }
        //Now ans has the order of Root -> right -> left
        //But we want left -> right -> Root so just reverse ans
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
int main(){
    Node* root = new Node();
    root -> data = 1;
    root -> left = new Node();
    root -> left -> data = 2;
    root -> right = new Node();
    root -> right -> data = 3;
    root -> left -> left = new Node();
    root -> left -> left -> data = 4;
    root -> left -> right = new Node();
    root -> left -> right -> data = 5;
    Solution obj;
    vector<int> res = obj.postOrder(root);
    for(auto i: res){
        cout<<i<<" ";
    }
    return 0;
}