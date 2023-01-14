//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
	public:
	
	void dfs(int src , vector<int> adj[] ,bool visited[] , vector<int>& ts){
	    
	    visited[src] = true;
	    // cout <<  src << endl;
	    for(auto neigh : adj[src]){
	        if(visited[neigh] == false){
	            dfs(neigh,adj,visited,ts);
	        }
	    }
	    
	    ts.push_back(src);
	    return;
	    
	}
	//Function to return list containing vertices in Topological order. 
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	    int n = V;
	    
	    bool visited[n];
	    memset(visited,0,sizeof(visited));
	    vector<int> ts;
	    for(int i = 0 ; i < n ; i++){
	        if(!visited[i]){
	            dfs(i,adj,visited,ts);
	        }
	    }
	    
	    reverse(ts.begin(),ts.end());
	    return ts;
	}
};

//{ Driver Code Starts.

/*  Function to check if elements returned by user
*   contains the elements in topological sorted form
*   V: number of vertices
*   *res: array containing elements in topological sorted form
*   adj[]: graph input
*/
int check(int V, vector <int> &res, vector<int> adj[]) {
    
    if(V!=res.size())
    return 0;
    
    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v]) return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> E >> N;
        int u, v;

        vector<int> adj[N];

        for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
        }
        
        Solution obj;
        vector <int> res = obj.topoSort(N, adj);

        cout << check(N, res, adj) << endl;
    }
    
    return 0;
}
// } Driver Code Ends