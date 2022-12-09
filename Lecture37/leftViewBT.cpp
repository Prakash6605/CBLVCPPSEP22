vector<int> leftView(Node *root)
{
   // Your code here
   
   queue<Node*> q;
   q.push(root);
   
   vector<int> ans;
   if( root == NULL ){
       return ans;
   }
   
   while(!q.empty()){
       
       int n = q.size();
       
       for(int i = 1 ; i <= n ; i++){
           Node* curNode = q.front();
           q.pop();
           
           if( i ==  1){
               ans.push_back(curNode->data);
           }
           
           if(curNode->left){
               q.push(curNode->left);
           }
           if(curNode->right){
               q.push(curNode->right);
           }
       }
   }
   return ans;
   
}
