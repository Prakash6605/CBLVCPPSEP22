//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  bool cycleCheck(int src , vector<bool>& visited , vector<bool>& instack , vector<int> adj[]){
        
        visited[src] = true;
        instack[src] = true;
        for(auto neigh : adj[src]){
            
            if(visited[neigh] == true && instack[neigh] == true){
                return true;
            }
            else{
                if(visited[neigh] == false){
                    bool seahead = cycleCheck(neigh,visited,instack,adj);
                    if(seahead==true){
                        return true;
                    }
                }
            }
        }
        
        instack[src] = false;
        return false;
  }
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        
        int n = V;
        vector<bool> visited(n,false);
        vector<bool> instack(n,false);
        
        for(int i = 0 ; i < n ; i++){
            if(!visited[i]){
                bool res = cycleCheck(i,visited,instack,adj);
                if(res){
                    return true;
                }
            }
        }
        
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends