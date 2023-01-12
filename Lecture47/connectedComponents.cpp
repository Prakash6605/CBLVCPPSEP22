//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    void dfs(vector<vector<int>> adj , int src , bool visited[]){
        
        visited[src] = true;
        
        int n = adj[src].size();
        
        for(int i = 0 ; i< n ; i++){
            
            if(adj[src][i] == 1 && visited[i] == false){
                dfs(adj,i,visited);
            }
        }
        return;
        
    }
    int numProvinces(vector<vector<int>> adj, int V) {
        // code here
        
        int n = V;
        
        bool visited[n];
        memset(visited,0,sizeof(visited));
        
        int components = 0 ;
        for(int i = 0 ; i < n ; i++){
            if(visited[i] == false){
                
                components++;
                
                dfs(adj,i,visited);
            }
        }
        
        return components;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends