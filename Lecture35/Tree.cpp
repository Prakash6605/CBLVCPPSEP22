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

int count(node* root){

    if(root == NULL){
        return 0;
    }

    int l = count(root->left);
    int r = count(root->right);

    int ans = 1 + l + r ;

    return ans;

}

int main(){

    node* root = NULL;

    root = createTree();

    inorder(root);

    cout << " count of nodes " << count(root) << endl;


    return 0;
}