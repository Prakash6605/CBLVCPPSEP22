#include<bits/stdc++.h>
using namespace std;

int height(struct Node* node){
        // code here 
        if( node == NULL){
            return 0;
        }
        
        int lh = height(node->left);
        int rh = height(node->right);
        
        return max(lh,rh)+1;
}

class Solution {
public:
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }

        return max(height(root->left) , height(root->right)) + 1 ;
    }
    int diameterOfBinaryTree(TreeNode* root) {

        if(root == NULL){
            return 0;
        }

        int ld = diameterOfBinaryTree(root->left);
        int rd = diameterOfBinaryTree(root->right);

        int cd = height(root->left) + height(root->right) ;

        return max({ld,rd,cd});
        
    }
};

int main(){

}