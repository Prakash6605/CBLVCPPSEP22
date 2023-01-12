#include<bits/stdc++.h>
using namespace std;

void dfs(map<int,vector<int>>& m ,int src , bool visited[]){

    visited[src] = true ;

    cout << src << " ";

    // try to iterate over its neighbours
    for(auto neigh : m[src]){
        if(visited[neigh] == false){
            dfs(m,neigh,visited);
        }
    }
    return;
}

void bfs(map<int,vector<int>> m , int src , bool visited[]){

    queue<int> q;

    //push src into the queue
    q.push(src);
    visited[src] = true;
    vector<int> ans ;
    // ans.push_back(src);

    while(q.empty() == false){

        int cur = q.front();
        q.pop();
        ans.push_back(cur);

        for(int neigh : m[cur]){
            if(visited[neigh] == false){
                visited[neigh] = true;
                q.push(neigh);
            }
        }
    }

    cout << " BFS Traversal is : " << endl;
    for(auto i : ans){
        cout << i << " " ;
    }

    return;
}


int main(){

    map<int,vector<int>> graph;

    graph[1] = {2,3};
    graph[2] = {1,4};
    graph[3] = {1,4,5};
    graph[4] = {2,3,5};
    graph[5] = { 3, 4};

    // dfs
    bool visited[6];
    memset(visited,0,sizeof(visited));

    for(int i = 1 ; i < 6 ; i++){
        visited[i] = false;
    }

    int src = 1 ;

    // dfs(graph,src,visited);

    bfs(graph,src,visited);

}