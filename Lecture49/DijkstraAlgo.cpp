//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

#define pii pair<int,int>
class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
    {
        // Code here
        
        priority_queue<pii,vector<pii>,greater<pii>> pq;
        
        vector<bool> visited(V,false);
        vector<int> distance(V,INT_MAX);
        
        distance[S] = 0 ;
        pq.push({0,S});
        
        
        while(!pq.empty()){
            
            pii cur = pq.top();
            pq.pop();
            int src = cur.second;
            int cost = cur.first;
            
            visited[src] = true;
            
            
            int l = adj[src].size();
            for(int i = 0 ; i < l ; i++){
                int v = adj[src][i][0];
                int edgeCost = adj[src][i][1];
                
                if(visited[v] == false && distance[v] > distance[src] + edgeCost){
                    distance[v] = distance[src] + edgeCost;
                    pq.push({distance[v],v});
                }
            }
            
        }
        return distance;
    }
};


//{ Driver Code Starts.


int main()
{
    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;
        vector<vector<int>> adj[V];
        int i=0;
        while (i++<E) {
            int u, v, w;
            cin >> u >> v >> w;
            vector<int> t1,t2;
            t1.push_back(v);
            t1.push_back(w);
            adj[u].push_back(t1);
            t2.push_back(u);
            t2.push_back(w);
            adj[v].push_back(t2);
        }
        int S;
        cin>>S;
        
        Solution obj;
    	vector<int> res = obj.dijkstra(V, adj, S);
    	
    	for(int i=0; i<V; i++)
    	    cout<<res[i]<<" ";
    	cout<<endl;
    }

    return 0;
}


// } Driver Code Ends