/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isCompleteTree(TreeNode* root) {

        queue<TreeNode*> q;
        q.push(root);

        bool foundNull = false;

        while(!q.empty()){

            TreeNode* curNode = q.front();
            q.pop();

            if(curNode->left){
                if(foundNull == true){
                    return false;
                }
                q.push(curNode->left);
            }else{
                foundNull = true;
            }

            if(curNode->right){
                if(foundNull == true){
                    return false;
                }
                q.push(curNode->right);
            }else{
                foundNull = true;
            }

        }
        return true;
    }
};