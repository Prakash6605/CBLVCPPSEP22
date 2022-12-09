#include<bits/stdc++.h>
using namespace std;


class node{
    public:

    int data;
    node* left;
    node* right;

    node(int d){
        data = d ;
        left = NULL ;
        right = NULL;
    }
};


node* createTree(){

    int val;
    cin >> val ;

    if(val == -1){
        return NULL;
    }

    node* root = new node(val);

    root->left = createTree();
    root->right = createTree();

    return root;


}

void inorder(node* root){

    if(root == NULL){
        return ;
    }else{

        inorder(root->left);
        cout << root->data << "  ";
        inorder(root->right);
        return ;

    }
}

bool checkBST(node* root , int min = INT_MIN , int max = INT_MAX){

    if(!root){
        return true;
    }

    if( root->data >= min && root->data <= max && checkBST(root->left,min,root->data) && checkBST(root->right,root->data,max)){
        return true;
    }
    return false;


}

bool findTarget(node* root , int target){

    if(root == NULL)return false;

    if( root->data == target ){
        return true;
    }

    if( root->data < target ){
        return findTarget(root->right,target);
    }else{
        return findTarget(root->left , target);
    }
}


int main(){

    node* root = createTree();

    inorder(root);


    if(checkBST(root)){
        cout << " IS VALID BST " << endl;
    }else{
        cout << "NOT A VALID BST "<< endl;
    }


}