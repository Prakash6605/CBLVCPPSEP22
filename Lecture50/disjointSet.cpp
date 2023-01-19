#include<bits/stdc++.h>
using namespace std;

int findParent(int src , vector<int> parent){

    if( src == parent[src]){
        return src;
    }

    return findParent(parent[src],parent);

}

void print(vector<int>& parent){

    for(int i = 0 ; i < parent.size() ; i++){
        cout<< i << "-> " << parent[i] << endl;
    }
    return;
}

bool disjointSet(vector<pair<int,int>> edge_list, vector<int>& parent , int n){


    int e = edge_list.size();

    for(int i = 0 ; i < e ; i++){

        int u = edge_list[i].first;
        int v = edge_list[i].second;

        cout << " edge " << u << " -- " << v << endl;

        int pu = findParent(u,parent);
        int pv = findParent(v,parent);

        cout<< " pu " << pu << " pv " <<pv << endl;

        //if parent are different then we perform union else we know cycle exists

        if( pu == pv ){
            return true;
        }else{
            // union
            parent[pu] = pv;
            // parent[pv] = pu ;
            print(parent);
        }

    }

    return false;

}


int main(){

    int n = 6 ;
    vector<int> parent(n);

    for(int i = 0 ; i < n ; i++){
        parent[i] = i ;
    }

    // parent[0] = 0 ;
    // parent[1] = 1;
    // parent[2] = 4;
    // parent[3] = 4 ;
    // parent[4] = 1;

    // creating edge list

    vector<pair<int,int>> edge_list;

    edge_list.push_back({0,1});
    edge_list.push_back({0,3});
    edge_list.push_back({1,2});
    edge_list.push_back({2,3});
    edge_list.push_back({2,4});
    edge_list.push_back({4,5});


   bool cycle =  disjointSet(edge_list,parent,n);

   if(cycle == true){
    cout << " Cycle is Present " << endl;

   }else{
    cout << " No Cycle " << endl;
   }

    // int ans = findParent(3,parent);


    return 0;
}