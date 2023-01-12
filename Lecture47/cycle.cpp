//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
    bool isCyclePresent(vector<int> adj[] , int n , int src , bool visited[] , int parent[]){
        
        visited[src] = true;
        
        
        for(int neigh : adj[src]){
            
            if(visited[neigh] == true && neigh != parent[src]){
                return true;
            }
            
            if(visited[neigh] == false){
                parent[neigh] = src ;
                bool seeAhead = isCyclePresent(adj,n,neigh,visited,parent);
                
                if(seeAhead == true){
                    return true;
                }
            }
        }
        return false;
        
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        
        int n = V;
        
        bool visited[n];
        
        memset(visited,0,sizeof(visited));
        
        int parent[n];
        
        memset(parent,-1,sizeof(parent));
        
        for(int i = 0 ; i < n ; i++){
            if(visited[i] == false){
                bool check = isCyclePresent(adj,n,i,visited,parent);
                if(check == true){
                    return true;
                }
            }
        }
        return false;
        
        
        
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}
// } Driver Code Ends